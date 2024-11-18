// enter 2 numbers and display the minimum- program no : 6

#include<stdio.h>
int main()
{
	int a,b,m;
	printf("enter 2 number :");
	scanf("%d %d",&a,&b);
	m=a<b?a:b;
	printf("\n %d is the minimum of %d and %d ",m,a,b);
	return 0;
}

// # - preprocessor directive.
// include - keyword.
// <stdio.h> - standard input output header file.
// .h header file - library file having basic instructions.
// printf - display 
// main - execution of program starts.application entry point.
