#include <stdio.h>
#include <stdlib.h>
#include "./fixed-point.h"

int main(void)
{
  printf("Test Exponentiation 2^2:\n");
  if (expi(2,2) == 4) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
  }

  printf("Test Exponentiation 2^10:\n");
  if (expi(2,10) == 1024) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
  }

  printf("Test Exponentiation 2^3:\n");
  if (expi(2,3) == 8) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
  }

  printf("Test Exponentiation, 2^0:\n");
  if (expi(2,0) == 1) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
  }

  printf("Test Exponentiation, 2^1:\n");
  if (expi(2,1) == 2) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
  }

  printf("Test Exponentiation -2^2:\n");
  if (expi(-2,2) == 4) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
  }

  printf("Test Exponentiation -2^10:\n");
  if (expi(-2,10) == 1024) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
  }

  printf("Test Exponentiation -2^3:\n");
  if (expi(-2,3) == -8) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
  }

  printf("Test Exponentiation, -2^0:\n");
  if (expi(-2,0) == 1) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
  }

  printf("Test Exponentiation, -2^1:\n");
  if (expi(-2,1) == -2) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
  }

  printf("Test Init, 1, 0:\n");
  struct fpoint *x = malloc(sizeof(struct fpoint));
  if (fpoint_init(x, 0, 1) && x->v == 1) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
  }
  free(x);

  printf("Test Init, 1, 14:\n");
  x = malloc(sizeof(struct fpoint));
  if (fpoint_init(x, 14, 1) && x->v == 16384) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
  }
  free(x);

  printf("Test Init, 1, 30:\n");
  x = malloc(sizeof(struct fpoint));
  if (fpoint_init(x, 30, 1) && x->v == 1073741824) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
  }
  free(x);

  printf("Test Init, 2, 0:\n");
  x = malloc(sizeof(struct fpoint));
  if (fpoint_init(x, 0, 2) && x->v == 2) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
  }
  free(x);

  printf("Test Init, 2, 14:\n");
  x = malloc(sizeof(struct fpoint));
  if (fpoint_init(x, 14, 2) && x->v == 32768) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
  }
  free(x);

  printf("Test Init, 2, 28:\n");
  x = malloc(sizeof(struct fpoint));
  if (fpoint_init(x, 28, 2) && x->v == 536870912) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
  }
  free(x);

  printf("Test Init, 10, 5:\n");
  x = malloc(sizeof(struct fpoint));
  if (fpoint_init(x, 5, 10) && x->v == 320) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
  }
  free(x);

  printf("Test Init, 10, 14:\n");
  x = malloc(sizeof(struct fpoint));
  if (fpoint_init(x, 14, 10) && x->v == 163840) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
  }
  free(x);

  printf("Test Init, -10, 5:\n");
  x = malloc(sizeof(struct fpoint));
  if (fpoint_init(x, 5, -10) && x->v == -320) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
  }
  free(x);

  printf("Test Init, -10, 14:\n");
  x = malloc(sizeof(struct fpoint));
  if (fpoint_init(x, 14, -10) && x->v == -163840) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
  }
  free(x);

  printf("Test int_to_fpoint, 1, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, 0);
  if (int_to_fpoint(x, 1) && x->v == 16384) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
  }
  free(x);

  printf("Test int_to_fpoint, 2, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, 0);
  if (int_to_fpoint(x, 2) && x->v == 32768) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
  }
  free(x);

  printf("Test int_to_fpoint, 10, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, 0);
  if (int_to_fpoint(x, 10) && x->v == 163840) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
  }
  free(x);

  printf("Test int_to_fpoint, -1, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, 0);
  if (int_to_fpoint(x, -1) && x->v == -16384) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
  }
  free(x);

  printf("Test int_to_fpoint, -2, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, 0);
  if (int_to_fpoint(x, -2) && x->v == -32768) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
  }
  free(x);

  printf("Test int_to_fpoint, -10, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, 0);
  if (int_to_fpoint(x, -10) && x->v == -163840) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
  }
  free(x);

  printf("Test fpoint_add, 100+43, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, 100);
  struct fpoint *y = malloc(sizeof(struct fpoint));
  fpoint_init(y, 14, 43);
  struct fpoint *res = malloc(sizeof(struct fpoint));
  fpoint_init(res, 14, 0);
  fpoint_add(x, y, res);
  if (res->v == 2342912) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
    printf("%d\n", res->v);
  }
  free(x);
  free(y);
  free(res);

  printf("Test fpoint_add, -100+43, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, -100);
  y = malloc(sizeof(struct fpoint));
  fpoint_init(y, 14, 43);
  res = malloc(sizeof(struct fpoint));
  fpoint_init(res, 14, 0);
  fpoint_add(x, y, res);
  if (res->v == -933888) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
    printf("%d\n", res->v);
  }
  free(x);
  free(y);
  free(res);

  printf("Test fpoint_add, 100+-43, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, 100);
  y = malloc(sizeof(struct fpoint));
  fpoint_init(y, 14, -43);
  res = malloc(sizeof(struct fpoint));
  fpoint_init(res, 14, 0);
  fpoint_add(x, y, res);
  if (res->v == 933888) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
    printf("%d\n", res->v);
  }
  free(x);
  free(y);
  free(res);

  printf("Test fpoint_add, -100+-43, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, -100);
  y = malloc(sizeof(struct fpoint));
  fpoint_init(y, 14, -43);
  res = malloc(sizeof(struct fpoint));
  fpoint_init(res, 14, 0);
  fpoint_add(x, y, res);
  if (res->v == -2342912) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
    printf("%d\n", res->v);
  }
  free(x);
  free(y);
  free(res);

  printf("Test fpoint_sub, 100-43, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, 100);
  y = malloc(sizeof(struct fpoint));
  fpoint_init(y, 14, 43);
  res = malloc(sizeof(struct fpoint));
  fpoint_init(res, 14, 0);
  fpoint_sub(x, y, res);
  if (res->v == 933888) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
    printf("%d\n", res->v);
  }
  free(x);
  free(y);
  free(res);

  printf("Test fpoint_sub, -100-43, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, -100);
  y = malloc(sizeof(struct fpoint));
  fpoint_init(y, 14, 43);
  res = malloc(sizeof(struct fpoint));
  fpoint_init(res, 14, 0);
  fpoint_sub(x, y, res);
  if (res->v == -2342912) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
    printf("%d\n", res->v);
  }
  free(x);
  free(y);
  free(res);

  printf("Test fpoint_sub, 100--43, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, 100);
  y = malloc(sizeof(struct fpoint));
  fpoint_init(y, 14, -43);
  res = malloc(sizeof(struct fpoint));
  fpoint_init(res, 14, 0);
  fpoint_sub(x, y, res);
  if (res->v == 2342912) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
    printf("%d\n", res->v);
  }
  free(x);
  free(y);
  free(res);

  printf("Test fpoint_sub, -100--43, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, -100);
  y = malloc(sizeof(struct fpoint));
  fpoint_init(y, 14, -43);
  res = malloc(sizeof(struct fpoint));
  fpoint_init(res, 14, 0);
  fpoint_sub(x, y, res);
  if (res->v == -933888) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
    printf("%d\n", res->v);
  }
  free(x);
  free(y);
  free(res);

  printf("Test fpoint_mult, 100*43, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, 100);
  y = malloc(sizeof(struct fpoint));
  fpoint_init(y, 14, 43);
  res = malloc(sizeof(struct fpoint));
  fpoint_init(res, 14, 0);
  fpoint_mult(x, y, res);
  if (res->v == 70451200) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
    printf("%d\n", res->v);
  }
  free(x);
  free(y);
  free(res);

  printf("Test fpoint_mult, -100*43, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, -100);
  y = malloc(sizeof(struct fpoint));
  fpoint_init(y, 14, 43);
  res = malloc(sizeof(struct fpoint));
  fpoint_init(res, 14, 0);
  fpoint_mult(x, y, res);
  if (res->v == -70451200) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
    printf("%d\n", res->v);
  }
  free(x);
  free(y);
  free(res);

  printf("Test fpoint_mult, 100*-43, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, 100);
  y = malloc(sizeof(struct fpoint));
  fpoint_init(y, 14, -43);
  res = malloc(sizeof(struct fpoint));
  fpoint_init(res, 14, 0);
  fpoint_mult(x, y, res);
  if (res->v == -70451200) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
    printf("%d\n", res->v);
  }
  free(x);
  free(y);
  free(res);

  printf("Test fpoint_mult, -100*-43, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, -100);
  y = malloc(sizeof(struct fpoint));
  fpoint_init(y, 14, -43);
  res = malloc(sizeof(struct fpoint));
  fpoint_init(res, 14, 0);
  fpoint_mult(x, y, res);
  if (res->v == 70451200) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
    printf("%d\n", res->v);
  }
  free(x);
  free(y);
  free(res);

  printf("Test fpoint_div, 100/43, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, 100);
  y = malloc(sizeof(struct fpoint));
  fpoint_init(y, 14, 43);
  res = malloc(sizeof(struct fpoint));
  fpoint_init(res, 14, 0);
  fpoint_div(x, y, res);
  if (res->v == 38102) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
    printf("%d\n", res->v);
  }
  free(x);
  free(y);
  free(res);

  printf("Test fpoint_div, -100/43, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, -100);
  y = malloc(sizeof(struct fpoint));
  fpoint_init(y, 14, 43);
  res = malloc(sizeof(struct fpoint));
  fpoint_init(res, 14, 0);
  fpoint_div(x, y, res);
  if (res->v == -38102) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
    printf("%d\n", res->v);
  }
  free(x);
  free(y);
  free(res);

  printf("Test fpoint_div, 100/-43, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, 100);
  y = malloc(sizeof(struct fpoint));
  fpoint_init(y, 14, -43);
  res = malloc(sizeof(struct fpoint));
  fpoint_init(res, 14, 0);
  fpoint_div(x, y, res);
  if (res->v == -38102) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
    printf("%d\n", res->v);
  }
  free(x);
  free(y);
  free(res);

  printf("Test fpoint_div, -100/-43, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, -100);
  y = malloc(sizeof(struct fpoint));
  fpoint_init(y, 14, -43);
  res = malloc(sizeof(struct fpoint));
  fpoint_init(res, 14, 0);
  fpoint_div(x, y, res);
  if (res->v == 38102) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
    printf("%d\n", res->v);
  }
  free(x);
  free(y);
  free(res);

  printf("Test fpoint_add_int, 100+43, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, 100);
  int n = 43;
  res = malloc(sizeof(struct fpoint));
  fpoint_init(res, 14, 0);
  fpoint_add_int(x, n, res);
  if (res->v == 2342912) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
    printf("%d\n", res->v);
  }
  free(x);
  free(res);

  printf("Test fpoint_add_int, -100+43, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, -100);
  n = 43;
  res = malloc(sizeof(struct fpoint));
  fpoint_init(res, 14, 0);
  fpoint_add_int(x, n, res);
  if (res->v == -933888) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
    printf("%d\n", res->v);
  }
  free(x);
  free(res);

  printf("Test fpoint_add_int, 100+-43, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, 100);
  n = -43;
  res = malloc(sizeof(struct fpoint));
  fpoint_init(res, 14, 0);
  fpoint_add_int(x, n, res);
  if (res->v == 933888) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
    printf("%d\n", res->v);
  }
  free(x);
  free(res);

  printf("Test fpoint_add_int, -100+-43, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, -100);
  n = -43;
  res = malloc(sizeof(struct fpoint));
  fpoint_init(res, 14, 0);
  fpoint_add_int(x, n, res);
  if (res->v == -2342912) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
    printf("%d\n", res->v);
  }
  free(x);
  free(res);

  printf("Test fpoint_sub_int, 100-43, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, 100);
  n = 43;
  res = malloc(sizeof(struct fpoint));
  fpoint_init(res, 14, 0);
  fpoint_sub_int(x, n, res);
  if (res->v == 933888) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
    printf("%d\n", res->v);
  }
  free(x);
  free(res);

  printf("Test fpoint_sub_int, -100-43, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, -100);
  n = 43;
  res = malloc(sizeof(struct fpoint));
  fpoint_init(res, 14, 0);
  fpoint_sub_int(x, n, res);
  if (res->v == -2342912) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
    printf("%d\n", res->v);
  }
  free(x);
  free(res);

  printf("Test fpoint_sub_int, 100--43, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, 100);
  n = -43;
  res = malloc(sizeof(struct fpoint));
  fpoint_init(res, 14, 0);
  fpoint_sub_int(x, n, res);
  if (res->v == 2342912) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
    printf("%d\n", res->v);
  }
  free(x);
  free(res);

  printf("Test fpoint_sub_int, -100--43, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, -100);
  n = -43;
  res = malloc(sizeof(struct fpoint));
  fpoint_init(res, 14, 0);
  fpoint_sub_int(x, n, res);
  if (res->v == -933888) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
    printf("%d\n", res->v);
  }
  free(x);
  free(res);

  printf("Test fpoint_mult_int, 100*43, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, 100);
  n = 43;
  res = malloc(sizeof(struct fpoint));
  fpoint_init(res, 14, 0);
  fpoint_mult_int(x, n, res);
  if (res->v == 70451200) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
    printf("%d\n", res->v);
  }
  free(x);
  free(res);

  printf("Test fpoint_mult_int, -100*43, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, -100);
  n = 43;
  res = malloc(sizeof(struct fpoint));
  fpoint_init(res, 14, 0);
  fpoint_mult_int(x, n, res);
  if (res->v == -70451200) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
    printf("%d\n", res->v);
  }
  free(x);
  free(res);

  printf("Test fpoint_mult_int, 100*-43, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, 100);
  n = -43;
  res = malloc(sizeof(struct fpoint));
  fpoint_init(res, 14, 0);
  fpoint_mult_int(x, n, res);
  if (res->v == -70451200) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
    printf("%d\n", res->v);
  }
  free(x);
  free(res);

  printf("Test fpoint_mult_int, -100*-43, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, -100);
  n = -43;
  res = malloc(sizeof(struct fpoint));
  fpoint_init(res, 14, 0);
  fpoint_mult_int(x, n, res);
  if (res->v == 70451200) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
    printf("%d\n", res->v);
  }
  free(x);
  free(res);

  printf("Test fpoint_div_int, 100/43, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, 100);
  n = 43;
  res = malloc(sizeof(struct fpoint));
  fpoint_init(res, 14, 0);
  fpoint_div_int(x, n, res);
  if (res->v == 38102) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
    printf("%d\n", res->v);
  }
  free(x);
  free(res);

  printf("Test fpoint_div_int, -100/43, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, -100);
  n = 43;
  res = malloc(sizeof(struct fpoint));
  fpoint_init(res, 14, 0);
  fpoint_div_int(x, n, res);
  if (res->v == -38102) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
    printf("%d\n", res->v);
  }
  free(x);
  free(res);

  printf("Test fpoint_div_int, 100/-43, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, 100);
  n = -43;
  res = malloc(sizeof(struct fpoint));
  fpoint_init(res, 14, 0);
  fpoint_div_int(x, n, res);
  if (res->v == -38102) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
    printf("%d\n", res->v);
  }
  free(x);
  free(res);

  printf("Test fpoint_div_int, -100/-43, 14:\n");
  x = malloc(sizeof(struct fpoint));
  fpoint_init(x, 14, -100);
  n = -43;
  res = malloc(sizeof(struct fpoint));
  fpoint_init(res, 14, 0);
  fpoint_div_int(x, n, res);
  if (res->v == 38102) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
    printf("%d\n", res->v);
  }
  free(x);
  free(res);


  return 0;
}
