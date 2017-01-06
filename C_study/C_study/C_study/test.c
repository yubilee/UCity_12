// 1. 포인터 변수의 선언에 있어 *연산자의 위치는 상관이 없다.
// 아래 포인터 변수 선언은 모두 동일한 의미를 가진다.
// int* ptr;
// int * ptr;
// int *ptr; 

#include <stdio.h>
/*
int main(void)
{
	int num1 = 5;
	// 1. 포인터 변수 선언 및 초기화.
	int * pnum = &num1; 

	// 2. 포인터 변수 선언 후 초기화.
	// int * pnum;
	// pnum = &num1;

	// 직접 접근
	*pnum = 20;	
	// num1 메모리 출력
	printf("0x%p\n", &num1);
	// pnum 출력(pnum == &num1)
	printf("0x%p\n", pnum);
	// pnum의 주소 출력(본인의 주소 출력)
	printf("0x%p\n", &pnum);
	// pnum의 값 출력(pnum안에는 20이 들어 있음)
	printf("%d\n", *pnum);
	// num1의 값 출력(num1은 20으로 변경되어 있음)
	printf("%d\n", num1);

	return 0;
}
*/

/*
// num1 값은 30 증가되고, num값은 30 감소되도록
int main(void)
{
	int num1=100;
	int num2=100;
	int* pnum = &num1;

	printf("값 변경 전- pnum: %d, num1: %d, num2: %d\n", *pnum, num1, num2);
	
	printf("&pnum: 0x%p\n", &pnum);
	printf("pnum: 0x%p\n", pnum);
	printf("num1: 0x%p\n", &num1);
	printf("num2: 0x%p\n", &num2);
	printf("*pnum: %d, num1: %d, num2: %d\n", *pnum, num1, num2);
	*pnum+=30;

	pnum =&num2;
	*pnum-=30;

	printf("값 변경 후- pnum: %d, num1: %d, num2: %d\n", *pnum, num1, num2);
	printf("&pnum: 0x%p\n", &pnum);
	printf("pnum: 0x%p\n", pnum);
	printf("num1: 0x%p\n", &num1);
	printf("num2: 0x%p\n", &num2);
	printf("*pnum: %d, num1: %d, num2: %d\n", *pnum, num1, num2);
	return 0;
}
*/
/*
// 3. 형의 불일치.
int main(void)
{
	double num=3.14;
	int* pnum = &num; // 형의 불일치

	printf("%d", *pnum); // 의미 없는 출력

	return 0;
}
*/

int main(void)
{

}