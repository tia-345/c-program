#include<stdio.h>
void disp(int n)
{
	if(n>=1)
	{
		printf("%d \t",n);
		disp(n-1);
	}
}
int main()
{
	int n;
	printf("value of n");
	scanf("%d",&n);
}


