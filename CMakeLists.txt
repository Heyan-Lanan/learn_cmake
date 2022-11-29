cmake_minimum_required(VERSION 3.22)

project(learn_cmake)

set(CMAKE_CXX_STANDARD 23)

add_subdirectory(src)

add_executable(learn_cmake test/test.cpp)

target_include_directories(learn_cmake PUBLIC include)

target_link_libraries(learn_cmake MathFunctions)
