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

/*
// 284page : 문제 1
int main(void)
{
	int num=10;
	int* ptr1 = &num;
	int* ptr2 = ptr1; // *ptr1=num

	printf("*ptr1: %d *ptr2: %d\n", *ptr1, *ptr2);

	(*ptr1)++;
	(*ptr2)++;

	printf("%d\n", num);
	return 0;
}
*/

/*
// 284page : 문제 2
int main(void)
{
	return 0;
}
*/

/*
// 문제1.
int main(void)
{
	double height = 172.5;
	double* pheight = &height;

	*pheight+=2.5;
	printf("%0.2lf\n", *pheight);

	return 0;
}
*/

/*
// 문제 2 : 출력된 값 쓰기.
int main(void)
{
	int data[5] = {33,55,77,99,96};
	int i;
	
	for(i=0; i<5; i++)
	{
		printf("data[%d]:%d\n",i,*(data+i));
		printf("data[%d]:%d\n",i,data[i]);
	}
	return 0;
}
*/
/*
// 문제3
int main(void)
{
	int data[5] = {33,55,77,99,96};
	int num;
	for(num=0; num<5; num++)
	{
		data[num]+=4;
		printf("%d\n", data[num]);
	}
	return 0;
}
*/

/*
// 문제5
int main(void)
{
	double d = 3.59;
	// int *pi = &d; // 형의 불일치
	double *pi = &d;

	printf("%0.2lf\n", *pi);
	printf("%0.2lf\n", d);
	printf("pi안의 주소: %p\n", pi);
	printf("d의 주소: %p\n", &d);
	printf("pi주소: %p\n", &pi);

	return 0;
}
*/

/*
// 문제6
void increment10(int *num);
int main(void)
{
	int i = 30;
	printf("%d\n", i);
	increment10(i);

	return 0;
}

void increment10(int *num)
{
	int i=num;
	printf("%d\n", i);	
	i+=10;
	printf("%d\n", i);
}
*/

/*
// 문제7
void increment10array(int *num, int size);
int main(void)
{
	int arr[3] = {11,22,33};
	int arrsize= (sizeof(arr)/sizeof(int));
	
	printf("arrsize:%d\n", arrsize);
	increment10array(arr,arrsize);

	return 0;

}
void increment10array(int *num, int size)
{
	int line;
	int n_size = size;
	
	for(line=0; line<size; line++)
	{
		num[line]+=10;
		printf("%d\n", num[line]);
	}
}
*/

/*
// 문제8
void increment10array(int *num1, int num2);
int main(void)
{
	int arr[3] = {1,2,3};
	int size = (sizeof(arr)/sizeof(int));

	increment10array()
	return 0;
}
*/

/*
void ShowArayElem(int* param, int len);
void AddArayElem(int* param, int len, int add);

int main(void)
{
	int arr[3] = {1,2,3};
	int size = (sizeof(arr)/sizeof(int));

	AddArayElem(arr, size, 1);
	ShowArayElem(arr, size);

	AddArayElem(arr, size, 2);
	ShowArayElem(arr, size);

	AddArayElem(arr, size, 3);
	ShowArayElem(arr, size);
	
	return 0;
}
void ShowArayElem(int* param, int len)
{
	int i;
	for(i=0; i<len; i++)
	{
		printf("param[%d]:%d ", i, param[i]);
		//printf("*(param+%d):%d ", i, *(param+i));
	}
	printf("\n");

}
void AddArayElem(int* param, int len, int add)
{
	int i;
	for(i=0; i<len; i++)
	{
		param[i]+=add;
	}
	return 0;
}
*/
/*
void Swap3(int* num1, int* num2, int* num3);
int main(void)
{
	int n1=10;
	int n2=20;
	int n3=30;

	printf("Main n1: %d, n2: %d, n3: %d\n", n1, n2, n3);
	Swap3(&n1,&n2,&n3);
	printf("Main n1: %d, n2: %d, n3: %d\n", n1, n2, n3);
	return 0;
}

void Swap3(int* num1, int* num2, int* num3)
{
	int temp = *num1;
	printf("num1:%d\n", *num1);
	printf("temp:%d\n", temp);
	*num1 = *num2;
	*num2 = *num3;
	*num3 = temp;

	// printf("Swap3 num1: %d, num2: %d, num3: %d\n", *num1, *num2, *num3);
}
*/

