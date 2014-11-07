#include <stdio.h>

int power(int m, int n);

/* 测试 power 函数 */
int main()
{
  int i;

  for (int i = 0; i < 10; ++i)
    printf("%d %d %d\n", i, power(2, i), power(-3, i));

  return 0;
}

/* power 函数：求底数的 n 次幂；其中 n >= 0 */
int power(int base, int n)
{
  int i, p;

  p = 1;
  for (int i = 0; i < n; ++i)
    p = p * base;
  return p;
}