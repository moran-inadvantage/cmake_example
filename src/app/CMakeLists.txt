
message("Message is ${CMAKE_PROJECT_NAME}")
if(CMAKE_PROJECT_NAME STREQUAL APP1)
  set(SOURCES app1/src/main.c)
else()
  set(SOURCES app2/src/main.c)
endif()

set(APP_NAME app)

add_executable(${APP_NAME} 
  ${SOURCES})

target_link_libraries(
  ${APP_NAME}
  LINK_PUBLIC
    lib1
    lib2
)