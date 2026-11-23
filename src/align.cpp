// align.cpp — part of ai-face-swap.

#include "aifaceswap/align.h"

#include <cstdio>

namespace aifaceswap {

Align::Align(const std::string& config_path)
    : config_path_(config_path) {}

void Align::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Align::run() {
    if (verbose_) std::fprintf(stderr, "[ai-face-swap] align: run\n");
    // core logic lives here
    return true;
}

}  // namespace aifaceswap
