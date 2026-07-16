#include "greeting.h"

#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    const std::string name = argc > 1 ? argv[1] : "World";
    std::cout << p1::greeting(name) << '\n';
    return 0;
}
