/* 修改温度转换程序，使之能张转换表的顶部打印一个标题。 */
#include <stdio.h>

int main()
{
  float celsius;
  int fahr, lower, upper, step;

  lower = 0; /* 温度表的下限 */
  upper = 300; /* 温度表的上限 */
  step = 20; /* 步长 */

  fahr = lower;
  printf("华氏度\t摄氏度\n");
  while (fahr <= upper) {
    celsius = 5 * (fahr - 32) / 9.0;
    printf("%3d\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}