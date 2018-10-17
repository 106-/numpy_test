#!/usr/bin/env python

from matrix import matrix

m = matrix([[1000*i+n for n in range(1000)] for i in range(1000)])
dotm = m * m
#print(dotm.values)