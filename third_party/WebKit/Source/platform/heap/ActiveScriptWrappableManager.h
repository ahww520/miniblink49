// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_RENDERER_PLATFORM_BINDINGS_ACTIVE_SCRIPT_WRAPPABLE_MANAGER_H_
#define THIRD_PARTY_BLINK_RENDERER_PLATFORM_BINDINGS_ACTIVE_SCRIPT_WRAPPABLE_MANAGER_H_

#include "third_party/WebKit/Source/platform/heap/HeapAllocator.h"

namespace blink {

class LivenessBroker;
class ScriptWrappable;
class Visitor;

// ActiveScriptWrappableManager (ASWM) is integrated into the garbage collector
// and keeps ActiveScriptWrappable alive as long as they have
// HasPendingActivity() returning true and are attached to a live
// ExecutionContext.
//
// ASWM integrates with the GC through prologue and weakness callbacks which are
// not allowed to allocate.
class ActiveScriptWrappableManager {
public:
    enum class RecomputeMode { kOpportunistic, kRequired };

    // Adds an ActiveScriptWrappable to the set that is managed by
    // ActiveScriptWrappableManager.
    void add(ScriptWrappable* wrappable);

    // Recomputes the current set of active ScriptWrappable objects that should be
    // kept alive by the manager because there's some activity pending.
    //
    // If called with RecomputeMode::kOpportunistic, recomputation may be skipped.
    //
    // Called during GC prologue. Not allowed to allocate.
    void recomputeActiveScriptWrappables(RecomputeMode);

    // Iterate the current set of active ScriptWrappable objects.
    //
    // Does not allocate.
    void iterateActiveScriptWrappables(Visitor*);

    void trace(Visitor* visitor);

private:
    // Called during weakness processing. Not allowed to allocate. The next Add()
    // call ensures reasonable capacities.
    //
    // Does not allocate.
    void cleanupInactiveAndClearActiveScriptWrappables(const LivenessBroker&);

    // We use a single HeapVector to always have storage for the strong Member<>
    // reference available. The alternative is keeping separate data structures
    // and synchronize their capacities in Add(). We use UntracedMember<> as a
    // weak references that is cleared in
    // CleanupInactiveAndClearActiveScriptWrappables. WeakMember would require
    // using a HeapHashSet which is slower to iterate. In addition, we already
    // require a custom callback for clearing out the Member<> reference, so we
    // can clear the UntracedMember<> there as well.
    HeapVector<ScriptWrappable*> active_script_wrappables_;

    // Count how often ASWs have been recomputed in the current GC cycle.
    size_t recomputed_cnt_ = 0;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_PLATFORM_BINDINGS_ACTIVE_SCRIPT_WRAPPABLE_MANAGER_H_
