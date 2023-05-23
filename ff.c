#include <graphics.h>
void floodFill(int x, int y, int fillColor, int boundaryColor) {
    int currentColor;
    currentColor = getpixel(x, y);
    if (currentColor != boundaryColor && currentColor != fillColor) {
        putpixel(x, y, fillColor);
        floodFill(x + 1, y, fillColor, boundaryColor);
        floodFill(x - 1, y, fillColor, boundaryColor);
        floodFill(x, y + 1, fillColor, boundaryColor);
        floodFill(x, y - 1, fillColor, boundaryColor);
    }
}

void main() {
     int gd = DETECT, gm;
    initgraph(&gd, &gm, "c:\\Turboc3\\bgi");  
    rectangle(50, 50, 100, 100);  
    floodFill(55, 55, 6, 15);  
    delay(10000);  
    getch();  
    closegraph();
}
