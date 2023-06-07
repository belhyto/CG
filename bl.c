#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void bresenhamLine(int x1, int y1, int x2, int y2)
{
    int dx, dy, x, y, p;
    
    dx = x2 - x1;
    dy = y2 - y1;
    
    x = x1;
    y = y1;
    
    p = 2 * dy - dx;
    
    while (x < x2)
    {
        if (p >= 0)
        {
            putpixel(x, y, WHITE);
            y++;
            p = p + 2 * dy - 2 * dx;
        }
        else
        {
            putpixel(x, y, WHITE);
            p = p + 2 * dy;
        }
        
        x++;
    }
}

int main()
{
    int gd, gm;
    
    gd = DETECT;
    
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    
    // Call bresenhamLine function to draw a line
    bresenhamLine(100, 100, 300, 200);
    
    getch();
    closegraph();
    
    return 0;
}
