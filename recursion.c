#include<stdio.h>
int main()
{
	int a[10][10],r,c,j,i,sum;
	printf("enter row and column ");
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter a[%d][%d] = ",j,i);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("%d\t",a[i][j]);	
		}
		printf("\n");
	}
	sum=0;
	for(i=0;i<r;i++)
	{
	    for(j=0;j<c;j++)
	    if(i==j)
	    {
	        sum = sum+a[i][j];
        }
    }
    	printf("sum of diagonal =%d",sum);
}


