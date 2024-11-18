/*Problem 1.1
Ramesh’s basic salary is input through the keyboard. His dearness
allowance is 40% of basic salary, and house rent allowance is 20% of
basic salary. Write a program to calculate his gross salary*/

#include<stdio.h>
int main()
{
	int b,d,h,g;
	printf("enter basic salary : ");
	scanf("%d",&b);
	d=0.4*b;
	h=0.2*b;
	g=b+d+h;
	printf("gross salary :%d ",g);
return 0;
}

