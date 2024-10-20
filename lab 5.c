#include<stdio.h>
void main()
{
  int n,sum=0,d;
  printf("Enter any positive integer:");
  scanf("%d",&n);
  while(n>0)
  {
  d=n%10;sum=sum+d;
  n=n/10;
  }
  printf("Sum of individual digits is:%d",sum);
  return 0;
  }
