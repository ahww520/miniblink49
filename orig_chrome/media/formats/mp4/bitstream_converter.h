﻿// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_FORMATS_MP4_BITSTREAM_CONVERTER_H_
#define MEDIA_FORMATS_MP4_BITSTREAM_CONVERTER_H_

#include <vector>

#include "base/basictypes.h"
#include "base/memory/ref_counted.h"

namespace media {

struct SubsampleEntry;

namespace mp4 {

    // BitstreamConverter provides a unified interface for performing some common
    // bitstream conversions (e.g. H.264 MP4 bitstream to Annex B, and elementary
    // AAC stream to ADTS).
    class BitstreamConverter
        : public base::RefCountedThreadSafe<BitstreamConverter> {
    public:
        //     // Describes the result of Analyze(). Not all analyses are implemented or
        //     // enabled across mp4::BitstreamConverter implementations, hence the use of
        //     // base::Optional<>.
        //     struct MEDIA_EXPORT AnalysisResult {
        //         AnalysisResult();
        //         AnalysisResult(const AnalysisResult&);
        //         ~AnalysisResult();
        //
        //         /*base::Optional<bool>*/bool is_conformant;
        //         /*base::Optional<bool>*/bool is_keyframe;
        //     };
        //
        //     // Converts a single frame/buffer |frame_buf| into the output format.
        //     // Returns true iff the conversion was successful.
        //     // |frame_buf| is an input/output parameter, it contains input frame data and
        //     // contains converted output data if conversion was successful.
        //     // |is_keyframe| indicates whether it's a key frame or not.
        //     // |subsamples| is an input/output parameter that contains CENC subsample
        //     // information. The conversion code should |subsamples| to determine if parts
        //     // of input frame are encrypted and should update |subsamples| if necessary,
        //     // to make sure it correctly describes the converted output frame. See
        //     // SubsampleEntry definition in media/base/decrypt_config.h for more info.
        //     // |analysis_result| is an output parameter that contains the AnalysisResult
        //     // found during conversion.
        //     virtual bool ConvertAndAnalyzeFrame(
        //         std::vector<uint8_t>* frame_buf,
        //         bool is_keyframe,
        //         std::vector<SubsampleEntry>* subsamples,
        //         AnalysisResult* analysis_result) const = 0;

        // Converts a single frame/buffer |frame_buf| into the output format.
        // Returns true iff the conversion was successful.
        // |frame_buf| is an input/output parameter, it contains input frame data and
        // contains converted output data if conversion was successful.
        // |is_keyframe| indicates whether it's a key frame or not.
        // |subsamples| is an input/output parameter that contains CENC subsample
        // information. The conversion code should |subsamples| to determine if parts
        // of input frame are encrypted and should update |subsamples| if necessary,
        // to make sure it correctly describes the converted output frame. See
        // SubsampleEntry definition in media/base/decrypt_config.h for more info.
        virtual bool ConvertFrame(std::vector<uint8>* frame_buf,
            bool is_keyframe,
            std::vector<SubsampleEntry>* subsamples) const = 0;

    protected:
        friend class base::RefCountedThreadSafe<BitstreamConverter>;
        virtual ~BitstreamConverter();
    };

} // namespace mp4
} // namespace media

#endif // MEDIA_FORMATS_MP4_AVC_H_
