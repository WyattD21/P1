#include "greeting.h"

#include <cassert>

int main() {
    assert(p1::greeting("Wyatt") == "Hello, Wyatt!");
    assert(p1::greeting("") == "Hello, World!");
}
