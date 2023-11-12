#include<stdio.h>

int main()
{
	int revenue,profit;
	scanf("%d",&revenue);
	if(revenue<=100000000)
	{
		profit=0.05*revenue;
	}
	else if(revenue<=300000000)
	{
		profit=0.1*revenue;
	}
	else
	{
		profit=0.2*revenue;
	}
	printf("Hoa hong cua dai ly la: %d",profit);
	return 0;
}


