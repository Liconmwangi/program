#include<stdio.h>
#include<conio.h>
#include<math.h>
int sum(int x,int y, int z);
int multiplacation(int a,int b);


int main()
{
int x,y,z,a,b,c;
printf("Enter 3 values:");
scanf("%d%d%d",&a,&b,&c);
x=sum(a,b,c);
z=sum(100,200,300);
y=multiplacation(a,c);

printf("The sum is &d \n",x);
printf("The 2nd  sum is %d\n",x);
printf("The multi is %d \n",y);
	
}
int sum ( int x,int y,int z){
	int result;
	result=x+y+z;
	return result;
}
int multilacation( int a,int b){
	int result;
	result=a*b;
	return result;
}
