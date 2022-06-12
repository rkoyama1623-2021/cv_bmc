# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
add_executable(bmc_threshold bmc_threshold.cpp)
target_link_libraries(bmc_threshold ${OpenCV_LIBS})
set_target_properties(bmc_threshold PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/bin
)
install(
  TARGETS bmc_threshold
  RUNTIME DESTINATION ${CMAKE_BINARY_DIR}/bin
)
