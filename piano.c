#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<dos.h>
#include<string.h>


void piano()                                            // function piano
{
    int gd,gm;
    gd=DETECT;
    initgraph(&gd,&gm,"..\\bgi");



    // DISPLAY PIANO
    setcolor(8);      //8 for dark gray
    setfillstyle(SOLID_FILL,8);
    bar3d(50,330,550,80,8,1);
    setcolor(7);                                //7 for light grey
    setfillstyle(SOLID_FILL,7);
    bar3d(50,170,550,80,8,9);
    settextstyle(7,0,5);
    setcolor(0);
    outtextxy(210,80,"P");
    settextstyle(7,0,5);
    setcolor(0);
    outtextxy(250,80,"I");
    settextstyle(7,0,5);
    setcolor(0);
    outtextxy(280,80,"A");
    settextstyle(7,0,5);
    setcolor(0);
    outtextxy(320,80,"N");
    settextstyle(7,0,5);
    setcolor(0);
    outtextxy(365,80,"O");
    settextstyle(2,0,4);
    setcolor(1);
    outtextxy(190,450,"Designed & Developed by ::>> SHUBHI GUPTA");


// WHITE BARS
    setcolor(15);
    setfillstyle(SOLID_FILL,15);
    bar3d(60,180,85,310,6,0);
    bar3d(90,180,115,310,6,0);
    bar3d(120,180,145,310,6,0);
    bar3d(150,180,175,310,6,0);
    bar3d(180,180,205,310,6,0);
    bar3d(210,180,235,310,6,0);
    bar3d(240,180,265,310,6,0);
    bar3d(270,180,295,310,6,0);
    bar3d(300,180,325,310,6,0);
    bar3d(330,180,355,310,6,0);
    bar3d(360,180,385,310,6,0);
    bar3d(390,180,415,310,6,0);
    bar3d(420,180,445,310,6,0);
    bar3d(450,180,475,310,6,0);
    bar3d(480,180,505,310,6,0);
    bar3d(510,180,535,310,6,0);







//BLACK BARS

    setcolor(0);
    setfillstyle(SOLID_FILL,0);
    bar3d(75,180,95,250,6,0);
    bar3d(105,180,125,250,6,0);
    bar3d(165,180,185,250,6,0);
    bar3d(195,180,215,250,6,0);
    bar3d(225,180,245,250,6,0);
    bar3d(285,180,305,250,6,0);
    bar3d(315,180,335,250,6,0);
    bar3d(375,180,395,250,6,0);
    bar3d(405,180,425,250,6,0);
    bar3d(435,180,455,250,6,0);
    bar3d(495,180,515,250,6,0);

    settextstyle(2,0,4);
    setcolor(1);
    outtextxy(5,10,"PRESS 'ESC' TO EXIT");




    setcolor(15);
    rectangle(70,90,200,165);
    setfillstyle(CLOSE_DOT_FILL,BLUE);
    floodfill(100,100,15);
    rectangle(400,90,530,165);
    setfillstyle(CLOSE_DOT_FILL,BLUE);
    floodfill(430,100,15);


    setcolor(12);                            // drawing button
    rectangle(230,150,355,160);
    setfillstyle(SOLID_FILL,12);
    floodfill(232,151,12);

}
 


void gra()
{
    int gd,gm,j;
    gd=DETECT;
    initgraph(&gd,&gm,"..\\bgi");



    settextstyle(TRIPLEX_FONT,0,6);
    settextjustify(1,1);
    setcolor(1);
    outtextxy(310,150,"VIRTUAL");
    delay(250);
    settextstyle(TRIPLEX_FONT,0,10);
    setcolor(12);
    delay(250);
    outtextxy(320,245,"P I A N O");
    line(0,330,800,330);
    delay(500);
    settextstyle(SMALL_FONT,0,5);
    settextjustify(1,1);
    setcolor(2);
    outtextxy(320,400,"PRESS ANY KEY TO BE MELODIOUS");


    for (j=0;!kbhit();j++)
    {
    }

    closegraph();
    getch();
}

