#include <stdio.h>
#include <stdlib.h>
// ����ü
typedef struct person
{
	char name[20];
	char phoneNum[20];
	int age;
}Person;

Person Input();
void Display(Person per);

int main(void)
{
	Person per1= Input();
	Person per2= Input();

	// Input(&per1);
	// Input(&per2);

	Display(per1);
	Display(per2);
	return 0;
}

Person Input()
{
	Person per;
	printf("�̸� �Է�: ");
	scanf("%s", per.name);
	printf("��ȣ �Է�: ");
	scanf("%s", per.phoneNum);
	printf("���� �Է�: ");
	scanf("%d", &(per.age));

	return per;
}

void Display(Person per)
{
	printf("%s\n", per.name);
	printf("%s\n", per.phoneNum);
	printf("%d\n", per.age);
}