#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main() {
	
	int data[3][3][3]={{{5,1,5},{6,2,8},{1,2,1}},{{-3,2,5},{-4,3,4},{-5,7,8}},{{-3,-2,1},{-7,-4,-1},{-8,-3,2}}};
	
	int i,j,k,z=1;
	for(i=0;i<3;i++){
		printf("Array ke-%d: \n",z);
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				printf(" %d ",data[i][j][k]);
			}
			printf(" \n");
		}
		z++;
		printf(" \n");
	}

////MENGHITUNG DENGAN LOOPING 	
	float hasil[2][2];
	float total[2];
	float duatitik[2];
	z=1;
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			for(k=0;k<=2;k++){
				duatitik[k] = (data[i][j][k]-data[i][j+1][k]);
			}
			hasil[i][j]=sqrt(pow(duatitik[0],2)+pow(duatitik[1],2)+pow(duatitik[2],2));
			printf("Hasil Garis %d - %d = %f\n",j,j+1,hasil[i][j]);
		}
		total[i]=hasil[i][0]+hasil[i][1];
		printf("Total Garis Array ke-%d = %f\n\n",z,total[i]);
		z++;
	}
	

////MENGHITUNG DENGAN RUMUS OPERATOR
/*	float hasil1, hasil2, hasild;
			j=0, k=0;
			i=0;
			hasil1=sqrt((pow(data[i][j][k]-data[i][j+1][k],2))+(pow(data[i][j][k+1]-data[i][j+1][k+1],2))+(pow(data[i][j][k+2]-data[i][j+1][k+2],2)));
			printf("Hasil Jarak AB = %f\n",hasil1);
			
			hasil2=sqrt((pow(data[i][j+1][k]-data[i][j+2][k],2))+(pow(data[i][j+1][k+1]-data[i][j+2][k+1],2))+(pow(data[i][j+1][k+2]-data[i][j+2][k+2],2)));
			printf("Hasil Jarak BC = %f\n",hasil2);
			
			hasild=hasil1+hasil2;
			printf("Hasil AB+BC = %f\n\n",hasild);
			
			i=1;
			hasil1=sqrt((pow(data[i][j][k]-data[i][j+1][k],2))+(pow(data[i][j][k+1]-data[i][j+1][k+1],2))+(pow(data[i][j][k+2]-data[i][j+1][k+2],2)));
			printf("Hasil Jarak DE = %f\n",hasil1);
			
			hasil2=sqrt((pow(data[i][j+1][k]-data[i][j+2][k],2))+(pow(data[i][j+1][k+1]-data[i][j+2][k+1],2))+(pow(data[i][j+1][k+2]-data[i][j+2][k+2],2)));
			printf("Hasil Jarak EF = %f\n",hasil2);
	
			hasild=hasil1+hasil2;
			printf("Hasil DE+EF = %f\n\n",hasild);
			
			i=2;
			hasil1=sqrt((pow(data[i][j][k]-data[i][j+1][k],2))+(pow(data[i][j][k+1]-data[i][j+1][k+1],2))+(pow(data[i][j][k+2]-data[i][j+1][k+2],2)));
			printf("Hasil Jarak GH = %f\n",hasil1);
			
			hasil2=sqrt((pow(data[i][j+1][k]-data[i][j+2][k],2))+(pow(data[i][j+1][k+1]-data[i][j+2][k+1],2))+(pow(data[i][j+1][k+2]-data[i][j+2][k+2],2)));
			printf("Hasil Jarak HI = %f\n",hasil2);
	
			hasild=hasil1+hasil2;
			printf("Hasil GH+HI = %f\n\n",hasild);
*/

	return 0;
}
