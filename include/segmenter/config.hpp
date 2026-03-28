#pragma once

#include <string>

namespace Segmenter {

struct Config {
    std::string model_path;
    std::string class_map_path;
    int image_size = 512;
    float alpha = 0.5f;
    int min_pixels = 50;

    [[nodiscard]] bool is_valid() const noexcept {
        return !model_path.empty() && !class_map_path.empty() &&
               image_size > 0 && alpha >= 0.0f && alpha <= 1.0f &&
               min_pixels >= 0;
    }
};

}