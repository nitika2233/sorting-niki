
#include<stdio.h>
int main()
{
int i,j,n,arr[100],temp=0;
printf("enter the limit");
scanf("%d",&n);
printf("enter the limit");
for(i=0;i<n;i++)
{
   scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
 temp =arr[i];
 j=i-1;
 while(j>=0 && temp<arr[j])
 {
arr[j+1]=arr[j];
 j--;
 }
 arr[j+1]=temp;
}
 for(i=0;i<n;i++)
 {
     printf("%d",arr[i]);
}
return 0;
}
