#ifndef THREADS_FIXED_POINT_H
#define THREADS_FIXED_POINT_H

typedef int fixed_point;

#define F (1 << 16)
#define ADDING_FP(X,Y) (X+Y)
#define SUBTRACTING_FP(X,Y) (X-Y)
#define MULTIPLY_FP_WITH_INT(X,Y) (X*Y)
#define DIVIDE_FP_WITH_INT(X,Y) (X/Y)

#define ADDING_FP_AND_INT(X,Y) (X+CONVERT_INT_TO_FP(Y))
#define SUBTRACTING_FP_AND_INT(X,Y) (X-CONVERT_INT_TO_FP(Y))
#define MULTIPLY_FP(X,Y) (((int64_t) X)*Y / F)
#define DIVIDING_FP(X,Y) (((int64_t) X)*F/Y)
#define CONVERT_INT_TO_FP(X) (X * F)
#define CONVERT_FP_TO_INT(X) (X / F)
#define ROUNDING_FP_TO_INT(X) (X>= 0 ? ((X+F/2)/F):(( X- F/2)/F ))
#endif