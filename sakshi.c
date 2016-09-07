#include<stdio.h>
int main()
{
int i,n,arr[100],j,d=0,temp=0;
printf("enter the limit");
}
for(i=0;i<n;i++)
{
    temp=arr[i];
    j=i-1;
    while(j>=0 && temp<arr[j])
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=temp;
}
d=arr[n-1]-arr[0];
printf("%d",d);
return 0;
}
