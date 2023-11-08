cmake_minimum_required(VERSION 3.24)
project(ds_algo)

set(CMAKE_CXX_STANDARD 17)

add_executable(BasicsRunner 00BackToBasics/runner/BasicsRunner.cpp
        00BackToBasics/model/Person.cpp
        00BackToBasics/header/Person.h
        03Arrays/array-representations/ArrayRepresentationsRunner.cpp)
add_executable(RecursionsRunner 01Recursions/runner/RecursionsRunner.cpp
        01Recursions/model/RecursionExercise.cpp
        01Recursions/header/RecursionExercise.h)
add_executable(ArrayRepresentationsRunner 03Arrays/array-representations/ArrayRepresentationsRunner.cpp)