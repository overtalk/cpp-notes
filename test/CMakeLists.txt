if(UNIX)
    link_directories(${PROJECT_SOURCE_DIR}/bin/lib) #添加链接库的目录
elseif(WIN32)
    link_directories(${PROJECT_SOURCE_DIR}/bin/lib/Debug) #添加链接库的目录
endif()

add_executable(test main.cpp)

if(UNIX)
    target_link_libraries(test math) #连接静态库/动态库
elseif(WIN32)
    target_link_libraries(test math.lib) #连接静态库/动态库
endif()

