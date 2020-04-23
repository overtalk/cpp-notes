link_libraries(${PROJECT_SOURCE_DIR}/bin/lib/libmath.a) #添加静态库

add_executable(test main.cpp)

target_link_libraries(test ${PROJECT_SOURCE_DIR}/bin/lib/libmath.a) #连接静态库库
