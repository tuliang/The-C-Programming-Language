#include <stdio.h>

/* 
当 fahr = 0, 20, ..., 300 时，分别打印华氏温度与摄氏温度对照表
for 版本
*/
int main()
{
  for (int fahr = 0; fahr <= 300; fahr = fahr + 20)
    printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
}