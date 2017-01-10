// 구조체
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

	printf("좌표 입력:");
	scanf("%d %d", &(pos.xpos), &(pos.ypos));

	printf("정보 입력:");
	scanf("%s %s %d", per.name, per.phoneNum, &(per.age));

	printf("%d %d\n", pos.xpos, pos.ypos);
	printf("%s %s %d\n", per.name, per.phoneNum, per.age);
	return 0;
}