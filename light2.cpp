#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>

int main()
{
    int gd=DETECT, gm=DETECT, midx, midy;
    
    initgraph(&gd, &gm, (char*)"");
    
    midx=getmaxx()/2;
    midy=getmaxy()/2;
    
    setcolor(RED);
    settextstyle(SCRIPT_FONT,HORIZ_DIR,3);
    settextjustify(CENTER_TEXT,CENTER_TEXT);
    outtextxy(midx,midy-10,(char*)"Traffic Light Simulation");
    outtextxy(midx,midy+10,(char*)"Press any key to start");
    getch();
    cleardevice();
    setcolor(WHITE);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    rectangle(midx-30,midy-80,midx+30,midy+80);
    circle(midx,midy-50,22);
    setfillstyle(SOLID_FILL,RED);
    floodfill(midx,midy-50,WHITE);
    setcolor(BLUE);
    outtextxy(midx,midy-50,(char*)"STOP");
    delay(2000);
    graphdefaults();
    cleardevice();
    setcolor(WHITE);
    rectangle(midx-30,midy-80,midx+30,midy+80);
    circle(midx,midy,20);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(midx,midy,WHITE);
    setcolor(BLUE);
    outtextxy(midx-18,midy-3,(char*)"READY");
    delay(2000);
    cleardevice();
    setcolor(WHITE);
    rectangle(midx-30,midy-80,midx+30,midy+80);
    circle(midx,midy+50,22);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(midx,midy+50,WHITE);
    setcolor(BLUE);
    outtextxy(midx-7,midy+48,(char*)"GO");
    delay(2000);
    setcolor(RED);
    settextstyle(SCRIPT_FONT,HORIZ_DIR,4);
    outtextxy(midx-150,midy+100,(char*)"Press any key to exit");
    delay(2000);
    getch();
    cleardevice();
    setcolor(RED);
    settextstyle(SCRIPT_FONT,HORIZ_DIR,3);
    settextjustify(CENTER_TEXT,CENTER_TEXT);
    outtextxy(midx,midy,(char*)"Project");
    delay(5000);
    closegraph();
    

    return 0;
}
