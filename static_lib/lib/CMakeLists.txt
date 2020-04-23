CMAKE_MINIMUM_REQUIRED(VERSION 3.0)  

SET(LIB_SRC math.cpp)  #添加源文件

#添加静态库  
ADD_LIBRARY(math_static STATIC ${LIB_SRC})  

#将静态库重新命名为Libtpli
SET_TARGET_PROPERTIES(math_static PROPERTIES OUTPUT_NAME "math")
