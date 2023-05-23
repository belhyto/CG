#include <graphics.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 void main()
 {
 int x1,y1,x2,y2,i,step,xn,yn,dx,dy;
 int gdriver=DETECT,gmode;
  clrscr();
  initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
  printf("enter the value of x1 and y1 : ");
  scanf("%d%d",&x1,&y1);
  printf("enter the value of x2 and y2 : ");
  scanf("%d%d",&x2,&y2);
  dx=abs(x2-x1);
  dy=abs(y2-y1);
  if(dx>=dy)
  {
  step=dx;
  }
  else
  {
  step=dy;
  } xn=dx/step;
  yn=dy/step;
  for(i=1;i<=step;i++)
  {
  putpixel(x1,y1,BLUE);
  delay(100);
  x1=x1+xn;
  y1=y1+yn;
  }
  getch();
  closegraph();

