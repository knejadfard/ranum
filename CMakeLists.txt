cmake_minimum_required(VERSION 2.8)
project(ranum)

include_directories("${ranum_SOURCE_DIR}/inc")

add_library(ranum "${ranum_SOURCE_DIR}/src/ranum.cpp")

#add_executable(test "${ranum_SOURCE_DIR}/src/main.cpp")
#target_link_libraries(test ranum)
