//Swaping two numbers without using third variable.
//@ChellaMuthu  palanichamy
#include<stdio.h>
void main()
{
int ip1;
int ip2;
printf("Enter the value of first input : ");
scanf("%d",&ip1);//2
printf("Enter the vallue of second input : ");
scanf("%d",&ip2);//3
ip1+=ip2;//2+3=5
ip2=ip1-ip2;//5-3=2
ip1-=ip2;//5-2=3
printf("After Swaped");
printf("\nfirst input is %d",ip1);
printf("\nsecond input is %d",ip2);
}
