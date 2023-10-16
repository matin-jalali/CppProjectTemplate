function(add_git_submodule dir)
    find_package(Git REQUIRED)

    message("START SUBMODULE UPDATE")

    if(NOT EXISTS ${CMAKE_SOURCE_DIR}/${dir}/CMakeLists.txt)
	    execute_process(COMMAND ${GIT_EXECUTABLE}
		    submodule update --init --recursive -- ${dir}
		    WORKING_DIRECTORY ${PROJECT_SOURCE_DIR})
    endif()

    if(EXISTS ${CMAKE_SOURCE_DIR}/${dir}/CMakeLists.txt)
        message("Adding: ${dir}/CMakeLists.txt")
        add_subdirectory(${CMAKE_SOURCE_DIR}/${dir})
    else()
        message("Could not add: ${CMAKE_SOURCE_DIR}/${dir}/CMakeLists.txt")
    endif()
endfunction(add_git_submodule)
