// enter 2 numbers and display a sum (2)- program no : 4

#include<stdio.h>
int main()
{
	int a,b;
	printf("enter 2 number :");
	scanf("%d %d",&a,&b);
	printf("\n %d is the sum of %d and %d ",a+b,a,b);
	printf("\n %d is the difference of %d and %d ",a-b,a,b);
	printf("\n %d is the product of %d and %d ",a*b,a,b);
	printf("\n %d is the quotient of %d and %d ",a/b,a,b);
	return 0;
}

// # - preprocessor directive.
// include - keyword.
// <stdio.h> - standard input output header file.
// .h header file - library file having basic instructions.
// printf - display 
// main - execution of program starts.application entry point.
