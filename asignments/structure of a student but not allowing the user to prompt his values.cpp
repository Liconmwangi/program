 #include<stdio.h>
 #include<conio.h>
 #include<string.h>
 
 	struct person
	 {
 	int phone;
 	char email[60];
 	char name[30];
 	char reg_no[20];
 	float height;
 	int marks;
	 }
	 student1,student2;
	 
	 
	 int main()
	 {
	 
student1.height=5.7;
strcpy(student1.reg_no,"ct101/g/24927/24");
strcpy(student1.email,"lincoln mwangi56@gmail.com");
student1.phone=123456;

	
	
	printf("Height :%f\n",student1.height);
	printf("Reg Number :%s\n",student1.reg_no);
	printf("Email :%s\n",student1.email);
	printf("Phone number :%d\n",student1.phone);
	getch();
	 }	 

	 
 	
	 
	 
 	
 
