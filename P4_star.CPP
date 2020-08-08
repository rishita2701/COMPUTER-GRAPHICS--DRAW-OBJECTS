#include<conio.h>
#include<graphics.h>
#include<iostream.h>
void main()
{
  clrscr();
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"");

  //Using drawpoly method
  int n[]={300,100,325,150,375,150,350,200,375,250,325,250,300,300,
	  275,250,225,250,250,200,225,150,275,150,300,100};
  drawpoly(13,n);

  //Using 2-Triangle Method
  line(550,100,500,200);
  line(500,200,600,200);
  line(600,200,550,100);
  line(500,125,600,125);
  line(500,125,550,225);
  line(550,225,600,125);
  getch();
}
