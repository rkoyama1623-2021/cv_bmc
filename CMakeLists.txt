cmake_minimum_required(VERSION 2.8.8 FATAL_ERROR)
project(cv_bmc)

set(WITH_IPP OFF CACHE BOOL "Disable IPP option")
set(WITH_TBB OFF CACHE BOOL "Disable IPP option")
set(WITH_OPENCL OFF CACHE BOOL "Disable OpenCL option")
set(WITH_OPENMP OFF CACHE BOOL "Disable OpenMP option")

add_subdirectory(3rd_party)
set(ENV{PKG_CONFIG_PATH} "${CMAKE_BINARY_DIR}/unix-install:$ENV{PKG_CONFIG_PATH}")
find_package(OpenCV REQUIRED)
add_subdirectory(modules)
