//Write a function in C to check a string whether it is a palibdrome or not
#include<stdio.h>
#include<string.h>
int Palindrome(char str[])
{
 int i,j,index,flag=0;
 for(i=0;str[i+1];i++)
   index=i;
 for(i=0,j=index; str[i] && j>=0;i++,j--)
 {
  if(str[i]!=str[j])
  {
   flag=1;
   break;  
  }
 }
 if(flag==1)
   return 1;
 else
   return 0;
}

int main()
{
 char str[100];
 printf("\nEnter a string: ");
 fgets(str,100,stdin);
 int i=Palindrome(str);
 switch(i)
 {
  case 0:
   printf("\nYes, Entered string is palindrome.\n ");
   break;
  case 1:
    printf("\nNo, Entered string is not a palindrome\n");
    break;
 }
 return 0;
}

