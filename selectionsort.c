#include<stdio.h>
void main()
{
int i,j,n,arr[100],temp;
printf("enter the limit");
scanf("%d",&n);
printf("enter the element");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
   for(j=i+1;j<n;i++)
   {
        if(arr[i]>arr[j])
        {
           temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
       }
   }
}
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
}
