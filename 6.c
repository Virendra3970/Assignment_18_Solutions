// Write a function in C to check a string whether it is alphanumeric or not
#include<stdio.h>
#include<string.h>
int Alpha_Numeric(char str[])
{
 int i,j, flag=0,f1=0;
 for(i=0;str[i];i++)
 {
  if(str[i]>='1'&& str[i]<='9')
   {
      flag=1;
      break;
   }
  }
 for(i=0;str[i];i++)
 {
  if(str[i]>=97 && str[i]<=123 || str[i]>=65 && str[i]<=91)
  {
   f1=1; break;
  }
 }
 if(flag==1 && f1==1)
   return 0;
 else
   return 1;
 
}

int main()
{
 char str[100];
 printf("\nEnter a string: ");
 fgets(str,100,stdin);
 int i=Alpha_Numeric(str);
 switch(i)
 {
  case 0:
    printf("\nYes, Entered string is alphanumeric.\n");
    break;
  case 1:
    printf("\nNo, Entered string is not alphanumeric.\n");
    break;
 }
 return 0;
}

