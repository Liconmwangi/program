#include<stdio.h>
#include <conio.h>
#include<string.h>

	struct book
	{
	char title[30];
	char author[30];
	int publication_year;
	char ISBN[13];
	float price;

}
book,book1;
int main()
{
	printf("Enter the title of the book\n");
	scanf("%s",book1.title);
	printf("Enter the book author\n");
	scanf("%s",book1.author);
	printf("Enter the book publication year\n");
	scanf("%d",book1.publication_year);
	printf("Enter the price of the book\n");
	scanf("%d",book1.price);
	printf("Ente the ISBN of the book\n");
	scanf("%s",book1.ISBN);
/*strcpy(book1.title,"Introduction to C programming");
strcpy(book1.author,"John Smith");
book1.publication_year=2005;
strcpy(book1.ISBN,"9780131103627");	
book1.price=2000;
	
	printf("The book tittle=%s\n",book1.title);
	printf("The book author is=%s\n",book1.author);
	printf("The publication year is =%d\n",book1.publication_year);
	printf("The ISBN of the book is=%s\n",book1.ISBN);
	printf("The price of the book is=%f\n",book1.price);*/
	
	
getch();	
}
