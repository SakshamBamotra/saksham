#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10],c[10][10];
int i,j,k,m,n,p,q,element,product;
printf("enter the order of the matrixA:\n");
scanf("%d%d",&m,&n);
printf("enter the order of the matrixB:\n");
scanf("%d%d",&p,&q);
if(n!=p)
printf("matrix multiplication is not possible");
else
{
printf("enter the elements of the matrixA:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the elements of the matrixB:\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Matrix Multiplication is:\n");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
 element=0;
 for(k=0;k<p;k++)
 {
  product=(a[i][k]) * (b[k][j]);
   element=element+product;
 }
 c[i][j]=element;
 printf("%d\t",element);
 }
 printf("\n");
 }
 getch();
 }
 }
