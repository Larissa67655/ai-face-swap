// detect.cpp — part of ai-face-swap.

#include "aifaceswap/detect.h"

#include <cstdio>

namespace aifaceswap {

Detect::Detect(const std::string& config_path)
    : config_path_(config_path) {}

void Detect::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Detect::run() {
    if (verbose_) std::fprintf(stderr, "[ai-face-swap] detect: run\n");
    // core logic lives here
    return true;
}

}  // namespace aifaceswap