void pass()
{
    FILE *fp;

    int pass,i,access;
    int gd,gm;
    char st[11];


    char a[20];
    fp=fopen("password.txt","r");
    gd=DETECT;
    fgets(st,10,fp);
    initgraph(&gd,&gm,"..\\bgi");                     // FUNCTION FOR PASSWORD

    fclose(fp);
    setcolor(GREEN);
    rectangle(getmaxx()/2-140,getmaxy()/2-20,getmaxx()/2+135,getmaxy()/2+4);
    outtextxy(getmaxx()/2-127,getmaxy()/2-12,"Enter Accesscode:");
    gotoxy(43,15);

    //Password Code

    gets(a);

    if(strcmp(a,st)==0)
    {
        cleardevice();
        textcolor(BLACK);
        textbackground(YELLOW);
        setcolor(GREEN);
        settextstyle(3,0,4);
        outtextxy(130,200,"..... Access Granted .....");
        sound(300);
        delay(250);
        nosound();
        sound(250);
        delay(250);
        nosound();
        closegraph();
    }

    else
    {
        cleardevice();
        gotoxy(30,15);
        setcolor(GREEN);
        settextstyle(3,0,4);
        outtextxy(100,200,"..... Unauthorised Access .....");
        sound(500);
        delay(400);
        nosound();
        delay(400);
        sound(500);
        delay(400);
        nosound();
        delay(400);
        sound(500);
        delay(400);
        nosound();
        closegraph();
        exit(1);
    }


    closegraph();
}


// FUNCTION PLAY FOR PIANO


