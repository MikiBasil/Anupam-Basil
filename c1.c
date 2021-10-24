#include<graphics.h>
#include<conio.h>
void main ()
{
    int gd=DETCET, gm;
    int i, x;
    initgraph(&gd, &gm, "");
    x=0;
    for(i=0; i<=15;i++)
    {
        setcolor(i);
        line(100,x,540,x);
        x=x+25;
    }
    getch();
    closegraph();

    
}