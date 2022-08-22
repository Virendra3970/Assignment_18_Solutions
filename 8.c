// Write a function to count word in a given string
#include<stdio.h>
#include<string.h>
int Word_Count(char str[])
{
 int i,count=1;
 for(i=0;str[i];i++)
 {
  if(str[i]==' ')
    count++;
 }
 return count;  /*Since at last str[i] !=' ', it'll become NULL ('\0') which will not be counted therefore our output will not become wrong 
 		   Therefore, funtion returns count++ not count.*/
}

int main()
{
 char str[100];
 printf("\nEnter a long string: ");
 fgets(str,100,stdin);
 printf("\nTotal no. of words is %d: ",Word_Count(str));
 printf("\n");
 return 0;
}

