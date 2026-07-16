# P1 C++ Starter

A small C++20 project set up with separate source, header, and test folders. The greeting function is kept in a library so it can be tested separately from `main.cpp`.

## Build and test

```sh
cmake -S . -B build
cmake --build build
ctest --test-dir build --output-on-failure
```

Pass a name as the first argument when running the program:

```sh
./build/p1 Wyatt
```
