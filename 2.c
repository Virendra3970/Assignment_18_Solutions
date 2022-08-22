//Write a C function to reverse a string 
#include<stdio.h>
#include<string.h>
void reverse(char str[])
{
 int i,index;
 for(i=0;str[i];i++)
    index=i;
 printf("\nReverse of a given string: ");
 for(i=index;i>=0;i--)
   printf("%c",str[i]);
}
int main()
{
 char str[50];
 printf("\nEnter a string: ");
 fgets(str,50,stdin);
 reverse(str);
 printf("\n");
 return 0;
}
