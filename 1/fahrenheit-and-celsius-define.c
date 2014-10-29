#include <stdio.h>

#define LOWER 0   /* 温度表的下限 */
#define UPPER 300 /* 温度表的上限 */
#define STEP  20  /* 步长 */

/* 
当 fahr = 0, 20, ..., 300 时，分别打印华氏温度与摄氏温度对照表
define 版本
*/
int main()
{
  for (int fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
}