#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<stdlib.h>
void main()
{
int gdriver = DETECT,gmode;
int x1,x2,y1,y2,dx,dy,pc,pn,xk,yk;
float m;
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
printf("Enter starting coordinates x1 and y1 : ");
scanf("%d%d",&x1,&y1);
printf("Enter the end coordinates x2 and y2 : ");
scanf("%d%d",&x2,&y2);
xk=x1;
yk=y1;
dx=x2-x1;
dy=y2-y1;
m=(dy/dx);
if(m<1)
{
pc=(2*dy)-dx;
while(xk<=x2){
putpixel(xk,yk,BLUE);
if(pc<0)
{
xk+=1;
pn=pc+(2*dy);
}
else
{
xk+=1;
yk+=1;
pn=pc+(2*dy)-(2*dx);
}
pc=pn;
}
}
else
{
pc=(2*dx)-dy;
while(yk<=y2)
{
putpixel(xk,yk,BLUE);
if(pc<0)
{
yk+=1;
pn=pc+(2*dx);
}
else
{
xk+=1;
yk+=1;
pn=pc+(2*dx)-(2*dy);
}
pc=pn;
}
}
getch();
closegraph();
}
