# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\StudentAverageCalculator_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\StudentAverageCalculator_autogen.dir\\ParseCache.txt"
  "StudentAverageCalculator_autogen"
  )
endif()
