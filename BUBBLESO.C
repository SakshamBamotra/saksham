#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],size,i,j,temp;
clrscr();
printf("Enter the size of the array");
scanf("%d",&size);
printf("Enter the value in the array\n");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<size;i++)
{
	for(j=i+1;j<size;j++)
	{
	  if(a[i]>a[j])
	   {
	    temp=a[i];
	    a[i]=a[j];
	    a[j]=temp;
	   }
	 }
}
printf("the bubble sorting the array is:");
for(i=0;i<size;i++)
printf("%d",a[i]);
getch();
}