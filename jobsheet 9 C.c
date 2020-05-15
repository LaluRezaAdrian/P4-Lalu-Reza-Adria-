#include <stdio.h>
int main()
{
int i;
char nama[5]={'R','E','Z','A'};
char nama2[]="REZA";
printf("Array per Karakter = ");
for(i=0;i<=4;i++)
{
printf("%c",nama[i]);
}
printf("\n"); printf("Array string =%s\n\n",nama2);
return 0;
}
