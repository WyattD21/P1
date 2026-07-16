# P1 — Modern C++ Starter

The previously empty repository is now a small, production-shaped C++20 starter with a library/executable split, public headers, a zero-dependency test, CMake, CTest, and GitHub Actions CI.

    cmake -S . -B build
    cmake --build build
    ctest --test-dir build --output-on-failure
    ./build/p1 Wyatt

Use this structure as a starting point for future C++ projects rather than putting all logic in `main.cpp`.
