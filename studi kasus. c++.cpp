#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
using namespace std; 


void gotoxy(int x, int y){ 
 COORD k={x,y}; 
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),k); 

} 

int main() 
{ 

 int a,b,c,d,e,f; 
 float uts[50],tugas[50], kuis[50], uas[50]; 
 int absen[50],G,H,I,J,K[50],L,M,N,O; 
 char g,mutu; 
 string predikat, nama; 


 awal: 
 system ("cls"); 
 cout<<"Nama:LALU REZA ADRIAN\n"; 
 cout<<"NIM :F1B019080\n"; 
 cout<<"Kelompok:17\n\n\n"; 
 cout<<"PROGRAM PENILAIAN MAHASISWA MATA KULIAH DASAR ELEKTRONIKA"<<endl; 
 cout<<"========================================================= \n\n"; 
 cout<<"Masukkan Persentase Kehadiran : ";cin>>a; 
 cout<<"Masukkan Persentase TUGAS     : ";cin>>b;
cout<<"Masukkan Persentase KUIS      : ";cin>>c; 
 cout<<"Masukkan Persentase UTS       : ";cin>>d; 
    cout<<"Masukkan Persentase UAS       : ";cin>>e; 
    f=a+b+c+d+e; 


if(f>100) 
 {cout<<"Maaf,Standard Nilai Yang Anda Masukkan Lebih dari 100%\n"; 
cout<<"Apakah Anda Ingin Mengulangi ??? ";cin>>f; 
if(g=='Y'||'y') 
 goto awal; 
 else exit;} 
 {if (f<=100) 
 cout<<"Standard Nilai Anda Sudah Mencapai "<<f<<" %"<<endl;} 
cout<<"====================================================\n"; 
cout<<"Masukkan Jumlah SKS Mata Kuliah : ";cin>>L; 
cout<<"====================================================\n"; 
cout<<"Masukkan Jumlah Mahasiswa yang Ingin Di Input : ";cin>>M; 
cout<<endl; 
cout<<" |====|===================|===========|======|=======|======|===== |=====|=======|==========|============|\n"; 
cout<<" | No.|  Nama Mahasiswa   | Kehadiran |Tugas | Kuis  | UTS  | UAS |  NA | Grade |Jumlah SKS|  Predikat  |\n"; 
cout<<" |====|===================|===========|======|=======|======|===== |=====|=======|==========|============|"; 
for(N=1;N<=M;N++)
{gotoxy(1,21+N);cout<<"|"<<N<<"   |                   |           |      |       |      |     |     |       |          |            |"<<endl; 
gotoxy(8,21+N);cin>>nama;cout<<endl; 
gotoxy(32,21+N);cin>>absen[N]; 
gotoxy(40,21+N);cin>>tugas[N]; 
gotoxy(48,21+N);cin>>kuis[N]; 
gotoxy(55,21+N);cin>>uts[N]; 
gotoxy(62,21+N);cin>>uas[N]; 

  G=(absen[N]/25)*a; 
  H=(tugas[N]/100)*b; 
  I=(kuis[N]/100)*c; 
  J=(uts[N]/100)*d; 
  O=(uas[N]/100)*e; 
  K[N]=G+H+I+J+O; 

  {if(K[N]>=80) 
  mutu='A'; 
  else if(K[N]>=67) 
  mutu='B'; 
  else if(K[N]>=55) 
  mutu='C'; 
  else if(K[N]>=45) 
  mutu='D'; 
  else 
 mutu='E'; 
 gotoxy(76,21+N);cout<<mutu;}
{if(K[N]>=45) 
  predikat="Lulus"; 
  else  
 predikat="Tidak Lulus"; 
 gotoxy(93,21+N);cout<<predikat; 
 } 
gotoxy(68,21+N);cout<<K[N]; 
gotoxy(86,21+N);cout<<L<<endl; 
} 

getch();}
