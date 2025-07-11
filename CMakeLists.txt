cmake_minimum_required(VERSION 3.5)

project(small_tasks LANGUAGES CXX)

FILE(GLOB_RECURSE LibFiles "include/*.h")
add_custom_target(_small_tasks_include SOURCES ${LibFiles})

file(GLOB_RECURSE Sources "source/*.cpp")

if(MSVC)
    add_compile_options(/bigobj)
endif(MSVC)

add_executable(small_tasks ${Sources})

target_include_directories(small_tasks PUBLIC
                            "${PROJECT_SOURCE_DIR}"
                            "${PROJECT_SOURCE_DIR}/include"
)
