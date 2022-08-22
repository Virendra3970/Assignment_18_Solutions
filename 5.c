// Write a function in C to change a given string into Lowercase
#include<stdio.h>
#include<string.h>
void Lower(char str[])
{
  int i;
 for(i=0;i<=str[i];i++)
 {
   if(str[i]>=65&&str[i]<=91)
      str[i]=str[i]+32;
 }
printf("\nCoverted string is: ");
 for(i=0;str[i];i++)
   printf("%c",str[i]);
}

int main()
{
 char str[100];
 printf("\nEnter a string to change in uppercase : ");
 fgets(str,100,stdin);
 Lower(str);
printf("\n");
 return 0;
}
