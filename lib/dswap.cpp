//
//  dswap.cpp
//  Linear Algebra Template Library
//
//  Created by Rodney James on 1/1/13.
//  Copyright (c) 2013 University of Colorado Denver. All rights reserved.
//

#include "blas.h"
#include "swap.h"

using LATL::SWAP;

int dswap_(int &n, double *x, int& incx, double *y, int& incy)
{
   SWAP(n,x,incx,y,incy);
   return 0;
}
