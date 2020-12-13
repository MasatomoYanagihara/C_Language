#include <stdio.h>
#include <stdlib.h>

// 配列の中身を表示する関数
void print_array(int v[], int n)
{
  int i;
  printf("array: ");
  for (i = 0; i < n; i++)
  {
    printf("%d ", v[i]);
  }
  printf("\n");
}

// 挿入ソート関数
void insertion_sort(int v[], int n) // 引数(データが格納された配列, データの個数)
{
  int i, j, t;
  for (i = 1; i < n; i++)
  {
    j = i;
    while ((j >= 1) && (v[j - 1] > v[j]))
    {
      t = v[j];
      v[j] = v[j - 1];
      v[j - 1] = t;
      j--;
      printf("i:%d j:%d  ", i, j);
      print_array(v, n); // ソート途中の状態も表示
    }
  }
}

int main()
{
  int array[5] = {30, 50, 20, 10, 40};
  print_array(array, 5); // ソート前を表示
  insertion_sort(array, 5);
  print_array(array, 5); // ソート後を表示
  return 0;
}