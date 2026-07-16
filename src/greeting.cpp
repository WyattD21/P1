#include "greeting.h"

namespace p1 {
std::string greeting(const std::string& name) {
    return "Hello, " + (name.empty() ? std::string{"World"} : name) + "!";
}
}
