cmake_minimum_required(VERSION 3.7)
project(cv_bmc)

find_package(OpenCV REQUIRED)
# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(modules)
