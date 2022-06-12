cmake_minimum_required(VERSION 2.8.8 FATAL_ERROR)
project(cv_bmc)

set(WITH_IPP OFF CACHE BOOL "Disable IPP option")
set(WITH_TBB OFF CACHE BOOL "Disable TBB option")
set(WITH_OPENCL OFF CACHE BOOL "Disable OpenCL option")
set(WITH_OPENMP OFF CACHE BOOL "Disable OpenMP option")

set(CMAKE_MODULE_PATH
    "${CMAKE_CURRENT_SOURCE_DIR}/cmake"
    ${CMAKE_MODULE_PATH}
)
set(OpenCV_DIR "${CMAKE_CURRENT_BINARY_DIR}/share/OpenCV")

include(ExternalProject)
include(OpenCV)
include(cv_bmc)
