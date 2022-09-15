cmake_minimum_required(VERSION 3.23)
project(pts_mtk C)

set(CMAKE_C_STANDARD 99)

add_executable(pts_mtk main.c cmake-build-debug/test.c)