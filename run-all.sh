#!/bin/sh

g++ ./c++/1000x1000-dot.cpp
echo "===== C++ ====="
time -p ./a.out

echo "===== Python + numpy ====="
time -p ./numpy-python/1000x1000-dot-nupy.py

echo "===== Python ====="
time -p ./python/1000x1000-dot.py