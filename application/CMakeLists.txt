cmake_minimum_required (VERSION 2.8)

project (app)

cmake_policy(SET CMP0015 NEW)

aux_source_directory(. PROJECT_SOURCE_DIR)
#aux_source_directory(./core CORE_SRC_LIST)
#list(APPEND PROJECT_SOURCE_DIR ${CORE_SRC_LIST})


#$ cmake -DCMAKE_BUILD_TYPE=Debug .
#SET(CMAKE_CXX_FLAGS_DEBUG"$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")
#SET(CMAKE_CXX_FLAGS_RELEASE"$ENV{CXXFLAGS} -O3 -Wall")

add_definitions(-std=c++11)

LINK_DIRECTORIES(
	../library
)

include_directories (
	../library
)

add_executable(app ${PROJECT_SOURCE_DIR})

target_link_libraries(app
	libcomponent.dylib
)
