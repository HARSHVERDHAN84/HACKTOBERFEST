#include<stdio.h>
#include"mystring.h"
int main()
{
   char str1[100],str2[20];
   printf("enter first string:");
   gets(str1);
   printf("enter second string:");
   gets(str2);
  concate(str1,str2);
}
