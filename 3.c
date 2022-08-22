//Write a C function to compare to entered two strings
#include<stdio.h>
#include<string.h>
void Compare(char s[], char s1[])
{
  int i,j,flag=0,n,i1,i2;
  printf("\n1. Comparision between two strings w.r.t. no. of letters: \n");
  printf("\n2. Comparision between two strings w.r.t. alphabates:\n ");
  printf("\nPlease Enter your choice: \n");
  scanf("%d",&n);
  switch(n)
 {
  case 2:
     for(i=0,j=0;s[i]&&s1[j];i++,j++)
     {
      if(s[i]!=s1[j])
      {
       flag=1;
       break;
      }
     }
     if(flag==0) 
       printf("\nEntered strings are same w.r.t. alphabates.\n");
     else
       printf("\nEntered strings are not same w.r.t. alphabates.\n");
     break;
  case 1:
      for(i=0,j=0;s[i]&&s1[j];i++,j++)
     {
       i1=i; i2=j;
     }
     
     if(i1==i2) 
       printf("\nEntered strings are same w.r.t. no of letters.\n");
     else
       printf("\nEntered strings are not same w.r.t. no of letters.\n");
     break;
     default:
       printf("\nInvalid Choice :: Please enter a valid choice.\n");
   }
}

int main()
{
 char s[100],s1[100];
 int i;
 printf("\nEnter the first string: ");
 fgets(s,100,stdin);
 printf("\nEnter the second string: ");
 fgets(s1,100,stdin);
 Compare(s,s1);
 return 0;
}
