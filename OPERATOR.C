#include<stdio.h>
#include<conio.h>

void main()
{
	int n1,n2;
	int result_arithmetic;
	int result_relational;
	int result_logical;

	printf("\nEnter the First Number : ");
	scanf("%d",&n1);
	printf("\nEnter the Second Number : ");
	scanf("%d",&n2);

	printf("---Arithmetic Operators---");

	result_arithmetic=n1+n2;
	printf("\n%d + %d = %d",n1,n2,result_arithmetic);

	result_arithmetic=n1-n2;
	printf("\n%d - %d = %d",n1,n2,result_arithmetic);

	result_arithmetic=n1*n2;
	printf("\n%d * %d = %d",n1,n2,result_arithmetic);

	//We can also do division(/) OR Modular Division(%)

	printf("\n\n---Relational Operators---\n");

	result_relational=(n1==n2);
	printf("%d == %d : %s\n",n1,n2,result_relational?"True":"False");

	result_relational=(n1!=n2);
	printf("%d != %d : %s\n",n1,n2,result_relational?"True":"False");

	result_relational=(n1>n2);
	printf("%d > %d : %s\n",n1,n2,result_relational?"True":"False");

	result_relational=(n1<n2);
	printf("%d < %d : %s\n",n1,n2,result_relational?"True":"False");

	result_relational=(n1>=n2);
	printf("%d >= %d : %s\n",n1,n2,result_relational?"True":"False");

	result_relational=(n1<=n2);
	printf("%d <= %d : %s\n",n1,n2,result_relational?"True":"False");

	printf("\n\n---Logical Operators (Assuming non-zero means True)---\n");

	result_logical=(n1&&n2);
	printf("\n(%d && %d) : %s",n1,n2,result_logical?"True":"False");

	result_logical=(n1||n2);
	printf("\n(%d || %d) : %s",n1,n2,result_logical?"True":"False");

	result_logical=(!n1);
	printf("\n!%d : %s",n1,result_logical?"True":"False");

	result_logical=(!n2);
	printf("\n!%d : %s",n2,result_logical?"True":"False");

	getch();

}