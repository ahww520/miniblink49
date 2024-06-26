// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GIN_DICTIONARY_H_
#define GIN_DICTIONARY_H_

#include "gin/converter.h"
#include "gin/gin_export.h"
#include <functional>

namespace gin {

// Dictionary is useful when writing bindings for a function that either
// receives an arbitrary JavaScript object as an argument or returns an
// arbitrary JavaScript object as a result. For example, Dictionary is useful
// when you might use the |dictionary| type in WebIDL:
//
//   http://heycam.github.io/webidl/#idl-dictionaries
//
// WARNING: You cannot retain a Dictionary object in the heap. The underlying
//          storage for Dictionary is tied to the closest enclosing
//          v8::HandleScope. Generally speaking, you should store a Dictionary
//          on the stack.
//
class GIN_EXPORT Dictionary {
public:
    explicit Dictionary(v8::Isolate* isolate);
    Dictionary(v8::Isolate* isolate, v8::Local<v8::Object> object);
    ~Dictionary();

    static Dictionary CreateEmpty(v8::Isolate* isolate);

    template<typename T>
    bool Get(const std::string& key, T* out) const
    {
        v8::Local<v8::Value> val;

        if (object_.IsEmpty())
            return false;

        v8::Local<v8::String> k = gin::StringToV8(isolate_, key);
        v8::Maybe<bool> hasVal = object_->Has(isolate_->GetCurrentContext(), k);
        if (hasVal.IsNothing())
            return false;
        if (!hasVal.ToChecked())
            return false;

        v8::MaybeLocal<v8::Value> v = object_->Get(isolate_->GetCurrentContext(), k);
        if (v.IsEmpty())
            return false;
        if (!v.ToLocal(&val))
            return false;
        
        return ConvertFromV8(isolate_, val, out);
    }

    void GetBydefaultVal(const char* name, int defaultVal, int* outResult) const;
    void GetBydefaultVal(const char* name, bool defaultVal, bool* outResult) const;
    void GetBydefaultVal(const char* name, double defaultVal, double* outResult) const;
    void GetBydefaultVal(const char* name, std::string defaultVal, std::string* outResult) const;
    void GetBydefaultVal(const char* name, std::wstring defaultVal, std::wstring* outResult) const;

    template<typename T>
    bool Set(const std::string& key, T val)
    {
        v8::Local<v8::Value> v8_value;
        if (!TryConvertToV8(isolate_, val, &v8_value))
            return false;
        v8::Maybe<bool> result = object_->Set(isolate_->GetCurrentContext(), StringToV8(isolate_, key), v8_value);
        return !result.IsNothing() && result.FromJust();
    }

    inline void SetMethod(const char* name, v8::FunctionCallback callback)
    {
        v8::Local<v8::Function> func = v8::FunctionTemplate::New(isolate_, callback)->GetFunction();
        // kInternalized strings are created in the old space.
        const v8::NewStringType type = v8::NewStringType::kInternalized;
        v8::Local<v8::String> name_string = v8::String::NewFromUtf8(isolate(), name, type).ToLocalChecked();
        object_->Set(name_string, func);
        func->SetName(name_string);  // NODE_SET_METHOD() compatibility.
    }

    static void MethodCallbackWrap(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::External> v8Holder;
        gin::ConvertFromV8(info.GetIsolate(), info.Data(), &v8Holder);
        std::function<void(const v8::FunctionCallbackInfo<v8::Value>&)>* func = (std::function<void(const v8::FunctionCallbackInfo<v8::Value>&)>*)v8Holder->Value();
        (*func)(info);
    }

    void SetMethod(const char* name, const std::function<void(const v8::FunctionCallbackInfo<v8::Value>&)>&& callback)
    {
        v8::Local<v8::External> wrap = v8::External::New(isolate_, new std::function<void(const v8::FunctionCallbackInfo<v8::Value>&)>(callback));
        v8::Local<v8::Function> func = v8::FunctionTemplate::New(isolate_, MethodCallbackWrap, wrap)->GetFunction();

        // kInternalized strings are created in the old space.
        const v8::NewStringType type = v8::NewStringType::kInternalized;
        v8::Local<v8::String> name_string = v8::String::NewFromUtf8(isolate(), name, type).ToLocalChecked();
        object_->Set(name_string, func);
        func->SetName(name_string);  // NODE_SET_METHOD() compatibility.
    }

    bool Has(base::StringPiece key) const
    {
        v8::Maybe<bool> result = GetHandle()->Has(isolate()->GetCurrentContext(),
            gin::StringToV8(isolate(), key));
        return !result.IsNothing() && result.FromJust();
    }

    // Note: If we plan to add more Set methods, consider adding an option instead
    // of copying code.
    template <typename T>
    bool SetReadOnlyNonConfigurable(base::StringPiece key, T val)
    {
        v8::Local<v8::Value> v8_value;
        if (!gin::TryConvertToV8(isolate(), val, &v8_value))
            return false;

        v8::PropertyAttribute attr = static_cast<v8::PropertyAttribute>(v8::ReadOnly | v8::DontDelete);
        v8::Maybe<bool> result = GetHandle()->DefineOwnProperty(isolate()->GetCurrentContext(), gin::StringToV8(isolate(), key), v8_value, attr);
        return !result.IsNothing() && result.FromJust();
    }

    v8::Local<v8::Object> GetHandle() const { return object_; }

    v8::Isolate* isolate() const { return isolate_; }

private:
    friend struct Converter<Dictionary>;

    // TODO(aa): Remove this. Instead, get via FromV8(), Set(), and Get().
    v8::Isolate* isolate_;
    v8::Local<v8::Object> object_;
};

template<>
struct GIN_EXPORT Converter<Dictionary> {
    static v8::Local<v8::Value> ToV8(v8::Isolate* isolate, Dictionary val);
    static bool FromV8(v8::Isolate* isolate, v8::Local<v8::Value> val, Dictionary* out);
};

}  // namespace gin

#endif  // GIN_DICTIONARY_H_
