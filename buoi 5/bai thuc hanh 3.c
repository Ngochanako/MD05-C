#include<stdio.h>

int main()
{
	int minutes,price;
	scanf("%d",&minutes);
	if(minutes<=50)
	{
		price=minutes*600+25000;
	}
	else if(minutes<=200)
	{
		price=(minutes-50)*400+600*50+25000;
	}
	else if(minutes<=400)
	{
		price=(minutes-200)*200+150*400+600*50+25000;
	}
	else
	{
	    price=(minutes-400)*100+200*200+150*400+600*50+25000;
	}
	printf("Gia dien la: %d",price);
}
