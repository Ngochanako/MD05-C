#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c;
	float delta;
	do
	{
		printf("Nhap a,b,c:\n ");
	    scanf("%d %d %d",&a,&b,&c);
	    delta=pow(b,2)-a*c*4;
    }
	while (a==0);
	if(delta<0)
	{
		printf("Phuong trinh vo nghiem");
	}
	else if(delta==0)
	{
		printf("Phuong trinh co nghiem kep x1=x2= %.2f",(float)-b/(2*a));
	}
	else 
	{
		printf("Phuong trinh co 2 nghiem phan biet x1= %.2f và x2= %.2f",(float)(-b+sqrt(delta))/(2*a),(float)(-b-sqrt(delta))/(2*a));
	}
}
