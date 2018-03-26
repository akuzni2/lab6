cmake_minimum_required(VERSION 3.9)
project(Lab6HeapStubAssignment)

set(CMAKE_CXX_STANDARD 11)

add_executable(Lab6HeapStubAssignment
        Driver.cpp
        in.txt
        in2.txt
        in3.txt
        in4.txt
        out.txt
        out2.txt
        out3.txt
        out4.txt
        Heap.h
        Heap.cpp
        )
