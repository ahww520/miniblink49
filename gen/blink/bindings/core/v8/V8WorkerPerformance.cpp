// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8WorkerPerformance.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8AbstractEventListener.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8EventListenerList.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8MemoryInfo.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8PerformanceEntry.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/frame/UseCounter.h"
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
const WrapperTypeInfo V8WorkerPerformance::wrapperTypeInfo = { gin::kEmbedderBlink, V8WorkerPerformance::domTemplate, V8WorkerPerformance::refObject, V8WorkerPerformance::derefObject, V8WorkerPerformance::trace, 0, 0, V8WorkerPerformance::preparePrototypeObject, V8WorkerPerformance::installConditionallyEnabledProperties, "WorkerPerformance", &V8EventTarget::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in WorkerPerformance.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& WorkerPerformance::s_wrapperTypeInfo = V8WorkerPerformance::wrapperTypeInfo;

namespace WorkerPerformanceV8Internal {

static void onwebkitresourcetimingbufferfullAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    WorkerPerformance* impl = V8WorkerPerformance::toImpl(holder);
    EventListener* cppValue(impl->onwebkitresourcetimingbufferfull());
    v8SetReturnValue(info, cppValue ? v8::Local<v8::Value>(V8AbstractEventListener::cast(cppValue)->getListenerObject(impl->executionContext())) : v8::Local<v8::Value>(v8::Null(info.GetIsolate())));
}

static void onwebkitresourcetimingbufferfullAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    WorkerPerformanceV8Internal::onwebkitresourcetimingbufferfullAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onwebkitresourcetimingbufferfullAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    WorkerPerformance* impl = V8WorkerPerformance::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onwebkitresourcetimingbufferfull(), v8Value, V8WorkerPerformance::eventListenerCacheIndex);
    impl->setOnwebkitresourcetimingbufferfull(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onwebkitresourcetimingbufferfullAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    WorkerPerformanceV8Internal::onwebkitresourcetimingbufferfullAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void memoryAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    WorkerPerformance* impl = V8WorkerPerformance::toImpl(holder);
    RawPtr<MemoryInfo> cppValue(impl->memory());
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "memory"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void memoryAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    WorkerPerformanceV8Internal::memoryAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void nowMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    WorkerPerformance* impl = V8WorkerPerformance::toImpl(info.Holder());
    v8SetReturnValue(info, impl->now());
}

static void nowMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    WorkerPerformanceV8Internal::nowMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getEntriesMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    WorkerPerformance* impl = V8WorkerPerformance::toImpl(info.Holder());
    v8SetReturnValue(info, toV8(impl->getEntries(), info.Holder(), info.GetIsolate()));
}

static void getEntriesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    WorkerPerformanceV8Internal::getEntriesMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getEntriesByTypeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "getEntriesByType", "WorkerPerformance", 1, info.Length()), info.GetIsolate());
        return;
    }
    WorkerPerformance* impl = V8WorkerPerformance::toImpl(info.Holder());
    V8StringResource<> entryType;
    {
        entryType = info[0];
        if (!entryType.prepare())
            return;
    }
    v8SetReturnValue(info, toV8(impl->getEntriesByType(entryType), info.Holder(), info.GetIsolate()));
}

static void getEntriesByTypeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    WorkerPerformanceV8Internal::getEntriesByTypeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getEntriesByNameMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "getEntriesByName", "WorkerPerformance", 1, info.Length()), info.GetIsolate());
        return;
    }
    WorkerPerformance* impl = V8WorkerPerformance::toImpl(info.Holder());
    V8StringResource<> name;
    V8StringResource<> entryType;
    {
        name = info[0];
        if (!name.prepare())
            return;
        if (!info[1]->IsUndefined()) {
            entryType = info[1];
            if (!entryType.prepare())
                return;
        } else {
            entryType = nullptr;
        }
    }
    v8SetReturnValue(info, toV8(impl->getEntriesByName(name, entryType), info.Holder(), info.GetIsolate()));
}

static void getEntriesByNameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    WorkerPerformanceV8Internal::getEntriesByNameMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void webkitClearResourceTimingsMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    WorkerPerformance* impl = V8WorkerPerformance::toImpl(info.Holder());
    impl->webkitClearResourceTimings();
}

static void webkitClearResourceTimingsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::PrefixedPerformanceClearResourceTimings);
    WorkerPerformanceV8Internal::webkitClearResourceTimingsMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void webkitSetResourceTimingBufferSizeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "webkitSetResourceTimingBufferSize", "WorkerPerformance", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    WorkerPerformance* impl = V8WorkerPerformance::toImpl(info.Holder());
    unsigned maxSize;
    {
        maxSize = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->webkitSetResourceTimingBufferSize(maxSize);
}

static void webkitSetResourceTimingBufferSizeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::PrefixedPerformanceSetResourceTimingBufferSize);
    WorkerPerformanceV8Internal::webkitSetResourceTimingBufferSizeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void markMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "mark", "WorkerPerformance", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    WorkerPerformance* impl = V8WorkerPerformance::toImpl(info.Holder());
    V8StringResource<> markName;
    {
        markName = info[0];
        if (!markName.prepare())
            return;
    }
    impl->mark(markName, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void markMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    WorkerPerformanceV8Internal::markMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void clearMarksMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    WorkerPerformance* impl = V8WorkerPerformance::toImpl(info.Holder());
    V8StringResource<> markName;
    {
        if (!info[0]->IsUndefined()) {
            markName = info[0];
            if (!markName.prepare())
                return;
        } else {
            markName = nullptr;
        }
    }
    impl->clearMarks(markName);
}

