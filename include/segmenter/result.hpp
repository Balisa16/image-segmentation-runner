#pragma once

#include <map>
#include <opencv2/core.hpp>
#include <string>

namespace Segmenter {

struct SegmentationResult {
    cv::Mat overlay_bgr;
    cv::Mat class_mask;
    std::map<std::string, int> detected_classes;
};

}