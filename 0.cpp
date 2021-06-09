#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	double a,b,c,x,y,d,canBac,z;
	printf("Nhap vao lan luot a,b,c:");
	scanf("%lf%lf%lf", &a, &b, &c);
	d = b*b - 4*a*c;
	canBac = sqrt(b*b - 4*a*c);
	x = (-b + canBac)/(2*a);
	y = (-b - canBac)/(2*a);
	z = -b/2*a;
	if(d>0)
	{
		printf("Phuong trinh co 2 nghiem phan biet: ");
		printf("\nx1= %0.lf", x);
		printf("\nx2= %0.lf", y);
	}
     if(d==0)
	{
		printf("Phuong trinh co nghiem kep: ");
		printf("\nx= %0.lf", z);
		
	}
	if(d<0)

	
	{
		printf("Phuong trinh vo nghiem");
	}

	return 0;
	
	
	
}

