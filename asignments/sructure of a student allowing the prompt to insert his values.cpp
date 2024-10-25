 #include<stdio.h>
 #include<conio.h>
 #include<string.h>
 
 	struct person
	 {
 	int phone;
 	char email[20];
 	char name[30];
 	char reg_no[20];
 	float height;
 	int marks;
	 }
	 student1,student2;
	 
	 
	 int main()
	 {
	 
printf("Enter your name:");
scanf("%s",& student1.name);
student1.height=5.7;
printf("ente the email or usename\n",student1.email);
scanf("%s",student1.email);
strcpy(student1.reg_no,"ct101/g/24927/24");
strcpy(student1.email,"james@gmail.com");
student1.phone=123456;

	
	
	getch();
	 }	 

	 
 	
	 
	 
 	
 
