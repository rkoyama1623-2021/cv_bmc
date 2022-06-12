cmake_minimum_required(VERSION 2.8.8 FATAL_ERROR)
project(cv_bmc)

if (WITH_OPENCL)
  add_definitions(-DWITH_OPENCL)
endif()

find_package(OpenCV REQUIRED)

# add_subdirectory(core)
add_subdirectory(imgproc)
