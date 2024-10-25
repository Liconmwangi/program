#include<stdio.h>include
#include<conio.h>
# include<string.h>
int main()
{
	int id,units;
	float rate,amts,gast,fdt;
	char name[35];
	printf("Enter yout Id No\n",id);
	scanf("%d",id);
	printf("Enter your name %s:\n",name);
	scanf("%d",&id);
	printf("Enter units consumed\n%d",&units);
	scanf("%d",&units);
	if(units<199)
		rate=1.50;
	else if(units<=400 &&units>=200)
	rate=1.50;
if(units<=600&&units>=400)
rate=1.80;
if(units>600);
	rate=2.00;

gast=rate*units;
if(gast>400)
	fdt=gast*15/100;
amts=gast+fdt;
printf("Your electricity bill is:\n");
printf("Costomeer name:%d\n",name);
printf("units consumed:%d\n"),units;
printf("amount charges:%f \n",rate,gast);
printf("Surcharges amount:%f\n",fdt);
printf("Net amount %f\n",amts);
getch();
 }
