cmake_minimum_required(VERSION 3.14)
project(MyProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# -----------------------------
# Library
# -----------------------------
add_library(math_utils src/math_utils.cpp)
target_include_directories(math_utils PUBLIC include)

# -----------------------------
# Main executable
# -----------------------------
add_executable(app src/main.cpp)
target_link_libraries(app math_utils)

# -----------------------------
# Testing with FetchContent (works on Windows & Linux)
# -----------------------------
enable_testing()

include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.14.0
)

# Important for Windows compatibility
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

# Test executable
add_executable(runTests tests/test_math.cpp)
target_link_libraries(runTests 
  gtest_main 
  math_utils
)

include(GoogleTest)
gtest_discover_tests(runTests)
