cmake_minimum_required(VERSION 2.8)

project(build-your-own-lisp)

add_executable(main main.c)


target_link_libraries(main edit)