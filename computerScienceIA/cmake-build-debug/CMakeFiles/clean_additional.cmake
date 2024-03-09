# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/computerScienceIA_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/computerScienceIA_autogen.dir/ParseCache.txt"
  "computerScienceIA_autogen"
  )
endif()
