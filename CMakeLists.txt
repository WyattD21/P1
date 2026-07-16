cmake_minimum_required(VERSION 3.20)
project(P1 VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(p1_lib src/greeting.cpp)
target_include_directories(p1_lib PUBLIC include)
target_compile_options(p1_lib PRIVATE -Wall -Wextra -Wpedantic)

add_executable(p1 src/main.cpp)
target_link_libraries(p1 PRIVATE p1_lib)

include(CTest)
if(BUILD_TESTING)
  add_executable(p1_tests tests/greeting_test.cpp)
  target_link_libraries(p1_tests PRIVATE p1_lib)
  add_test(NAME greeting_test COMMAND p1_tests)
endif()
