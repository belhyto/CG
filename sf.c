#include <stdio.h>
#include<dos.h>
#include<conio.h>
#include <graphics.h>
void scanLineFill(int x, int y, int fillColor, int boundaryColor) {
    int currentColor;
    currentColor = getpixel(x, y);
    if (currentColor != boundaryColor && currentColor != fillColor) {
        // Set the current pixel to the fill color
        putpixel(x, y, fillColor);
       
        // Recursive calls for adjacent pixels
        scanLineFill(x + 1, y, fillColor, boundaryColor);
        scanLineFill(x - 1, y, fillColor, boundaryColor);
        scanLineFill(x, y + 1, fillColor, boundaryColor);
        scanLineFill(x, y - 1, fillColor, boundaryColor);
    }
}

void main() {
     int gd = DETECT, gm;
    initgraph(&gd, &gm, "c:\\Turboc3\\bgi");  
    rectangle(50, 50, 100, 100);  
    scanLineFill  (55, 55, 4, 15);  
    delay(10000);  
    getch();  
    closegraph();
}
