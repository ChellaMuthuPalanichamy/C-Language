#include<stdio.h>
void main()
{
int first=0,second=1,third=0,count=0;
printf("Enter the Maximum Number to Print fibonacci series : ");
scanf("%d",&count);
while(count>=first)
{
printf("%d ",first);
third=first+second;
first=second;
second=third;
}
}
