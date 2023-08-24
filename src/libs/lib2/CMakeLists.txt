set(LIB_NAME lib2)

add_library(${LIB_NAME}
  src/lib2.c
  src/priv_lib2.c)

target_include_directories(${LIB_NAME} 
  PUBLIC
    include/
  PRIVATE
    priv_include/
)