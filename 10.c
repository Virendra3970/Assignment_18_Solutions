//Write a function to find the repeated character in a given string
#include<stdio.h>
#include<string.h>
int Repeated_Char(char str[])
{
 int i,count=0,freq[1000000];
 for(i=0;str[i];i++)
    freq[str[i]]++; 
 for(i=0;i<100000;i++)
  if(freq[i]>=2)
    return i;

}

int main()
{
 char str[100];
 printf("\nEnter a string:");
 fgets(str,100,stdin);
 printf("\nRepeated characters are: ");
 if(Repeated_Char(str))
   printf("%c",str[]);
 printf("\n");
 return 0;
}
