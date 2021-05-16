#include<stdio.h>
void main()
{
int scan=0,i,output=1;
printf("Enter the number : ");
scanf("%d",&scan);
for(i=1;i<=scan;i++)
{
output*=i;
}
printf("output is %d",output);
}

