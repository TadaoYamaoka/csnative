cmake_minimum_required(VERSION 3.8)
project(SampleDll)

enable_language(CXX)
add_library(SampleDll SHARED
  sample_dll.cpp
)
