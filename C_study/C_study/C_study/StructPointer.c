#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
}Point;

void Add(Point *pt);

int main(void)
{
	Point pos1 = {1,2};
	Point pos2 = {100,200};
	Point *pptr = &pos1;

	Add(pptr);
	pptr->xpos +=4;
	pptr->ypos +=5;
	// (*pptr).xpos +=4;
	// (*pptr).ypos +=5;
	printf("[1] %d %d\n", pptr->xpos, pptr->ypos);

	pptr=&pos2;
	pptr->xpos +=1;
	pptr->ypos +=2;
	printf("[2] %d %d\n", (*pptr).xpos, (*pptr).ypos);

	return 0;
}
void Add(Point *pt)
{
	pt->xpos +=4;
	pt->ypos +=5;
	printf("[Add] %d %d\n", pt->xpos, pt->ypos);
}