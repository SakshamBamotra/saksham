#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],r,c,i,j;
clrscr();
printf("Enter the order of the 2d array ");
scanf("%d%d",&r,&c);
printf("Enter the array elements\n");
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
  scanf("%d",&a[i][j]);
 }
}
printf("The array is:\n");
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
  printf("%d ",a[i][j]);
 }
 printf("\n");
}
getch();
}