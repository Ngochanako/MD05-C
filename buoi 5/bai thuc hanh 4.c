#include<stdio.h>

int main()
{
	int revenue,income_tax,salary;
	scanf("%d",&revenue);
	if(salary<=5000000)
	{
		income_tax=salary*0.05;
	}
	else if(salary<=10000000)
	{
		income_tax=5000000*0.05+(salary-5000000)*0.1;
	}
	else if(salary<=18000000)
	{
		income_tax=5000000*0.05+5000000*0.1+(salary-10000000)*0.15;
	}
	else if(salary<=32000000)
	{
		income_tax=5000000*0.05+5000000*0.1+8000000*0.15+(salary-18000000)*0.2;
    }  
    else if(salary<=52000000)
	{
	    income_tax=5000000*0.05+5000000*0.1+8000000*0.15+5000000*0.2+(salary-32000000)*0.25;
	}
	else if(salary<=80000000)
	{
	    income_tax=5000000*0.05+5000000*0.1+8000000*0.15+5000000*0.2+20000000*0.25+(salary-52000000)*0.3;
	}
	else
	{
	    income_tax=5000000*0.05+5000000*0.1+8000000*0.15+5000000*0.2+20000000*0.25+28000000*0.3+(salary-80000000)*0.35;
	}
	printf("Thue suat la: %d, Luong thuc te: %d",income_tax,revenue-income_tax);
}
