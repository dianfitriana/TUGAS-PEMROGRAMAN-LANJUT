#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int i,a,b,hasil;
	
	printf("====Bentuk Iteratif====\n\n");
	printf("Masukkan angka : ");
	scanf("%d", &a);
	printf("Masukkan pangkat : ");
	scanf("%d", &b);
	
	for (i=1; i<=b; i++)
	hasil =hasil*a;
	printf("Hasil dari %d pangkat %d = %d\n", a,b,hasil);
	return 0;
}
