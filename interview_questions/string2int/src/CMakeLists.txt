project(ATOI)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SRC_FILES
    atoi.cpp)

add_executable(atoi ${SRC_FILES})
