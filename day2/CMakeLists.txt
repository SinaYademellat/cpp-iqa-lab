cmake_minimum_required(VERSION 3.10)
project(ImageQualityAssessment)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS} include)

file(GLOB SOURCES "src/*.cpp")

add_executable(iqa_tool ${SOURCES})

target_link_libraries(iqa_tool ${OpenCV_LIBS})
