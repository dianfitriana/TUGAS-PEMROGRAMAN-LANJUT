#include <stdio.h>
#include <conio.h>

main(){
 int   sks1, sks2, sks3, sks4, sks5, jumlahsks;
 float na1, na2, na3, na4, na5, ip, jumlahnilai;
 char  nh1, nh2, nh3, nh4, nh5;
 char nama [20], npm [15];

 
 printf("=================================================\n");
 printf("\tPROGRAM MENGHITUNG IPK\n");
  printf("=================================================\n\n");
 
 printf("Masukkan Nama	: ");
 gets(nama);
 printf("Masukkan NPM	:");
 gets(npm);
 printf("\n");
 
 printf("Mata Kuliah	: Pemograman dasar\n");
 printf("Masukkan Nilai = ");
 scanf ("%f", &na1);
 printf("Masukkan SKS   = ");
 scanf ("%d", &sks1);

 
 
 printf("Mata Kuliah    : sistem digital \n");
 printf("Masukkan Nilai = ");
 scanf ("%f", &na2);
 printf("Masukkan SKS   = ");
 scanf ("%d", &sks2);

 
 printf("Mata Kuliah    : bahasa indonesia \n");
 printf("Masukkan Nilai = ");
 scanf ("%f", &na3);
 printf("Masukkan SKS   = ");
 scanf ("%d", &sks3);

 
 printf("Mata Kuliah    : matematika diskrit \n");
 printf("Masukkan Nilai = ");
 scanf ("%f", &na4);
 printf("Masukkan SKS   = ");
 scanf ("%d", &sks4);


 printf("Mata Kuliah    : Sistem Informasi \n");
 printf("Masukkan Nilai = ");
 scanf ("%f", &na5);
 printf("Masukkan SKS   = ");
 scanf ("%d", &sks5);


 jumlahsks    = sks1 + sks2 + sks3 + sks4 + sks5;
 jumlahnilai  = (na1*sks1) + (na2*sks2) + (na3*sks3) + (na4*sks4) + (na5*sks5);
 ip = jumlahnilai/jumlahsks;
 
 printf("\n+----------------------------------------------------------+\n");
 printf("| No.        Mata Kuliah		SKS            Nilai	\n");
 printf("+----------------------------------------------------------+\n");
 printf("| 1.  PEMOGRAMAN DASAR     		%d            %.0f       \n", sks1, na1);
 printf("| 2.  SISTEM DIGITAL            	%d            %.0f       \n", sks2, na2);
 printf("| 3.  BAHASA INDONESIA		        %d            %.0f       \n", sks3, na3);
 printf("| 4.  MATEMATIKA DISKRIT   	        %d            %.0f       \n", sks4, na4);
 printf("| 5.  Sistem Informasi		        %d            %.0f       \n", sks5, na5);
 printf("+----------------------------------------------------------+\n"); 
 printf("|                         Kredit = %d SKS  IPK = %.2f		\n", jumlahsks, ip);
 printf("+----------------------------------------------------------+\n");
 
 getch();
}
