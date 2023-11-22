#include<stdio.h>
#include<conio.h>
void main(){
      int a;
	clrscr();

	printf("Enter any number:-");
	scanf("%d",&a);
	(a%2==0)?printf("The number is Even...")
		 :printf("The number is odd...");

	getch();
}