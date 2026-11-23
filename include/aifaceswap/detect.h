// detect — part of ai-face-swap.

#pragma once

#include <string>
#include <vector>

namespace aifaceswap {

class Detect {
public:
    explicit Detect(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace aifaceswap
