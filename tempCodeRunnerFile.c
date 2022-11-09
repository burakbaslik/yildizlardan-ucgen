#include <stdio.h>
#include <stdlib.h>

int main()
{

/*int a,k;
int sayi=1;

for (k=0;k<6;k++)
{
   for(a=0;a<sayi;a++)
{
    printf("*");
}

printf("\n");
sayi++;

} */

int a,b,c,sayi=1,bosluk;
int giris;

bosluk = giris-1;

printf("lutfen istediginiz yildiz sayisini giriniz\n");
scanf("%d",&giris);

for(a=0;a<giris;a++)
{

    for(c=0;c<bosluk;c++)
    {
        printf(".");
    }


    for(b=0;b<sayi;b++)
    {
        printf("*");
    }
    printf("\n");
    sayi+=2;
    bosluk--;
}






























}