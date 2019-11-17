#include <stdio.h>
#include <stdlib.h>

int pangkat (int a, int b)
{
	if (b==0){
		return 1;
	}
	else {
		return a* pangkat(a,b-1);
	}
}

int main() 
{
	int a,b;
	printf("====Bentuk Rekursif====\n\n");
	printf("Masukkan angka yang ingin dipangkatkan : ");
	scanf("%d", &a);
	printf("Masukkan pangkat : ");
	scanf("%d", &b);
	printf("Hasil dari %d pangkat %d = %d\n", a,b,pangkat(a,b));
	return 0;
}
