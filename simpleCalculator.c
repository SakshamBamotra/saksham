#include<stdio.h>
float sum(float,float);
float sub(float,float);
float mult(float,float);
float div(float,float);
void main()
{
    int choice;
    float a,b,result;
    printf("Enter the 1st no: ");
    scanf("%f",&a);
    printf("Enter the 2nd no: ");
    scanf("%f",&b);
    printf("1-addition\n2-subtraction\n3-multiplication\n4-division\n");
    scanf("%d",&choice);
    switch(choice)

    {

    case 1:
        {
            result=sum(a,b);
            printf("the addition is: %f",result);
            break;
        }
    case 2:
        {
            result=sub(a,b);
            printf("the subtraction is: %f",result);
            break;
        }
    case 3:
        {
            result=mult(a,b);
            printf("the multiplication is: %f",result);
            break;
        }
    case 4:
        {
            result=div(a,b);
            printf("the division is: %f",result);
            break;
        }
    }

}
float sum(float a,float b)
{
    float z;
    z=a+b;
    return z;
}
float sub(float a,float b)
{
float z;
z=a-b;
return z;
}
float mult(float a,float b)
{
    float z=a*b;
    return z;
}
float div(float a,float b)
{
    float z;
    z=a/b;
    return z;
}
