#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,c;
clrscr();
printf("enter the number\n");
scanf("%d%d",&a,&b);
for(i=1;i<=5;i++)
{
 c=a+b;
 a=b;
 b=c;
 printf("%d,",c);
}
getch();
}