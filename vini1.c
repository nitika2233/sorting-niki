#include<stdio.h>
#include<stdlib.h>
int main()
{
   int i,n,a[100],sum=0,s=0,num;
   printf("enter the limit");
   scanf("%d",&n);
   printf("enter the limits");
   for(i=0;i<n-1;i++)
   {
      scanf("%d",&a[i]);
   }
    for(i=0;i<n-1;i++)
    {
    sum = sum + a[i];
    }
    s=(n*(n+1))/2;
    num=s-sum;
    printf("%d",num);
           return 0;
}
