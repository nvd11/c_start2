#cmake_minimum_required(VERSION 3.3)
#project(make_test)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

#set(SOURCE_FILES main.cpp)
#add_executable(make_test ${SOURCE_FILES})


cmake_minimum_required(VERSION 3.3)
project(make_test)

message("hi\n")
message(${make_test_SOURCE_DIR})
message(${PROJECT_BINARY_DIR})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_custom_target(main COMMAND make -C ${make_test_SOURCE_DIR}
        CLION_EXE_DIR=${PROJECT_BINARY_DIR} && cp ${make_test_SOURCE_DIR}/main ./
         )