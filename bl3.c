
#include <stdio.h>
#include<conio.h>
#include<stdlib.h>s
#include<graphics.h>

void main()
{
    int x1,y1,x2,y2,pc,pn,xk,yk,dx,dy;
    int gd,gm;
    gd=DETECT;
    initgraph(gd,gm,"");
    
    printf(" 1:");
    scanf("%d %d",&x1,&y1);
    printf(" 2:");
    scanf("%d %d",&x1,&y1);
    xk=x1;
    yk=y1;
    dx=x2-x1;
    dy=y2-y1;
    pc=(2*dy)-dx;
    while(xk<=x2)
    {
        putpixel(xk,yk,BLUE);
    if(pc<0)
    {
        pn=pc+(2*dy);
        xk++;
    }
    else
    {
        xk++;
        yk++;
        pn=pc+(2*dy)-(2*dx);
    }
    pc=pn;
}
getch();
closegraph();
}
