#include <stdio.h>


int main(){
	int angka[10]={6,6,2,5,8,1,7,3,4,1};
	int i,j;
	printf("angka sebelum diurutkan\n");
	for(i=0; i<10; i++){
		printf("%d ", angka[i]);
	}
	//looping sebanyak jumlah data
	for(i=0; i<10; i++){
		int terkecil=i;
		//looping untuk mencari index/posisi angka yang terkecil
		//caranya adalah membandingkan angka satu per satu
		for( j=i; j<10; j++){
			//jika ada yang lebih kecil dari angka index ke terkecil
			if(angka[j]<angka[terkecil]){
				//maka, ganti terkecil menjadi index angka tersebut
				terkecil=j;
			}
		}
		//swap value (tukar)
		int temp=angka[i];
		angka[i]=angka[terkecil];
		angka[terkecil]=temp;
	}
	//cetak data
	printf("\nangka sesudah diurutkan\n");
	for(i=0; i<10; i++){
		printf("%d ", angka[i]);
	}
}
