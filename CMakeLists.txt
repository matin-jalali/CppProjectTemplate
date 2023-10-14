cmake_minimum_required(VERSION 3.0.0)

project(CppProjectTemplate
	VERSION 1.0.0
	LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 		17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS 	OFF)

option(COMPILE_EXECUTABLE "whether to compile the executable" ON)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")
include(AddGitSubmodule)

add_git_submodule(external/json)

set(LIBRARY_NAME Library)
set(EXECUTABLE_NAME Executable)

add_subdirectory(configured)
add_subdirectory(src)
if (COMPILE_EXECUTABLE)
  add_subdirectory(app)
else()
  message("w/o exe. compiling")
endif()
