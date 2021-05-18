//Sum of the digits
//@ChellaMuthu Palanichamy
#include<stdio.h>
void main()
{
printf("Enter the Number : ");
int input,sum=0;
scanf("%d",&input);
while(input>0)
{
    sum+=input%10;
    input/=10;
}
printf("Output is %d",sum);
}