static void clearMarksMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    WorkerPerformanceV8Internal::clearMarksMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void measureMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "measure", "WorkerPerformance", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    WorkerPerformance* impl = V8WorkerPerformance::toImpl(info.Holder());
    V8StringResource<> measureName;
    V8StringResource<> startMark;
    V8StringResource<> endMark;
    {
        measureName = info[0];
        if (!measureName.prepare())
            return;
        if (!info[1]->IsUndefined()) {
            startMark = info[1];
            if (!startMark.prepare())
                return;
        } else {
            startMark = nullptr;
        }
        if (!info[2]->IsUndefined()) {
            endMark = info[2];
            if (!endMark.prepare())
                return;
        } else {
            endMark = nullptr;
        }
    }
    impl->measure(measureName, startMark, endMark, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void measureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    WorkerPerformanceV8Internal::measureMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void clearMeasuresMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    WorkerPerformance* impl = V8WorkerPerformance::toImpl(info.Holder());
    V8StringResource<> measureName;
    {
        if (!info[0]->IsUndefined()) {
            measureName = info[0];
            if (!measureName.prepare())
                return;
        } else {
            measureName = nullptr;
        }
    }
    impl->clearMeasures(measureName);
}

static void clearMeasuresMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    WorkerPerformanceV8Internal::clearMeasuresMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace WorkerPerformanceV8Internal

static const V8DOMConfiguration::MethodConfiguration V8WorkerPerformanceMethods[] = {
    {"now", WorkerPerformanceV8Internal::nowMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8WorkerPerformanceTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "WorkerPerformance", V8EventTarget::domTemplate(isolate), V8WorkerPerformance::internalFieldCount,
        0, 0,
        0, 0,
        V8WorkerPerformanceMethods, WTF_ARRAY_LENGTH(V8WorkerPerformanceMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    if (RuntimeEnabledFeatures::serviceWorkerPerformanceTimelineEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"onwebkitresourcetimingbufferfull", WorkerPerformanceV8Internal::onwebkitresourcetimingbufferfullAttributeGetterCallback, WorkerPerformanceV8Internal::onwebkitresourcetimingbufferfullAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::memoryInfoInWorkersEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"memory", WorkerPerformanceV8Internal::memoryAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::serviceWorkerPerformanceTimelineEnabled()) {
        const V8DOMConfiguration::MethodConfiguration getEntriesMethodConfiguration = {
            "getEntries", WorkerPerformanceV8Internal::getEntriesMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts,
        };
        V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, v8::None, getEntriesMethodConfiguration);
    }
    if (RuntimeEnabledFeatures::serviceWorkerPerformanceTimelineEnabled()) {
        const V8DOMConfiguration::MethodConfiguration getEntriesByTypeMethodConfiguration = {
            "getEntriesByType", WorkerPerformanceV8Internal::getEntriesByTypeMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts,
        };
        V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, v8::None, getEntriesByTypeMethodConfiguration);
    }
    if (RuntimeEnabledFeatures::serviceWorkerPerformanceTimelineEnabled()) {
        const V8DOMConfiguration::MethodConfiguration getEntriesByNameMethodConfiguration = {
            "getEntriesByName", WorkerPerformanceV8Internal::getEntriesByNameMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts,
        };
        V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, v8::None, getEntriesByNameMethodConfiguration);
    }
    if (RuntimeEnabledFeatures::serviceWorkerPerformanceTimelineEnabled()) {
        const V8DOMConfiguration::MethodConfiguration webkitClearResourceTimingsMethodConfiguration = {
            "webkitClearResourceTimings", WorkerPerformanceV8Internal::webkitClearResourceTimingsMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts,
        };
        V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, v8::None, webkitClearResourceTimingsMethodConfiguration);
    }
    if (RuntimeEnabledFeatures::serviceWorkerPerformanceTimelineEnabled()) {
        const V8DOMConfiguration::MethodConfiguration webkitSetResourceTimingBufferSizeMethodConfiguration = {
            "webkitSetResourceTimingBufferSize", WorkerPerformanceV8Internal::webkitSetResourceTimingBufferSizeMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts,
        };
        V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, v8::None, webkitSetResourceTimingBufferSizeMethodConfiguration);
    }
    if (RuntimeEnabledFeatures::serviceWorkerPerformanceTimelineEnabled()) {
        const V8DOMConfiguration::MethodConfiguration markMethodConfiguration = {
            "mark", WorkerPerformanceV8Internal::markMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts,
        };
        V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, v8::None, markMethodConfiguration);
    }
    if (RuntimeEnabledFeatures::serviceWorkerPerformanceTimelineEnabled()) {
        const V8DOMConfiguration::MethodConfiguration clearMarksMethodConfiguration = {
            "clearMarks", WorkerPerformanceV8Internal::clearMarksMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts,
        };
        V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, v8::None, clearMarksMethodConfiguration);
    }
    if (RuntimeEnabledFeatures::serviceWorkerPerformanceTimelineEnabled()) {
        const V8DOMConfiguration::MethodConfiguration measureMethodConfiguration = {
            "measure", WorkerPerformanceV8Internal::measureMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts,
        };
        V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, v8::None, measureMethodConfiguration);
    }
    if (RuntimeEnabledFeatures::serviceWorkerPerformanceTimelineEnabled()) {
        const V8DOMConfiguration::MethodConfiguration clearMeasuresMethodConfiguration = {
            "clearMeasures", WorkerPerformanceV8Internal::clearMeasuresMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts,
        };
        V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, v8::None, clearMeasuresMethodConfiguration);
    }

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8WorkerPerformance::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8WorkerPerformanceTemplate);
}

bool V8WorkerPerformance::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8WorkerPerformance::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

WorkerPerformance* V8WorkerPerformance::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8WorkerPerformance::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8WorkerPerformance::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
