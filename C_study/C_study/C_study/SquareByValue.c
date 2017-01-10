#include <stdio.h>

int SquareByValue(int n1);
void SquareByReference(int* n1);
int main(void)
{
	int num=2;
	int num1=2;
	printf("num: %d, num1: %d\n",num, num1);

	SquareByValue(num);
	SquareByReference(&num1);

	printf("num: %d, num1: %d\n",num, num1);
	return 0;
}
void SquareByReference(int* n1)
{
	int tot= *n1;
	*n1 = tot*tot;

	printf("Reference tot:%d\n", *n1);
}
int SquareByValue(int n1)
{
	int tot;
	tot = n1*n1;

	printf("Value tot:%d\n", tot);
	return tot;
}