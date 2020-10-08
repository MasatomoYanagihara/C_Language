// 階乗の計算のプログラム

#include <stdio.h>

int factorial(int n)
{
  if (n == 0)
  {
    return 1;
  }
  else
  {
    return n * factorial(n - 1);
  }
}

int main()
{
  int i;
  i = 5; // 任意の値を代入する
  printf("%d! = %d\n", i, factorial(i));

  return 0;
}