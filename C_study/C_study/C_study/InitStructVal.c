// ����ü
#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
}Point;

typedef struct person
{
	char name[20];
	char phoneNum[20];
	int age;
}Person;

int main(void)
{
	Point pos = {10,29};
	Person per = {"YUBI", "011-1111-1111", 21};

	printf("��ǥ �Է�:");
	scanf("%d %d", &(pos.xpos), &(pos.ypos));

	printf("���� �Է�:");
	scanf("%s %s %d", per.name, per.phoneNum, &(per.age));

	printf("%d %d\n", pos.xpos, pos.ypos);
	printf("%s %s %d\n", per.name, per.phoneNum, per.age);
	return 0;
}