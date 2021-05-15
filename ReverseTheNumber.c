//Reverse the number
#include<stdio.h>
void main()
{
int input=0,process=0,output=0;
printf("Enter the number : ");
scanf("%d",&input);
process=input;
while(process>0)
{
output=(output*10)+process%10;
process/=10;
}
printf("\n Reverse for %d is %d",input,output);
}
