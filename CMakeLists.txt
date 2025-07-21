cmake_minimum_required(VERSION 3.10)
project(erp-system)

set(CMAKE_CXX_STANDARD 17)

# إضافة جميع ملفات cpp
file(GLOB_RECURSE SOURCES "src/*.cpp")

add_executable(erp-system ${SOURCES})

# تضمين ملفات الهيدر
include_directories(src)
