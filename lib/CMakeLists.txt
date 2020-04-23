set(LIB_SRC math.cpp)  #添加源文件

#添加静态库  
add_library(math_static STATIC ${LIB_SRC})  

#将静态库重新命名为 libmath
set_target_properties(math_static PROPERTIES OUTPUT_NAME "math")
