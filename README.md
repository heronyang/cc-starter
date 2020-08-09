# C++ Starter Code

This is a C++ template code with [CMake](https://cmake.org/) and [Google
Test](https://github.com/google/googletest).

Note: I attempt to create a minimal C++ template code with proper build and test.
As always, it's not perfect, please let do me know if anything can be improved.

## Prerequisite

- Install Google Test to your system:
    [Mac](https://stackoverflow.com/a/46611467),
    [Ubuntu](https://gist.github.com/Cartexius/4c437c084d6e388288201aadf9c8cdd5).

## Build

```bash
$ cmake . && make
-- Configuring done
-- Generating done
-- Build files have been written to: /Users/heron/projects/cc-starter
[ 33%] Built target foo
[ 66%] Built target tests
Scanning dependencies of target main
[ 83%] Building CXX object CMakeFiles/main.dir/main.cc.o
[100%] Linking CXX executable main
[100%] Built target main
```

## Test

```bash
$ cmake . && ctest
-- Configuring done
-- Generating done
-- Build files have been written to: /Users/heron/projects/cc-starter
Test project /Users/heron/projects/cc-starter
    Start 1: FooTest.Add
1/1 Test #1: FooTest.Add ......................   Passed    0.00 sec

100% tests passed, 0 tests failed out of 1

Total Test time (real) =   0.01 sec
```
