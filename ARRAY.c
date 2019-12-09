#include <stdio.h>
#include <stdlib.h>

int main()
{
int input,i,cari;
int npm[]={12,13,14};
float ipk[]={4.00,3.56,3.76};

printf ("pilih menu: \n");
printf ("1.Semua data\n2.tampil data(reverse)\n3.pencarian data\n");
printf ("masukkan pilihan: ");
scanf ("%d",&input);

if (input == 1){
	for (i=0;i<=2;i++)
	{
	printf ("npm= %d memiliki nilai %f \n",npm[i],ipk[i]);
	}	
}
if (input == 2){
	for (i=2;i>=0;i--)
	{
	printf ("npm= %d memiliki nilai %f \n",npm[i],ipk[i]);
	}	
}
else if (input == 3){
			printf("Masukkan npm yang dicari : \n");
			scanf("%d", &cari);
			for(i = 0; i<5; i++){
				if(npm[i] == cari){
					printf("Npm : %d\n", npm[i]);
					printf("ipk : %f\n\n", ipk[i]);
					break;
	}
	return 0;
	}
}
}

percobaan();
