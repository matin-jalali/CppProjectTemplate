cmake_minimum_required(VERSION 3.0.0)

project(CppProjectTemplate
	VERSION 1.0.0
	LANGUAGES CXX C)

add_library(Library STATIC my_lib.cc)

add_executable(Executable main.cc my_lib.cc)

target_link_libraries(Executable PUBLIC Library)

