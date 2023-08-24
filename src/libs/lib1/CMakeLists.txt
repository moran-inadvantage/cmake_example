add_library(lib1 src/lib1.c)

target_include_directories(lib1 
  PUBLIC
    include
)
