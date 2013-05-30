#include<graphics.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>
using namespace std;
struct point{
int x,y;
};
struct point p[1000];
void draw(int x1,int y1,float deg,float l,int t)
{
     if(l<=25)
              return;
     setlinestyle(0, 0, 3*t/4);
     line(x1,y1,x1+l*sin(deg*(float)(3.1415/180)),y1-l*cos(deg*(float)(3.1415/180)));
     line(x1,y1,x1-l*sin(deg*(float)(3.1415/180)),y1-l*cos(deg*(float)(3.1415/180)));
     draw(x1+l*sin(deg*(float)(3.1415/180)),y1-l*cos(deg*(float)(3.1415/180)),deg*(3.141595/180)+(20*3.141595),3*l/5,t/2);
     draw(x1-l*sin(deg*(float)(3.1415/180)),y1-l*cos(deg*(float)(3.1415/180)),deg*(3.141595/180)-(10*3.141595),3*l/5,t/2);
}
int main()
{
    initwindow(1400,1400, "Four Seasons");
    settextstyle(9,0,5);
    int x=500,y=250,x1,y1,k=0,za,c = -200, h = 15, ht = 0;;
    int l=1000;int deg;
    for(int j=0;j<1000;j++)
    {
            x1=rand()%(775-j/4)+150+j/8;
            y1=rand()%(350-j/10)+50-j/4;
            p[j].x=x1;
            p[j].y=y1;
    }
    for(int i=0;i<180;i++){
    setfillstyle(1,11);
    floodfill(1000,1000,WHITE);
    setlinestyle(0, 0, 50);
    setcolor(BROWN);
    rectangle(485,450,525,800);
    draw(500,800, 0, 350,50);
    line(500,800,500,450);
    int za=0;
    setcolor(GREEN);
    setfillstyle(1, GREEN);
    for(int j=0;j<1000;j++)
    {
            
            circle(x1,y1,10);
            fillellipse(p[j].x,p[j].y,10,10);
    }
    setcolor(WHITE);
    outtextxy(1100,10,"SUMMER");
    l=925;
    setcolor(YELLOW);
    setfillstyle(1,YELLOW);
    circle(500-l*cos(i*3.141595/180),800-l*sin(i*3.141595/180),100);
    fillellipse(500-l*cos(i*3.141595/180),800-l*sin(i*3.141595/180),100,100);
    delay(50);
    cleardevice();
    }
    
    for(int i=0;i<100;i++)
    {
    setfillstyle(1,11);
    floodfill(1000,1000,WHITE);
    setlinestyle(0, 0, 50);
    setcolor(BROWN);
    rectangle(485,450,525,800);
    draw(500,800, 0, 350,50);
    line(500,800,500,450);
    int ra[]={6,14};
    za=0;
    if(x<1000&&k<1000)
    {
    za=za+1;
    za=za%2;
    setcolor(ra[za]);
    setfillstyle(1, ra[za]);
    x=x+i*i/2;
    circle(x,y+i*i,10);
    fillellipse(x,y+i*i,10,10);
    circle(x-100,y+i*i*3,10);
    fillellipse(x-100,y+i*i*3,10,10);
    circle(x,y+i*i*4+100,10);
    fillellipse(x,y+i*i*4+100,10,10);
    circle(x,y+i*i*2+50,10);
    fillellipse(x,y+i*i*2+50,10,10);
    circle(x,y+i*i*5,10);
    fillellipse(x,y+i*i*5,10,10);
    circle(x+100,y+i*i*6,10);
    fillellipse(x+100,y+i*i*6,10,10);
    circle(x,y+i*i*2,10);
    fillellipse(x,y+i*i*2,10,10);
    circle(x/2+150,y+i*i,10);
    fillellipse(x/2+150,y+i*i,10,10);
    circle(x*3,y+i*i-25,10);
    fillellipse(x*3,y+i*i-25,10,10);
     za=za+1;
    za=za%2;
     setcolor(ra[za]);
    setfillstyle(1, ra[za]);
    circle(x,y+i*i+50,10);
    fillellipse(x,y+i*i+50,10,10);
    circle(x-100,y+i*i*3+50,10);
    fillellipse(x-100,y+i*i*3+50,10,10);
    circle(x+50,y+i*i*4+100,10);
    fillellipse(x+50,y+i*i*4+100,10,10);
    circle(x-50,y+i*i*2+50,10);
    fillellipse(x-50,y+i*i*2+50,10,10);
    circle(x+100,y+i*i*5,10);
    fillellipse(x+100,y+i*i*5,10,10);
    circle(x-100,y+i*i*6,10);
    fillellipse(x-100,y+i*i*6,10,10);
    circle(x+15,y+i*i*2,10);
    fillellipse(x+15,y+i*i*2,10,10);
    circle(x/2+150,y+i*i,10);
    fillellipse(x/2+150,y+i*i,10,10);
    circle(x+10,y+i*i+25,10);
    fillellipse(x+10,y+i*i+25,10,10);
    
     setcolor(ra[za]);
    setfillstyle(1, ra[za]);
    circle(x/3,y+i*i+10,10);
    fillellipse(x/3,y+i*i+10,10,10);
    circle(x-150,y+i*i*3,10);
    fillellipse(x-150,y+i*i*3,10,10);
    circle(x+150,y+i*i*4+100,10);
    fillellipse(x+150,y+i*i*4+100,10,10);
    circle(x-14,y+i*i*2+50,10);
    fillellipse(x-14,y+i*i*2+50,10,10);
    circle(x+14,y+i*i*5,10);
    fillellipse(x+14,y+i*i*5,10,10);
    circle(x+22,y+i*i*6,10);
    fillellipse(x+22,y+i*i*6,10,10);
    circle(x+33,y+i*i*2,10);
    fillellipse(x+33,y+i*i*2,10,10);
    circle(x-7+150,y+i*i,10);
    fillellipse(x-7+150,y+i*i,10,10);
    circle(x+7,y+i*i-25,10);
    fillellipse(x+7,y+i*i-25,10,10);
     za=za+1;
    za=za%2;
    
     setcolor(ra[za]);
    setfillstyle(1, ra[za]);
    circle(x/4,y+i*i+50,10);
    fillellipse(x/4,y+i*i+50,10,10);
    circle(x+22,y+i*i*3+50,10);
    fillellipse(x+22,y+i*i*3+50,10,10);
    circle(x+50,y+i*i*4+100,10);
    fillellipse(x+50,y+i*i*4+100,10,10);
    circle(x-5,y+i*i*2+50,10);
    fillellipse(x-5,y+i*i*2+50,10,10);
    circle(x+1,y+i*i*5,10);
    fillellipse(x+1,y+i*i*5,10,10);
    circle(x-11,y+i*i*6,10);
    fillellipse(x-11,y+i*i*6,10,10);
    circle(x+12,y+i*i*2,10);
    fillellipse(x+12,y+i*i*2,10,10);
    circle(x/22+150,y+i*i,10);
    fillellipse(x/22+150,y+i*i,10,10);
    circle(x+4,y+i*i+25,10);
    fillellipse(x+4,y+i*i+25,10,10);
    
    }
    else{
         x=500;
         y=250;
         i=0;
    }
    za=0;
    for(int j=0;j<1000-k;j++)
    {
            za=za+1;
            za=za%2;
            setcolor(ra[za]);
            setfillstyle(1, ra[za]);
             x1=rand()%(775-j/4)+150+j/8;
            y1=rand()%(350-j/10)+50-j/4;
            circle(x1,y1,10);
            fillellipse(x1,y1,10,10);
    }
    k+=19;
    if(k>1000)
              break;
    setcolor(WHITE);
    outtextxy(1100,10,"AUTUMN");
    delay(100);
    cleardevice();
    }
    for(int i=0;i<50;i++)
    {
    setfillstyle(1,11);
    floodfill(1000,1000,WHITE);
    setlinestyle(0, 0, 50);
    setcolor(BROWN);
    rectangle(485,450,525,800);
    draw(500,800, 0, 350,50);
    line(500,800,500,450);
    for(int j=0;j<500;j++)
    {
           
            setcolor(WHITE);
            setfillstyle(1, WHITE);
            x1=rand()%1400;
            y1=rand()%1400;
            circle(x1,y1,5);
            fillellipse(x1,y1,5,5);
    }
    setcolor(WHITE);
    outtextxy(1100,10,"WINTER");
    delay(100);
    cleardevice();
    }
    for(int i=0;i<100;i++)
    {
    setfillstyle(1,11);
    floodfill(1000,1000,WHITE);
    setlinestyle(0, 0, 50);
    setcolor(BROWN);
    rectangle(485,450,525,800);
    draw(500,800, 0, 350,50);
    line(500,800,500,450);
    for(int j=0;j<1000-k;j++)
    {
           
            setcolor(GREEN);
            setfillstyle(1, GREEN);
            circle(p[j].x,p[j].y,10);
            fillellipse(p[j].x,p[j].y,10,10);
    }
    k-=19;
    if(k<0)
           break;
    delay(100);
    cleardevice();
    }
    int ra[]={4,12};
    za=0;
    for(int i=1;i<=20;i++)
    {
    setfillstyle(1,11);
    floodfill(1000,1000,WHITE);
    setlinestyle(0, 0, 50);
    setcolor(BROWN);
    rectangle(485,450,525,800);
    draw(500,800, 0, 350,50);
    line(500,800,500,450);
    for(int j=1;j<=1000;j++)
    {
            setcolor(GREEN);
            setfillstyle(1, GREEN);
            circle(p[j].x,p[j].y,10);
            fillellipse(p[j].x,p[j].y,10,10);
    }
    for(int j=1;j<=i;j++){
                    za=za+1;
                    za=za%2;
                    setcolor(ra[za]);
                    setfillstyle(1, ra[za]);
                    circle(p[j].x,p[j].y,15);
                    fillellipse(p[j].x,p[j].y,15,15);
    }
    delay(100);
    setcolor(WHITE);
    outtextxy(1100,10,"SPRING");
    cleardevice();
    }
    return 0;
}
