// 1. ������ ������ ���� �־� *�������� ��ġ�� ����� ����.
// �Ʒ� ������ ���� ������ ��� ������ �ǹ̸� ������.
// int* ptr;
// int * ptr;
// int *ptr; 

#include <stdio.h>
/*
int main(void)
{
	int num1 = 5;
	// 1. ������ ���� ���� �� �ʱ�ȭ.
	int * pnum = &num1; 

	// 2. ������ ���� ���� �� �ʱ�ȭ.
	// int * pnum;
	// pnum = &num1;

	// ���� ����
	*pnum = 20;	
	// num1 �޸� ���
	printf("0x%p\n", &num1);
	// pnum ���(pnum == &num1)
	printf("0x%p\n", pnum);
	// pnum�� �ּ� ���(������ �ּ� ���)
	printf("0x%p\n", &pnum);
	// pnum�� �� ���(pnum�ȿ��� 20�� ��� ����)
	printf("%d\n", *pnum);
	// num1�� �� ���(num1�� 20���� ����Ǿ� ����)
	printf("%d\n", num1);

	return 0;
}
*/

/*
// num1 ���� 30 �����ǰ�, num���� 30 ���ҵǵ���
int main(void)
{
	int num1=100;
	int num2=100;
	int* pnum = &num1;

	printf("�� ���� ��- pnum: %d, num1: %d, num2: %d\n", *pnum, num1, num2);
	
	printf("&pnum: 0x%p\n", &pnum);
	printf("pnum: 0x%p\n", pnum);
	printf("num1: 0x%p\n", &num1);
	printf("num2: 0x%p\n", &num2);
	printf("*pnum: %d, num1: %d, num2: %d\n", *pnum, num1, num2);
	*pnum+=30;

	pnum =&num2;
	*pnum-=30;

	printf("�� ���� ��- pnum: %d, num1: %d, num2: %d\n", *pnum, num1, num2);
	printf("&pnum: 0x%p\n", &pnum);
	printf("pnum: 0x%p\n", pnum);
	printf("num1: 0x%p\n", &num1);
	printf("num2: 0x%p\n", &num2);
	printf("*pnum: %d, num1: %d, num2: %d\n", *pnum, num1, num2);
	return 0;
}
*/
/*
// 3. ���� ����ġ.
int main(void)
{
	double num=3.14;
	int* pnum = &num; // ���� ����ġ

	printf("%d", *pnum); // �ǹ� ���� ���

	return 0;
}
*/

int main(void)
{

}