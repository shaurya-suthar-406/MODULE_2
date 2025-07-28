//Program to Find Area and Circumference of a Circle

#include<stdio.h>
#include<conio.h>
#define PI 3.14

void main()
{
	float r;
	float circumference,area;

	clrscr();

	printf("\nEnter the Radius of the Circle : ");
	scanf("%f",&r);

	circumference=2*PI*r;
	printf("\nThe Circumference of a Circle with Radius %f is %.2f",r,circumference);

	area=PI*r*r;
	printf("\nThe Area of a Circle with Radius %f is %.2f",r,area);

	getch();
}