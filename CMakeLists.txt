cmake_minimum_required(VERSION 3.16)
project(ai-face-swap CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(aifaceswap
    src/main.cpp
    src/swap.cpp
    src/detect.cpp
    src/align.cpp
)

target_include_directories(aifaceswap PRIVATE include)

if(WIN32)
    target_link_libraries(aifaceswap PRIVATE userenv)
endif()
