#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],size,i,num;
clrscr();
printf("Enter the size of the array");
scanf("%d",&size);
printf("Enter the array elements\n");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the number you want to search ");
scanf("%d",&num);
for(i=0;i<size;i++)
{
if(a[i]==num)
printf("%d element found at %d position",num,i+1);
}
getch();
}
