#include "stdio.h"
#include "stdlib.h"

#define MAX 200

int interpolation_search(int d[], int b, int a, int c) {

 int t;
 while (b <= a) {
  t = b + (a - b)
    * ((c - d[b]) / (d[a] - d[b]));
  if (c == d[t])
   return t + 1;
  if (c< d[t])
   a = t - 1;
  else
   b = t + 1;
 }
 return -1;
}

int main() {
 int arr[MAX];
 int i, num;
 int c, pos;

 printf("masukkan banyak elemen (num< %d) : ", MAX);
 scanf("%d", &num);

 printf("masukkam %d elemen :\n", num);
 for (i = 0; i < num; i++)
  scanf("%d", &arr[i]);

 printf("elemen: ");
 for (i = 0; i < num; i++)
  printf("%d ", arr[i]);

 printf("cari elemen : ");
 scanf("%d", &c);
 pos = interpolation_search(&arr[0], 0, num, c);
 if (pos == -1)
  printf("element %d tidak ditemukan", c);
 else
  printf("elemen %d ditemukan pada indeks ke %d", c, pos);

 return 0;
}
