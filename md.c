#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
int xc,yc,r,p,x,y;
int gd,gm;
detectgraph(&gd,&gm);
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
clrscr();
printf("\nEnter the co-ordinates of center : ");
scanf("%d %d",&xc,&yc);
printf("\nEnter the radius: ");
scanf("%d",&r);


x = 0;
y = r;
p=(1-r);


for(x=0;x<=y;x++)
{
if(p < 0)
{
x=x+1;
y=y;
p=p+2*(x+1)+1;
}
else
{
x=x+1;
y=y-1;
p = p -2*(y+1)+2*(x+1)+1;
}


putpixel(xc+x,yc-y,WHITE);
putpixel(xc-x,yc-y,WHITE);
putpixel(xc+x,yc+y,WHITE);
putpixel(xc-x,yc+y,WHITE);
putpixel(xc+y,yc-x,WHITE);
putpixel(xc-y,yc-x,WHITE);
putpixel(xc+y,yc+x,WHITE);
putpixel(xc-y,yc+x,WHITE);
}


getch();
closegraph();
}



