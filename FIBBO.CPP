//fibonacci series
#include<stdio.h>
#include<conio.h>
void main()      e
{
clrscr();
int a=0,b=1;
int nextterm =a+b;
int  i,n;
printf(" Enter your terms: ");
scanf("%d",&n);
printf("fibonacci series:%d,%d,",a,b);
for(i=4;i<=n;i++)
{
printf("%d ",nextterm);
a=b;
b=nextterm;
nextterm=a+b; }
getch();
}