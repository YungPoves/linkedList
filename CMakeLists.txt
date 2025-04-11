cmake_minimum_required(VERSION 3.10.0)
project(LinkedList VERSION 0.1.0 LANGUAGES C CXX)

add_subdirectory(src)

add_executable(LinkedList main.cpp)

target_link_libraries(LinkedList PUBLIC linkedlist)

target_include_directories(LinkedList PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           "${PROJECT_SOURCE_DIR}/src/linkedlist"
                           "${PROJECT_SOURCE_DIR}/src/node"
                           )
