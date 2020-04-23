cmake_minimum_required(VERSION 3.0)  

project(test)  #工程名

link_libraries(/Users/qinhan/c++/test/build/lib/libmath.a)#添加静态库

add_executable(test main.cpp)

target_link_libraries(test /Users/qinhan/c++/test/build/lib/libmath.a)# 连接静态库库
