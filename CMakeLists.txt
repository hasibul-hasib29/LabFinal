cmake_minimum_required(VERSION 3.10)
project(CompositeTest)

set(CMAKE_CXX_STANDARD 17)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(myapp singletonTest.cpp singleton.cpp)

target_link_libraries(myapp GTest::GTest GTest::Main pthread)