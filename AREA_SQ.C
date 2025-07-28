//Program to Find Area of Square, Cube and Triangle
#include<stdio.h>
#include<conio.h>

void main()
{
	float S_side;
	float C_side;
	float T_base;
	float T_height;

	clrscr();

	printf("\nEnter the Side of Square : ");
	scanf("%f",&S_side);

	printf("\nEnter the Side of Cube : ");
	scanf("%f",&C_side);

	printf("\nEnter the Base of Triangle : ");
	scanf("%f",&T_base);

	printf("\nEnter the Height of Triangle : ");
	scanf("%f",&T_height);

	float SArea=S_side*S_side;
	printf("\nThe Area of A Square with Side %.3f is %.3f",S_side,SArea);

	float CArea=6*C_side*C_side;
	printf("\nThe Area of A Cube with Side %.3f is %.3f",C_side,CArea);

	float TArea=0.5*T_base*T_height;
	printf("\nThe Area of A Triangle with Base %.3f and Height %.3f is %.3f",T_base,T_height,TArea);

	getch();

}