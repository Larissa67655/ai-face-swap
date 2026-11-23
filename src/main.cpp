// main.cpp — entry point. Wires config and subsystems together.

#include "aifaceswap/settings.h"
#include "aifaceswap/swap.h"
#include "aifaceswap/detect.h"
#include "aifaceswap/align.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    aifaceswap::Settings settings = aifaceswap::Settings::load_default();
    aifaceswap::Swap swap(settings.store_path);
    aifaceswap::Detect detect(settings.store_path);
    aifaceswap::Align align(settings.store_path);
    std::fprintf(stderr, "[ai-face-swap] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
