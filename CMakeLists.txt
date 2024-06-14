cmake_minimum_required(VERSION 3.2.x)

project(Observer_Pattern)

file(GLOB_RECURSE SOURCE_FILES src/*.cpp)

add_executable(main ${SOURCE_FILES})
