#include<stdio.h>
int main()
{
	double income, tf, ti, incomeTax; 
	int n;
	const int pa=9000000;
	const int pd=3600000;
	printf("Your income of this year: ");
	scanf("%lf", &income);
	printf("Number of dependent: ");
	scanf("%d", &n);
	tf = 12*(pa + n*pd);
	if(ti<=0){
		incomeTax=0;
	}
	else{
		ti = income - tf;
	}
	printf("Tax-free income: %.0lf\n", tf);
	printf("Taxable income: %.0lf\n", ti);	
	if(ti<=5000000){
		incomeTax = ti * 0.05;
	}
    if(ti<=10000000){
    	incomeTax = (ti * 0.1) - (0.25 * 1000000);
	}
	if(ti<=18000000){
		incomeTax = (ti * 0.15) - (0.75 * 1000000);
	}
	if(ti>18000000){
		incomeTax = (ti * 0.2) - (1.65 * 1000000);
		
	}
	
	printf("Income tax: %.0lf", incomeTax);
	return 0;
}
