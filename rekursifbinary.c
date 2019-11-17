#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int BinarySearch(int data[], int a, int b, int c){
    int t = (a+b)/2;
    if(a>b){
      return -1;
    } 
    if(data[t] == c){
      return t;
    }
    if(data[t] < c){
      return BinarySearch(data, t+1, b, c);
    } else {
      return BinarySearch(data, a, t-1, c);
    }
}

void view(int i, int data[]){
  for(i=0; i<10; i++){
    printf("%d, ", data[i]);
    }
}


int main(){
    int bil[] = {1,3,6,8,15,17,20,25,30,33};
    int i, j, posisi, cari;

    int n = sizeof(bil)/sizeof(bil[0]);

	printf("\t DATA \n");
    view(i, bil);

    printf("\n\nCari Angka : "); scanf("%d", &cari);
    posisi = BinarySearch(bil, 0, n-1, cari);
    
    if(posisi < 0){
      printf("nilai %d pada array tidak ditemukan", cari);
    } else {
      printf("nilai %d ditemukan pada indeks %d ", cari, posisi+1);
    }
    getch();
    return 0;
}
