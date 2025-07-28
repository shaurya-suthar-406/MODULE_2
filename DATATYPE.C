#include<stdio.h>
#include<conio.h>
#define PI 3.14159f
#define P printf

void main()
{

	int age=30;
	char initial='J';
	float temp=25.5f;
	int score;

	clrscr();

	score=100;

	const int max=3;

	P("\n---Variables and Constants---");
	P("\nMy Age is : %d",age);
	P("\nMy initial is : %c",initial);
	P("\nThe Current Temperature is : %.1f degrees Celcius",temp);
	P("\nYour Score is : %d points",score);
	P("\nThe Value of PI (from #define) is : %.5f",PI);
	P("\nMax Attempts Allowed : %d",max);

	P("\n\n---Simple Operation---\n");
	P("\nAge + Max Attemps = %d",age+max);

	getch();

}