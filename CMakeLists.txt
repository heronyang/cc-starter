cmake_minimum_required(VERSION 3.17)

project(main)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

### BINARY ###
add_subdirectory(foo)
add_executable(main main.cc)
target_link_libraries(main PUBLIC foo)
# Adds the binary tree to the search path for include files (*.h).
target_include_directories(
  foo PUBLIC "${PROJECT_BINARY_DIR}" "${PROJECT_SOURCE_DIR}/foo")

### TEST ###
enable_testing()
find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(tests foo/foo_test.cc)
target_link_libraries(
  tests
  GTest::GTest GTest::Main # Link GTest.
  foo # Link Foo.
  )
gtest_discover_tests(tests)
