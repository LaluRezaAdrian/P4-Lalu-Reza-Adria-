#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>

void gotoxy(int x, int y){ 
COORD k={x,y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),k);}

int main(){
     int a,b,c,d,e,f;
     float uts[50],tugas[50], kuis[50], uas[50]; 
     int absen[50],G,H,I,J,K[50],L,M,N,O;
     char g,mutu;
     char predikat1[]="Lulus",predikat2[]="Tidak Lulus",nama;
     char predikat1_C[100],predikat2_C[100];
	strcpy(predikat1_C,predikat1);
	strcpy(predikat2_C,predikat2);

awal:
system ("cls");
printf("Nama:LALU REZA ADRIAN\n"); 
printf("NIM :F1B019080\n");
printf("Kelompok:17\n\n\n");
printf("PROGRAM PENILAIAN MAHASISWA MATA KULIAH DASAR ELEKTRONIKA\n");
printf("========================================================= \n\n");
printf("Masukkan Persentase Kehadiran : ");
scanf("%d",&a); 
printf("Masukkan Persentase TUGAS     : ");
scanf("%d",&b);
printf("Masukkan Persentase KUIS      : ");
scanf("%d",&c); 
printf("Masukkan Persentase UTS	      : ");
scanf("%d",&d);
printf("Masukkan Persentase UAS	      : ");
scanf("%d",&e); 
f=a+b+c+d+e;

if(f>100)
{
printf("Maaf,Standard Nilai Yang Anda Masukkan Lebih dari 100%\n");
printf("Apakah Anda Ingin Mengulangi ??? ");
scanf("%s",f); if(g=='Y'||'y')
goto awal; else exit;}
{if (f<=100)
printf("Standard Nilai Anda Sudah Mencapai : %d ",f,"%");} 
printf("\n====================================================\n");
printf("Masukkan Jumlah SKS Mata Kuliah : ");scanf("%d",&L);
printf("====================================================\n");
printf("Masukkan Jumlah Mahasiswa yang Ingin Di Input :");
scanf("%d",&M); 
printf(" |====|===================|===========|======|=======|======|=====|=====|=======|==========|============|\n");
printf(" | No.|	Nama Mahasiswa	  | Kehadiran |Tugas | Kuis  | UTS  | UAS |  NA | Grade |Jumlah SKS|  Predikat  |\n"); 
printf(" |====|===================|===========|======|=======|======|=====|=====|=======|==========|============|"); 
for(N=1;N<=M;N++)
{gotoxy(1,20+N);
printf("|  %d |                   |           |      |       |      |     |     |       |          |            |",N); 
gotoxy(8,20+N);scanf("%s", &nama);
gotoxy(32,20+N);scanf("%d" ,&absen[N]); 
gotoxy(40,20+N);scanf("%f" ,&tugas[N]); 
gotoxy(48,20+N);scanf("%f", &kuis[N]);
gotoxy(55,20+N);scanf("%f", &uts[N]); 
gotoxy(62,20+N);scanf("%f", &uas[N]);

G=(absen[N]*a/25); 
H=(tugas[N]*b/100); 
I=(kuis[N]*c/100); 
J=(uts[N]*d/100); 
O=(uas[N]*e/100); 
K[N]=G+H+I+J+O;

{if(K[N]>=80)
mutu='A';
else if(K[N]>=67) mutu='B';
else if(K[N]>=55) mutu='C';
else if(K[N]>=45) mutu='D';
else mutu='E';
gotoxy(76,20+N);
printf("%c", mutu);}

if(K[N]>=45)
{
gotoxy(93,20+N);
printf("%s",predikat1_C);}
else{ 
gotoxy(93,20+N);
printf("%s",predikat2_C);}

gotoxy(68,20+N);printf("%d",K[N]);
gotoxy(86,20+N);printf("%d",L);
}

getch();}
