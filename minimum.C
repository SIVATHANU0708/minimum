#include<stdio.h>
int main()
{
int n,i,minimum,a[10];
printf("enter the no of terms:");
scanf("%d",&n);
printf("/n the numbers are:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
minimum=a[0];
for(i=0;i<n;i++)
{
if(minimum>a[i])
{
minimum=a[i];
}
}
printf("the minimum number is %d",minimum);
return 0;
}
