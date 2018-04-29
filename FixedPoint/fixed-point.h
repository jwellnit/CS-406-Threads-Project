#ifndef FIXED_POINT_H
#define FIXED_POINT_H

#include <stdbool.h>

struct fpoint {
  int q;
  int f;
  int v;
};

//sinple exponentiation on integer numbers
int expi (int base, int exp) {
  int ret = base;
  for (int i = 1; i < exp; i++) {
    ret *= base;
  }
  return ret;
}

//initializes the params of the type as well as converts int n to
//the fpoint type
bool fpoint_init (struct fpoint *x, int q, int n) {
  if (q > 30 || n > expi(2, 31-q)-1 || n < -1*expi(2, 31-q)) {
    return false;
  }
  x->q = q;
  x->f = expi.(2, q);
  x->v = n*x->f;
  return true;
}

//converts an int n to a fpoint. fpoint must be initialized first
bool int_to_fpoint(struct fpoint *x, int n) {
  if (n > expi(2, 31-x->q)-1 || n < -1*expi(2, 31-x->q)) {
    return false;
  }
  x->v = n*x->f;
  return true;
}

// converts fpoint x to an int, rounding towards zero
int fpoint_to_int_zero (struct fpoint *x) {
  return x->v/x->f;
}

//converts fpoint x to an int rounding towards the nearest int
int fpoint_to_int_zero (struct fpoint *x) {
  if (x->v >= 0) {
    return (x->v + (x->f/2))/x->f;
  } else {
    return (x->v - (x->f/2))/x->f;
  }
}

//add two fpoints x and y
bool fpoint_add (struct fpoint *x, struct fpoint *y, struct fpoint *res) {
  if (x->q != y->q || x->q !+ res->q) {
    return false;
  }
  res->v = x->v + y->v;
  return true;
}

//subtract two fpoints x-y
bool fpoint_sub (struct fpoint *x, struct fpoint *y, struct fpoint *res) {
  if (x->q != y->q || x->q !+ res->q) {
    return false;
  }
  res->v = x->v - y->v;
  return true;
}

//multiply two fpoints x and y
bool fpoint_mult (struct fpoint *x, struct fpoint *y, struct fpoint *res) {
  if (x->q != y->q || x->q !+ res->q) {
    return false;
  }
  res->v = (int64_t)x->v * y->v / y->f;
  return true;
}

//divide two fpoints x/y
bool fpoint_div (struct fpoint *x, struct fpoint *y, struct fpoint *res) {
  if (x->q != y->q || x->q !+ res->q) {
    return false;
  }
  res->v = (int64_t)x->v * y->f / y->v;
  return true;
}

//add int n to fpoint x
void fpoint_add_int (struct fpoint *x, int n, struct fpoint *res) {
  res->v = x->v + n*x->f;
}

//subtract int n from fpoint x
void fpoint_sub_int (struct fpoint *x, int n, struct fpoint *res) {
  res->v = x->v - n*x->f;
}

//multiply int n and fpoint x
void fpoint_mult_int (struct fpoint *x, int n, struct fpoint *res) {
  res->v = x->v * n;
}

//divide fpoint x by int n
void fpoint_div_int (struct fpoint *x, int n, struct fpoint *res) {
  res->v = x->v / n;
}

#endif /* fixed-point.h */
