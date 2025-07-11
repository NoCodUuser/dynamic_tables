cmake_minimum_required(VERSION 3.5)

project(dynamic_tables LANGUAGES CXX)

FILE(GLOB_RECURSE LibFiles "include/*.h")
add_custom_target(_dynamic_tables_include SOURCES ${LibFiles})

file(GLOB_RECURSE Sources "source/*.cpp")

if(MSVC)
    add_compile_options(/bigobj)
endif(MSVC)

add_executable(dynamic_tables ${Sources})

target_include_directories(dynamic_tables PUBLIC
                            "${PROJECT_SOURCE_DIR}"
                            "${PROJECT_SOURCE_DIR}/include"
)
