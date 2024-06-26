// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8FontFace.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptPromise.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/UnionTypesCore.h"
#include "bindings/core/v8/V8ArrayBuffer.h"
#include "bindings/core/v8/V8ArrayBufferView.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8FontFaceDescriptors.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/frame/LocalDOMWindow.h"
#include "core/inspector/ConsoleMessage.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8FontFace::wrapperTypeInfo = { gin::kEmbedderBlink, V8FontFace::domTemplate, V8FontFace::refObject, V8FontFace::derefObject, V8FontFace::trace, V8FontFace::toActiveDOMObject, 0, V8FontFace::preparePrototypeObject, V8FontFace::installConditionallyEnabledProperties, "FontFace", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in FontFace.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& FontFace::s_wrapperTypeInfo = V8FontFace::wrapperTypeInfo;

namespace FontFaceV8Internal {

static void familyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    FontFace* impl = V8FontFace::toImpl(holder);
    v8SetReturnValueString(info, impl->family(), info.GetIsolate());
}

static void familyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    FontFaceV8Internal::familyAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void familyAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "family", "FontFace", holder, info.GetIsolate());
    FontFace* impl = V8FontFace::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    impl->setFamily(executionContext, cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void familyAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    FontFaceV8Internal::familyAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void styleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    FontFace* impl = V8FontFace::toImpl(holder);
    v8SetReturnValueString(info, impl->style(), info.GetIsolate());
}

static void styleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    FontFaceV8Internal::styleAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void styleAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "style", "FontFace", holder, info.GetIsolate());
    FontFace* impl = V8FontFace::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    impl->setStyle(executionContext, cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void styleAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    FontFaceV8Internal::styleAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void weightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    FontFace* impl = V8FontFace::toImpl(holder);
    v8SetReturnValueString(info, impl->weight(), info.GetIsolate());
}

static void weightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    FontFaceV8Internal::weightAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void weightAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "weight", "FontFace", holder, info.GetIsolate());
    FontFace* impl = V8FontFace::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    impl->setWeight(executionContext, cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void weightAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    FontFaceV8Internal::weightAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void stretchAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    FontFace* impl = V8FontFace::toImpl(holder);
    v8SetReturnValueString(info, impl->stretch(), info.GetIsolate());
}

static void stretchAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    FontFaceV8Internal::stretchAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void stretchAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "stretch", "FontFace", holder, info.GetIsolate());
    FontFace* impl = V8FontFace::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    impl->setStretch(executionContext, cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void stretchAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    FontFaceV8Internal::stretchAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void unicodeRangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    FontFace* impl = V8FontFace::toImpl(holder);
    v8SetReturnValueString(info, impl->unicodeRange(), info.GetIsolate());
}

static void unicodeRangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    FontFaceV8Internal::unicodeRangeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void unicodeRangeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "unicodeRange", "FontFace", holder, info.GetIsolate());
    FontFace* impl = V8FontFace::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    impl->setUnicodeRange(executionContext, cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void unicodeRangeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    FontFaceV8Internal::unicodeRangeAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void variantAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    FontFace* impl = V8FontFace::toImpl(holder);
    v8SetReturnValueString(info, impl->variant(), info.GetIsolate());
}

static void variantAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    FontFaceV8Internal::variantAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void variantAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "variant", "FontFace", holder, info.GetIsolate());
    FontFace* impl = V8FontFace::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    impl->setVariant(executionContext, cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void variantAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    FontFaceV8Internal::variantAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void featureSettingsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    FontFace* impl = V8FontFace::toImpl(holder);
    v8SetReturnValueString(info, impl->featureSettings(), info.GetIsolate());
}

static void featureSettingsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    FontFaceV8Internal::featureSettingsAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void featureSettingsAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "featureSettings", "FontFace", holder, info.GetIsolate());
    FontFace* impl = V8FontFace::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    impl->setFeatureSettings(executionContext, cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void featureSettingsAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    FontFaceV8Internal::featureSettingsAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void statusAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    FontFace* impl = V8FontFace::toImpl(holder);
    v8SetReturnValueString(info, impl->status(), info.GetIsolate());
}

static void statusAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    FontFaceV8Internal::statusAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void loadedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    FontFace* impl = V8FontFace::toImpl(holder);
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    v8SetReturnValue(info, impl->loaded(scriptState).v8Value());
}

static void loadedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    FontFaceV8Internal::loadedAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void loadMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    FontFace* impl = V8FontFace::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptPromise result = impl->load(scriptState);
    v8SetReturnValue(info, result.v8Value());
}

static void loadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    FontFaceV8Internal::loadMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "FontFace", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    V8StringResource<> family;
    StringOrArrayBufferOrArrayBufferView source;
    FontFaceDescriptors descriptors;
    {
        family = info[0];
        if (!family.prepare())
            return;
        V8StringOrArrayBufferOrArrayBufferView::toImpl(info.GetIsolate(), info[1], source, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        if (!isUndefinedOrNull(info[2]) && !info[2]->IsObject()) {
            exceptionState.throwTypeError("parameter 3 ('descriptors') is not an object.");
            exceptionState.throwIfNeeded();
            return;
        }
        V8FontFaceDescriptors::toImpl(info.GetIsolate(), info[2], descriptors, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    RefPtrWillBeRawPtr<FontFace> impl = FontFace::create(executionContext, family, source, descriptors);
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8FontFace::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

} // namespace FontFaceV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8FontFaceAccessors[] = {
    {"family", FontFaceV8Internal::familyAttributeGetterCallback, FontFaceV8Internal::familyAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"style", FontFaceV8Internal::styleAttributeGetterCallback, FontFaceV8Internal::styleAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"weight", FontFaceV8Internal::weightAttributeGetterCallback, FontFaceV8Internal::weightAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"stretch", FontFaceV8Internal::stretchAttributeGetterCallback, FontFaceV8Internal::stretchAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"unicodeRange", FontFaceV8Internal::unicodeRangeAttributeGetterCallback, FontFaceV8Internal::unicodeRangeAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"variant", FontFaceV8Internal::variantAttributeGetterCallback, FontFaceV8Internal::variantAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"featureSettings", FontFaceV8Internal::featureSettingsAttributeGetterCallback, FontFaceV8Internal::featureSettingsAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"status", FontFaceV8Internal::statusAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"loaded", FontFaceV8Internal::loadedAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8FontFaceMethods[] = {
    {"load", FontFaceV8Internal::loadMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

void V8FontFace::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SCOPED_SAMPLING_STATE("blink", "DOMConstructor");
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("FontFace"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    FontFaceV8Internal::constructor(info);
}

static void installV8FontFaceTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "FontFace", v8::Local<v8::FunctionTemplate>(), V8FontFace::internalFieldCount,
        0, 0,
        V8FontFaceAccessors, WTF_ARRAY_LENGTH(V8FontFaceAccessors),
        V8FontFaceMethods, WTF_ARRAY_LENGTH(V8FontFaceMethods));
    functionTemplate->SetCallHandler(V8FontFace::constructorCallback);
    functionTemplate->SetLength(2);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8FontFace::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8FontFaceTemplate);
}

bool V8FontFace::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8FontFace::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

FontFace* V8FontFace::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

ActiveDOMObject* V8FontFace::toActiveDOMObject(v8::Local<v8::Object> wrapper)
{
    return toImpl(wrapper);
}

void V8FontFace::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<FontFace>()->ref();
#endif
}

void V8FontFace::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<FontFace>()->deref();
#endif
}

} // namespace blink
