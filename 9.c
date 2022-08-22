// // Write a function to reverse a string word-wise.
#include<stdio.h>
#include<string.h>
void swap(char a[],int i, int j)
{
 char temp;
 while(i<=j)
 {
  temp=a[i];
  a[i]=a[j];
  a[j]=temp;
  i++; j--;
 }
}
int main()
{
 char str[100];
 int i=0,start=0,end=0,flag=0,j;
 printf("\nEnter a string: ");
 fgets(str,100,stdin);
 while(str[i]!='\0')
 {
  while(str[i]!=' ')
  {
   if(str[i]=='\0')
   {
    flag=1;
    break;
   }
   end++;
   i++;
  }
  swap(str,start,end-1);
  if(flag==1)
    break;
  start=end++;
  i++;
 }
 swap(str,0,i-1);
 printf("%s",str);
 printf("\n");
 return 0;
}
