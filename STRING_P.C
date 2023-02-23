#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,flag=0,len;
char str1[10];
clrscr();
gets(str1);
len=strlen(str1);
for(i=0;i<len;i++)
{
if(str1[i]!=str1[len-i-1])
{
flag=1;
break;
}
}
if(flag==0)
{
printf("the string '%s' is a palindrome",str1);
}
else
{ printf("not a palindrome");
}
getch();
}