void play(char c)
{

    c=tolower(c);
    setcolor(15);

//  27 KEYS FOR PIANO

    if(c=='a')
    {
        sound(256);
        setfillstyle(SOLID_FILL,0);
        bar3d(60,180,85,310,6,7);
        delay(110);
        setcolor(15);
        setfillstyle(SOLID_FILL,15);
        bar3d(60,180,85,310,6,7);
        setcolor(0);
        setfillstyle(SOLID_FILL,0);
        bar3d(75,180,95,250,6,7);
        nosound();
    }

    if(c=='s')
    {
        sound(288);
        setfillstyle(SOLID_FILL,0);
        bar(90,250,115,310);
        delay(110);
        setcolor(15);
        setfillstyle(SOLID_FILL,15);
        bar(90,250,115,310);
        nosound();
    }

    if(c=='d')
    {
        sound(320);
        setfillstyle(SOLID_FILL,0);
        bar(120,250,145,310);
        delay(110);
        setcolor(15);
        setfillstyle(SOLID_FILL,15);
        bar(120,250,145,310);
        nosound();
    }

    if(c=='f')
    {
        sound(344);
        setfillstyle(SOLID_FILL,0);
        bar(150,250,175,310);
        delay(110);
        setcolor(15);
        setfillstyle(SOLID_FILL,15);
        bar(150,250,175,310);
        nosound();
    }

    if(c=='g')
    {
        sound(384);
        setfillstyle(SOLID_FILL,0);
        bar(180,250,205,310);
        delay(110);
        setcolor(15);setfillstyle(SOLID_FILL,15);
        bar(180,250,205,310);
        nosound();
    }

    if(c=='h')
    {
        sound(427);
        setfillstyle(SOLID_FILL,0);
        bar(210,250,235,310);
        delay(110);
        setcolor(15);
        setfillstyle(SOLID_FILL,15);
        bar(210,250,235,310);
        nosound();
    }

    if(c=='j')
    {
        sound(480);
        setfillstyle(SOLID_FILL,0);
        bar(240,250,265,310);
        delay(110);
        setcolor(15);
        setfillstyle(SOLID_FILL,15);
        bar(240,250,265,310);
        nosound();
    }

    if(c=='k')
    {
        sound(512);
        setfillstyle(SOLID_FILL,0);
        bar(270,250,295,310);
        delay(110);
        setcolor(15);
        setfillstyle(SOLID_FILL,15);
        bar(270,250,295,310);
        nosound();
    }

    if(c=='l')
    {
        sound(640);
        setfillstyle(SOLID_FILL,0);
        bar(300,250,325,310);
        delay(110);
        setcolor(15);
        setfillstyle(SOLID_FILL,15);
        bar(300,250,325,310);
        nosound();
    }

    if(c==';')
    {
        sound(720);
        setfillstyle(SOLID_FILL,0);
        bar(330,250,355,310);
        delay(110);
        setcolor(15);
        setfillstyle(SOLID_FILL,15);
        bar(330,250,355,310);
        nosound();
    }

    if(c=='z')
    {
        sound(800);
        setfillstyle(SOLID_FILL,0);
        bar(360,250,385,310);
        delay(110);
        setcolor(15);
        setfillstyle(SOLID_FILL,15);
        bar(360,250,385,310);
        nosound();
    }

    if(c=='x')
    {
        sound(860);
        setfillstyle(SOLID_FILL,0);
        bar(390,250,415,310);
        delay(110);
        setcolor(15);
        setfillstyle(SOLID_FILL,15);
        bar(390,250,415,310);
        nosound();
    }

    if(c=='c')
    {
        sound(960);
        setfillstyle(SOLID_FILL,0);
        bar(420,250,445,310);
        delay(110);
        setcolor(15);
        setfillstyle(SOLID_FILL,15);
        bar(420,250,445,310);
        nosound();
    }

    if(c=='v')
    {
        sound(1068);
        setfillstyle(SOLID_FILL,0);
        bar(450,250,475,310);
        delay(110);
        setcolor(15);
        setfillstyle(SOLID_FILL,15);
        bar(450,250,475,310);
        nosound();
    }
    if(c=='b')
    {
        sound(1200);
        setfillstyle(SOLID_FILL,0);
        bar(480,250,505,310);
        delay(110);
        setcolor(15);
        setfillstyle(SOLID_FILL,15);
        bar(480,250,505,310);
        nosound();
    }
    if(c=='n')
    {
        sound(1280);
        setfillstyle(SOLID_FILL,0);
        bar3d(510,180,535,310,6,7);
        delay(110);
        setcolor(15);
        setfillstyle(SOLID_FILL,15);
        bar3d(510,180,535,310,6,7);
        setcolor(0);
        setfillstyle(SOLID_FILL,0);
        bar3d(495,180,515,250,6,7);
        nosound();
    }
    if(c=='q')
    {
        sound(768);
        setfillstyle(SOLID_FILL,15);
        bar3d(75,180,95,250,6,7);
        delay(110);
        setcolor(0);
        setfillstyle(SOLID_FILL,0);
        bar3d(75,180,95,250,6,7);
        nosound();
    }

    if(c=='w')
    {
        sound(864);
        setfillstyle(SOLID_FILL,15);
        bar3d(105,180,125,250,6,7);
        delay(110);
        setcolor(0);
        setfillstyle(SOLID_FILL,0);
        bar3d(105,180,125,250,6,7);
        nosound();
    }

    if(c=='e')
    {
        sound(1032);
        setfillstyle(SOLID_FILL,15);
        bar3d(165,180,185,250,6,7);
        delay(110);
        setcolor(0);
        setfillstyle(SOLID_FILL,0);
        bar3d(165,180,185,250,6,7);
        nosound();
    }

    if(c=='r')
    {
        sound(1152);
        setfillstyle(SOLID_FILL,15);
        bar3d(195,180,215,250,6,7);
        delay(110);
        setcolor(0);
        setfillstyle(SOLID_FILL,0);
        bar3d(195,180,215,250,6,7);
        nosound();
    }

    if(c=='t')
    {
        sound(1281);
        setfillstyle(SOLID_FILL,15);
        bar3d(225,180,245,250,6,7);
        delay(110);
        setcolor(0);
        setfillstyle(SOLID_FILL,0);
        bar3d(225,180,245,250,6,7);
        nosound();
    }
    if(c=='y')
    {
        sound(1536);
        setfillstyle(SOLID_FILL,15);
        bar3d(285,180,305,250,6,7);
        delay(110);
        setcolor(0);
        setfillstyle(SOLID_FILL,0);
        bar3d(285,180,305,250,6,7);
        nosound();
    }
    if(c=='u')
    {
        sound(1024);
        setfillstyle(SOLID_FILL,15);
        bar3d(315,180,335,250,6,7);
        delay(110);
        setcolor(0);
        setfillstyle(SOLID_FILL,0);
        bar3d(315,180,335,250,6,7);
        nosound();
    }
    if(c=='i')
    {
        sound(1280);
        setfillstyle(SOLID_FILL,15);
        bar3d(375,180,395,250,6,7);
        delay(110);
        setcolor(0);
        setfillstyle(SOLID_FILL,0);
        bar3d(375,180,395,250,6,7);
        nosound();
    }
    if(c=='o')
    {
        sound(1376);
        setfillstyle(SOLID_FILL,15);
        bar3d(405,180,425,250,6,7);
        delay(110);
        setcolor(0);
        setfillstyle(SOLID_FILL,0);
        bar3d(405,180,425,250,6,7);
        nosound();
    }
    if(c=='p')
    {
        sound(1536);
        setfillstyle(SOLID_FILL,15);
        bar3d(435,180,455,250,6,7);
        delay(110);
        setcolor(0);
        setfillstyle(SOLID_FILL,0);
        bar3d(435,180,455,250,6,7);
        nosound();
    }
    if(c=='[')
    {
        sound(1920);
        setfillstyle(SOLID_FILL,15);
        bar3d(495,180,515,250,6,7);
        delay(110);
        setcolor(0);
        setfillstyle(SOLID_FILL,0);
        bar3d(495,180,515,250,6,7);
        nosound();
    }
}




void main()
{
    char c;
    gra();
    pass();
    piano();
    do
    {
        c=getch();
        setcolor(15);
        play(c);
    } while(c!=27);

    closegraph();
    restorecrtmode();
}


