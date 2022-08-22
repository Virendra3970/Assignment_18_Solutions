// Write a Function in C  to calculate the lenght of a string
#include<stdio.h>
#include<string.h>
int Length(char str[])
{
 int i,j=0;
 for(i=0;str[i+1];i++)
     j++;
 return j;
 
}
int main()
{
 char str[50];
 printf("\nPlease Enter a string:");
 fgets(str,50,stdin);
 printf("\nLength of the given string is %d\n", Length(str));
 return 0;
}
