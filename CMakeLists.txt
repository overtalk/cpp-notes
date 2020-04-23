cmake_minimum_required(VERSION 3.0)  

project(TestLIB)  #工程名

include_directories(${PROJECT_SOURCE_DIR}/lib)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin/exec)       #设置可执行文件的输出目录

set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin/lib)           #设置库文件的输出目录

add_subdirectory(lib) #添加子目录
add_subdirectory(test) #添加子目录