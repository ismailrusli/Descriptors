cmake_minimum_required(VERSION 3.2)
project("Descriptors")

find_package(OpenCV REQUIRED)

include_directories(${CMAKE_SOURCE_DIR}/include)
file(GLOB SOURCES "src/*.cpp")

add_executable(Descriptors ${SOURCES})
target_link_libraries(Descriptors ${OpenCV_LIBS})

