cmake_minimum_required(VERSION 3.0.0)

project(CppProjectTemplate
	VERSION 1.0.0
	LANGUAGES CXX C)

set(LIBRARY_NAME Library)

add_subdirectory(src)
add_subdirectory(app)
