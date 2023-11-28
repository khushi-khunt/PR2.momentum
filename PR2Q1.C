#include<stdio.h>
#include<conio.h>
void main(){
      int num;
	clrscr();

	printf("Enter any number:-");
	scanf("%d",&num);
	(num%2==0)?printf("The number is Even...")
		 :printf("The number is odd...");

	getch();
}