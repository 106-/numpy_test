#!/usr/bin/env python
# -*- coding:utf-8 -*-

import numpy as np

m = np.arange(1000000).reshape(1000, 1000)
dotm = np.dot(m, m)
#print(dotm)