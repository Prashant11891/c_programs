#include<stdio.h>
#include<string.h>
void main()
{
int i,j,k,l;
char a[20],c[20],d[20];
printf("\n--- RAILFENCE CIPHER ---");
printf("\n\nEnter the string : ");
gets(a);
l=strlen(a);
/*Ciphering*/
for(i=0,j=0;i<l;i++)
{
if(i%2==0)
c[j++]=a[i];
}
for(i=0;i<l;i++)
{
if(i%2==1)
c[j++]=a[i];
}
c[j]='\0';
printf("\nCipher text - ");
printf("%s",c);

}
