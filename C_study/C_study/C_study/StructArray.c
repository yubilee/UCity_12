#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
}Point;

void Display(Point* arr);

int main(void)
{
	Point arr[3];
	int i;

	for(i=0; i<3; i++)
	{
		printf("Á¡ÀÇ ÁÂÇ¥ ÀÔ·Â: ");
		scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
	}

	Display(&arr);

	return 0;
}
void Display(Point* arr)
{
	int i;
	for(i=0; i<3; i++)
	{
		printf("Á¡ÀÇ ÁÂÇ¥ Ãâ·Â: ");
		printf("[%p %p]\n", &arr[i].xpos, &arr[i].ypos);
		printf("[%d %d]\n", arr[i].xpos, arr[i].ypos);
	}
}