#include<stdio.h>
int main()
{
int i,n,arr[100],j,max=0,num1,num2,d=0;
printf("enter the limit");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]<arr[j])
{
d=arr[j]-arr[i];
}
if(d>max)
{
max=d;

}
}
}
printf("%d  ",max);
}
