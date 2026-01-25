cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Create library
add_library(math_utils src/math_utils.cpp)
target_include_directories(math_utils PUBLIC include)

# Main executable
add_executable(app src/main.cpp)
target_link_libraries(app math_utils)

# Testing
enable_testing()

# Find GTest
find_package(GTest REQUIRED)

# Test executable
add_executable(runTests tests/test_math.cpp)
target_link_libraries(runTests math_utils GTest::gtest GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(runTests)
