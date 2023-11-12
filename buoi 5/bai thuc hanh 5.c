#include<stdio.h>

int main()
{
	int day,month;
	scanf("%d %d",&day,&month);
	switch(month)
	{
		case 1:
			if(day>0&&day<20)
			{
				printf("Ma ket");
			}
			else if(day>=20 && day<32)
			{
				printf("Bao binh");
			}
			else
			{
				printf("Ngay khong hop le");
			}
			break;
		case 2:
			if(day>0&&day<19)
			{
				printf("Bao binh");
			}
			else if(day>=20 && day<30)
			{
				printf("Song ngu");
			}
			else
			{
				printf("Ngay khong hop le");
			}
			break;
		case 3:
			if(day>0&&day<21)
			{
				printf("Song ngu");
			}
			else if(day>=21 && day<32)
			{
				printf("Bach duong");
			}
			else
			{
				printf("Ngay khong hop le");
			}
			break;
		case 4:
			if(day>0&&day<21)
			{
				printf("Bach duong");
			}
			else if(day>=21 && day<31)
			{
				printf("Kim nguu");
			}
			else
			{
				printf("Ngay khong hop le");
			}
			break;
		case 5:
			if(day>0&&day<21)
			{
				printf("Kim nguu");
			}
			else if(day>=21 && day<32)
			{
				printf("Song tu");
			}
			else
			{
				printf("Ngay khong hop le");
			}
			break;
		case 6:
			if(day>0&&day<22)
			{
				printf("Song tu");
			}
			else if(day>=22 && day<31)
			{
				printf("Cu giai");
			}
			else
			{
				printf("Ngay khong hop le");
			}
			break;
		case 7:
			if(day>0&&day<23)
			{
				printf("Cu giai");
			}
			else if(day>=23 && day<32)
			{
				printf("Su tu");
			}
			else
			{
				printf("Ngay khong hop le");
			}
			break;
		case 8:
			if(day>0&&day<24)
			{
				printf("Su tu");
			}
			else if(day>=24 && day<32)
			{
				printf("Xu nu");
			}
			else
			{
				printf("Ngay khong hop le");
			}
			break;
		case 9:
			if(day>0&&day<24)
			{
				printf("Xu nu");
			}
			else if(day>=24 && day<31)
			{
				printf("Thien binh");
			}
			else
			{
				printf("Ngay khong hop le");
			}
			break;
		case 10:
			if(day>0&&day<24)
			{
				printf("Thien binh");
			}
			else if(day>=24 && day<32)
			{
				printf("Bo cap");
			}
			else
			{
				printf("Ngay khong hop le");
			}
			break;
		case 11:
			if(day>0&&day<23)
			{
				printf("Bo cap");
			}
			else if(day>=24 && day<31)
			{
				printf("Nhan ma");
			}
			else
			{
				printf("Ngay khong hop le");
			}
			break;
		case 12:
			if(day>0&&day<22)
			{
				printf("Nhan ma");
			}
			else if(day>=22 && day<32)
			{
				printf("Ma ket");
			}
			else
			{
				printf("Ngay khong hop le");
			}
			break;
		default:
			printf("Thang khong hop le");
	}
}
