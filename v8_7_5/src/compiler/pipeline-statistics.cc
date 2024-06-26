// Copyright 2014 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <memory>

#include "src/compiler/pipeline-statistics.h"
#include "src/compiler/zone-stats.h"
#include "src/objects/shared-function-info.h"
#include "src/objects/string.h"
#include "src/optimized-compilation-info.h"
#include "src/tracing/trace-event.h"

#include "src/objects-inl.h" // weolar

namespace v8 {
namespace internal {
namespace compiler {

namespace {

// We log detailed phase information about the pipeline
// in both the v8.turbofan and the v8.wasm categories.
const char kTraceCategory[] =                     // --
    TRACE_DISABLED_BY_DEFAULT("v8.turbofan") ","  // --
    TRACE_DISABLED_BY_DEFAULT("v8.wasm");

}  // namespace

void PipelineStatistics::CommonStats::Begin(
    PipelineStatistics* pipeline_stats) {
  DCHECK(!scope_);
  scope_.reset(new ZoneStats::StatsScope(pipeline_stats->zone_stats_));
  timer_.Start();
  outer_zone_initial_size_ = pipeline_stats->OuterZoneSize();
  allocated_bytes_at_start_ =
      outer_zone_initial_size_ -
      pipeline_stats->total_stats_.outer_zone_initial_size_ +
      pipeline_stats->zone_stats_->GetCurrentAllocatedBytes();
}


void PipelineStatistics::CommonStats::End(
    PipelineStatistics* pipeline_stats,
    CompilationStatistics::BasicStats* diff) {
  DCHECK(scope_);
  diff->function_name_ = pipeline_stats->function_name_;
  diff->delta_ = timer_.Elapsed();
  size_t outer_zone_diff =
      pipeline_stats->OuterZoneSize() - outer_zone_initial_size_;
  diff->max_allocated_bytes_ = outer_zone_diff + scope_->GetMaxAllocatedBytes();
  diff->absolute_max_allocated_bytes_ =
      diff->max_allocated_bytes_ + allocated_bytes_at_start_;
  diff->total_allocated_bytes_ =
      outer_zone_diff + scope_->GetTotalAllocatedBytes();
  scope_.reset();
  timer_.Stop();
}

PipelineStatistics::PipelineStatistics(OptimizedCompilationInfo* info,
                                       CompilationStatistics* compilation_stats,
                                       ZoneStats* zone_stats)
    : outer_zone_(info->zone()),
      zone_stats_(zone_stats),
      compilation_stats_(compilation_stats),
      source_size_(0),
      phase_kind_name_(nullptr),
      phase_name_(nullptr) {
  if (info->has_shared_info()) {
    source_size_ = static_cast<size_t>(info->shared_info()->SourceSize());
    std::unique_ptr<char[]> name =
        info->shared_info()->DebugName()->ToCString();
    function_name_ = name.get();
  }
  total_stats_.Begin(this);
}


PipelineStatistics::~PipelineStatistics() {
  if (InPhaseKind()) EndPhaseKind();
  CompilationStatistics::BasicStats diff;
  total_stats_.End(this, &diff);
  compilation_stats_->RecordTotalStats(source_size_, diff);
}


void PipelineStatistics::BeginPhaseKind(const char* phase_kind_name) {
  DCHECK(!InPhase());
  if (InPhaseKind()) EndPhaseKind();
  TRACE_EVENT_BEGIN0(kTraceCategory, phase_kind_name);
  phase_kind_name_ = phase_kind_name;
  phase_kind_stats_.Begin(this);
}

void PipelineStatistics::EndPhaseKind() {
  DCHECK(!InPhase());
  CompilationStatistics::BasicStats diff;
  phase_kind_stats_.End(this, &diff);
  compilation_stats_->RecordPhaseKindStats(phase_kind_name_, diff);
  TRACE_EVENT_END0(kTraceCategory, phase_kind_name_);
}

void PipelineStatistics::BeginPhase(const char* phase_name) {
  TRACE_EVENT_BEGIN0(kTraceCategory, phase_name);
  DCHECK(InPhaseKind());
  phase_name_ = phase_name;
  phase_stats_.Begin(this);
}

void PipelineStatistics::EndPhase() {
  DCHECK(InPhaseKind());
  CompilationStatistics::BasicStats diff;
  phase_stats_.End(this, &diff);
  compilation_stats_->RecordPhaseStats(phase_kind_name_, phase_name_, diff);
  TRACE_EVENT_END0(kTraceCategory, phase_name_);
}

}  // namespace compiler
}  // namespace internal
}  // namespace v8
