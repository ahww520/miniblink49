// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8CSSKeyframesRule.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8CSSKeyframeRule.h"
#include "bindings/core/v8/V8CSSRuleList.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
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
const WrapperTypeInfo V8CSSKeyframesRule::wrapperTypeInfo = { gin::kEmbedderBlink, V8CSSKeyframesRule::domTemplate, V8CSSKeyframesRule::refObject, V8CSSKeyframesRule::derefObject, V8CSSKeyframesRule::trace, 0, 0, V8CSSKeyframesRule::preparePrototypeObject, V8CSSKeyframesRule::installConditionallyEnabledProperties, "CSSKeyframesRule", &V8CSSRule::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in CSSKeyframesRule.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& CSSKeyframesRule::s_wrapperTypeInfo = V8CSSKeyframesRule::wrapperTypeInfo;

namespace CSSKeyframesRuleV8Internal {

static void nameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    CSSKeyframesRule* impl = V8CSSKeyframesRule::toImpl(holder);
    v8SetReturnValueString(info, impl->name(), info.GetIsolate());
}

static void nameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    CSSKeyframesRuleV8Internal::nameAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void nameAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    CSSKeyframesRule* impl = V8CSSKeyframesRule::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setName(cppValue);
}

static void nameAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    CSSKeyframesRuleV8Internal::nameAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void cssRulesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    CSSKeyframesRule* impl = V8CSSKeyframesRule::toImpl(holder);
    RefPtrWillBeRawPtr<CSSRuleList> cppValue(impl->cssRules());
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "cssRules"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void cssRulesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    CSSKeyframesRuleV8Internal::cssRulesAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void appendRuleMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "appendRule", "CSSKeyframesRule", 1, info.Length()), info.GetIsolate());
        return;
    }
    CSSKeyframesRule* impl = V8CSSKeyframesRule::toImpl(info.Holder());
    V8StringResource<> rule;
    {
        rule = info[0];
        if (!rule.prepare())
            return;
    }
    impl->appendRule(rule);
}

static void appendRuleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    CSSKeyframesRuleV8Internal::appendRuleMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void deleteRuleMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "deleteRule", "CSSKeyframesRule", 1, info.Length()), info.GetIsolate());
        return;
    }
    CSSKeyframesRule* impl = V8CSSKeyframesRule::toImpl(info.Holder());
    V8StringResource<> select;
    {
        select = info[0];
        if (!select.prepare())
            return;
    }
    impl->deleteRule(select);
}

static void deleteRuleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    CSSKeyframesRuleV8Internal::deleteRuleMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void findRuleMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "findRule", "CSSKeyframesRule", 1, info.Length()), info.GetIsolate());
        return;
    }
    CSSKeyframesRule* impl = V8CSSKeyframesRule::toImpl(info.Holder());
    V8StringResource<> select;
    {
        select = info[0];
        if (!select.prepare())
            return;
    }
    v8SetReturnValue(info, impl->findRule(select));
}

static void findRuleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    CSSKeyframesRuleV8Internal::findRuleMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void indexedPropertyGetter(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    CSSKeyframesRule* impl = V8CSSKeyframesRule::toImpl(info.Holder());
    RefPtrWillBeRawPtr<CSSKeyframeRule> result = impl->anonymousIndexedGetter(index);
    if (!result)
        return;
    v8SetReturnValueFast(info, WTF::getPtr(result.release()), impl);
}

static void indexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMIndexedProperty");
    CSSKeyframesRuleV8Internal::indexedPropertyGetter(index, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace CSSKeyframesRuleV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8CSSKeyframesRuleAccessors[] = {
    {"name", CSSKeyframesRuleV8Internal::nameAttributeGetterCallback, CSSKeyframesRuleV8Internal::nameAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"cssRules", CSSKeyframesRuleV8Internal::cssRulesAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8CSSKeyframesRuleMethods[] = {
    {"appendRule", CSSKeyframesRuleV8Internal::appendRuleMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"deleteRule", CSSKeyframesRuleV8Internal::deleteRuleMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"findRule", CSSKeyframesRuleV8Internal::findRuleMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8CSSKeyframesRuleTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "CSSKeyframesRule", V8CSSRule::domTemplate(isolate), V8CSSKeyframesRule::internalFieldCount,
        0, 0,
        V8CSSKeyframesRuleAccessors, WTF_ARRAY_LENGTH(V8CSSKeyframesRuleAccessors),
        V8CSSKeyframesRuleMethods, WTF_ARRAY_LENGTH(V8CSSKeyframesRuleMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    {
        v8::IndexedPropertyHandlerConfiguration config(CSSKeyframesRuleV8Internal::indexedPropertyGetterCallback, 0, 0, 0, 0);
        functionTemplate->InstanceTemplate()->SetHandler(config);
    }

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8CSSKeyframesRule::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8CSSKeyframesRuleTemplate);
}

bool V8CSSKeyframesRule::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8CSSKeyframesRule::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

CSSKeyframesRule* V8CSSKeyframesRule::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8CSSKeyframesRule::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<CSSKeyframesRule>()->ref();
#endif
}

void V8CSSKeyframesRule::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<CSSKeyframesRule>()->deref();
#endif
}

} // namespace blink
