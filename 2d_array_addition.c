#include<stdio.h>
void main()
{
   int a[10][10],b[10][10],d[10][10],r,c,n;
   printf("Enter the (n*n)size of the arrays: ");
   scanf("%d",&n);
   printf("Enter the elements of array'a'\n");
   for(r=0;r<n;r++)
   {
       for(c=0;c<n;c++)
       {
           scanf("%d",&a[r][c]);
       }
   }
   printf("Enter the elements of the array'b'\n");
   for(r=0;r<n;r++)
   {
       for(c=0;c<n;c++)
       {
           scanf("%d",&b[r][c]);
       }
   }
   printf("\nThe array'a' is: ");
   for(r=0;r<n;r++)
   {
       for(c=0;c<n;c++)
       {
           printf("\t%d",a[r][c]);
       }
   }
   printf("\n\nThe array'b' is: ");
   for(r=0;r<n;r++)
   {
       for(c=0;c<n;c++)
       {
           printf("\t%d",b[r][c]);
       }
   }
   for(r=0;r<n;r++)
   {
       for(c=0;c<n;c++)
       {
           d[r][c]=a[r][c]+b[r][c];
       }
   }
   printf("\n\nThe array'c' is:");
    for(r=0;r<n;r++)
   {
       for(c=0;c<n;c++)
       {
           printf("\t%d",d[r][c]);
       }
   }
}
