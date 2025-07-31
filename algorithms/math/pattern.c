#include<stdio.h>
void main()
{
int i,j,n;
printf("Enter n value\n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
for(j=i-1;j<=n;j++)
{
printf("%d\t",j);
}
}
}
