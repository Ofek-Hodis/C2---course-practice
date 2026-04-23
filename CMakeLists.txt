cmake_minimum_required(VERSION 4.1)
project(C2___course_practice C)

set(CMAKE_C_STANDARD 99)

add_executable(C2___course_practice src/Date.c
        include/Date.h
        include/Etudiant.h
        src/Etudiant.c)
