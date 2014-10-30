#include <stdio.h>

int main()
{
  int fahr, celsius, lower, upper, step;

  lower = 0; /* 温度表的下限 */
  upper = 300; /* 温度表的上限 */
  step = 20; /* 步长 */

  celsius = lower;

  printf("摄氏度\t华氏度\n");
  while (celsius <= upper) {
    fahr = celsius * 9 / 5 + 32;
    printf("%3d\t%6d\n", celsius, fahr);
    celsius = celsius + step;
  }
}