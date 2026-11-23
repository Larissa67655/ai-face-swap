// swap.cpp — part of ai-face-swap.

#include "aifaceswap/swap.h"

#include <cstdio>

namespace aifaceswap {

Swap::Swap(const std::string& config_path)
    : config_path_(config_path) {}

void Swap::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Swap::run() {
    if (verbose_) std::fprintf(stderr, "[ai-face-swap] swap: run\n");
    // core logic lives here
    return true;
}

}  // namespace aifaceswap
