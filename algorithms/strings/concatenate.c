#include<stdio.h>
#include<string.h>
void main()
{
char str1[50],str2[50],str3[30];
int k,i;
printf("Enter 2 strings\n");
scanf("%s%s",str1,str2);
k=0;
for(i=0;str1[i]!='\0';i++)
{
str3[k]=str1[i];
k++;
}
for(i=0;str2[i]!='\0';i++)
{
str3[k]=str2[i];
k++;
}
str3[k]='\0';
printf("The concatenated string is %s\n",str3);
}
