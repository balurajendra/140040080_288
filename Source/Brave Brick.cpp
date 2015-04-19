#include<simplecpp>
#include<cstdlib>
#include<fstream>

#define VK_LCONTROL 37
#define VK_RCONTROL 39
class rectang
{
public:
int lx;
};
bool check(Rectangle &rm,Rectangle &r1, Rectangle &r2, Rectangle &r3,Rectangle &r4,rectang r11,rectang r22)
{
    bool cont=true;
    int r1x=r1.getX();
    int r2x=r2.getX();
    int r3x=r3.getX();
    int r4x=r4.getX();
    int rmx=rm.getX();
    int r1y=r1.getY();
    int r2y=r2.getY();
    int r4y=r4.getY();
    int r3y=r3.getY();
    int rmy=rm.getY();
    if ((((abs(r1x-rmx))<(16+(r11.lx/2)))&&(abs(r1y-rmy))<25)||(((abs(r2x-rmx))<(16+(r22.lx/2)))&&(abs(r2y-rmy))<25)||(((abs(r3x-rmx))<=25)&&(abs(r3y-rmy))<=25)||(((abs(r4x-rmx))<=25)&&(abs(r4y-rmy))<=25)||rmx>=400||rmx<=15||rmy>=585)
    {
        cont=false;
    }
return cont;
}
bool check_last(Rectangle &rm,Rectangle &r1,Rectangle &r2,Rectangle &r3,Rectangle &r4,Rectangle &r5,Rectangle &r6,rectang r11,rectang r22,rectang r33,rectang r44)
{
    bool cont=true;
    int r1x=r1.getX();
    int r2x=r2.getX();
    int r3x=r3.getX();
    int r4x=r4.getX();
    int rmx=rm.getX();
    int r5x=r5.getX();
    int r6x=r6.getX();
    int r1y=r1.getY();
    int r2y=r2.getY();
    int r4y=r4.getY();
    int r3y=r3.getY();
    int rmy=rm.getY();
    int r5y=r5.getY();
    int r6y=r6.getY();
    if((((abs(r1x-rmx))<(16+(r11.lx/2)))&&(abs(r1y-rmy))<25)||(((abs(r2x-rmx))<(16+(r22.lx/2)))&&(abs(r2y-rmy))<25)||(((abs(r3x-rmx))<=25)&&(abs(r3y-rmy))<=25)||(((abs(r4x-rmx))<=25)&&(abs(r4y-rmy))<=25)||(((abs(r5x-rmx))<(16+(r33.lx/2)))&&(abs(r5y-rmy))<25)||(((abs(r6x-rmx))<(16+(r44.lx/2)))&&(abs(r6y-rmy))<25)||rmx>=585||rmx<=15||rmy>=585)
    {
        cont=false;
    }
return cont;
}
float right_when_pressed(Rectangle &rm,Rectangle &r1,Rectangle &r1a,Rectangle &r1b,Rectangle &r1c,Rectangle &r2,Rectangle &r2a,Rectangle &r2b,Rectangle &r2c,Rectangle &r3,Rectangle &r3a,Rectangle &r3b,Rectangle &r3c,Rectangle &r4,Rectangle &r4a,Rectangle &r4b,Rectangle &r4c,Rectangle &r5,Rectangle &r5a,Rectangle &R,Text &level)
{
    float b=-5;
    rm.move(6,b);
    r1.move(0,5);
    r1a.move(0,5);
    r1b.move(0,5);
    r1c.move(0,5);
    r2.move(0,5);
    r2a.move(0,5);
    r2b.move(0,5);
    r2c.move(0,5);
    r3.move(0,5);
    r3a.move(0,5);
    r3b.move(0,5);
    r3c.move(0,5);
    r4.move(0,5);
    r4a.move(0,5);
    r4b.move(0,5);
    r4c.move(0,5);
    r5.move(0,5);
    r5a.move(0,5);
    R.move(0,5);
    level.move(0,5);
        b=-5;

   // wait(.02);
return(b);
}
float right(float maxi,float b,Rectangle &rm,Rectangle &r1,Rectangle &r1a,Rectangle &r1b,Rectangle &r1c,Rectangle &r2,Rectangle &r2a,Rectangle &r2b,Rectangle &r2c,Rectangle &r3,Rectangle &r3a,Rectangle &r3b,Rectangle &r3c,Rectangle &r4,Rectangle &r4a,Rectangle &r4b,Rectangle &r4c,Rectangle &r5,Rectangle &r5a,Rectangle &R,Text &level)
{
    rm.move(6,b);
    r1.move(0,5);
    r1a.move(0,5);
    r1b.move(0,5);
    r1c.move(0,5);
    r2.move(0,5);
    r2a.move(0,5);
    r2b.move(0,5);
    r2c.move(0,5);
    r3.move(0,5);
    r3a.move(0,5);
    r3b.move(0,5);
    r3c.move(0,5);
    r4.move(0,5);
    r4a.move(0,5);
    r4b.move(0,5);
    r4c.move(0,5);
    r5.move(0,5);
    r5a.move(0,5);
    R.move(0,5);
    level.move(0,5);
    if(maxi=-20)
        b=8;
    else
        b=-5;
   // wait(.02);
return(b);
}
float left_when_pressed(Rectangle &rm,Rectangle &r1, Rectangle &r1a, Rectangle &r1b,Rectangle &r1c,Rectangle &r2,Rectangle &r2a,Rectangle &r2b,Rectangle &r2c,Rectangle &r3,Rectangle &r3a,Rectangle &r3b,Rectangle &r3c,Rectangle &r4,Rectangle &r4a,Rectangle &r4b,Rectangle &r4c,Rectangle &r5,Rectangle &r5a,Rectangle &R,Text &level)
{
    float b=-5;
    rm.move(-6,b);
    r1.move(0,5);
    r1a.move(0,5);
    r1b.move(0,5);
    r1c.move(0,5);
    r2.move(0,5);
    r2a.move(0,5);
    r2b.move(0,5);
    r2c.move(0,5);
    r3.move(0,5);
    r3a.move(0,5);
    r3b.move(0,5);
    r3c.move(0,5);
    r4.move(0,5);
    r4a.move(0,5);
    r4b.move(0,5);
    r4c.move(0,5);
    r5.move(0,5);
    r5a.move(0,5);
    R.move(0,5);
    level.move(0,5);
        b=-5;
   // wait(.02);
return(b);
}
float left(float maxi,float b,Rectangle &rm,Rectangle &r1, Rectangle &r1a, Rectangle &r1b,Rectangle &r1c,Rectangle &r2,Rectangle &r2a,Rectangle &r2b,Rectangle &r2c,Rectangle &r3,Rectangle &r3a,Rectangle &r3b,Rectangle &r3c,Rectangle &r4,Rectangle &r4a,Rectangle &r4b,Rectangle &r4c,Rectangle &r5,Rectangle &r5a,Rectangle &R,Text &level)
{
    rm.move(-6,b);
    r1.move(0,5);
    r1a.move(0,5);
    r1b.move(0,5);
    r1c.move(0,5);
    r2.move(0,5);
    r2a.move(0,5);
    r2b.move(0,5);
    r2c.move(0,5);
    r3.move(0,5);
    r3a.move(0,5);
    r3b.move(0,5);
    r3c.move(0,5);
    r4.move(0,5);
    r4a.move(0,5);
    r4b.move(0,5);
    r4c.move(0,5);
    r5.move(0,5);
    r5a.move(0,5);
    R.move(0,5);
    level.move(0,5);
    if(maxi=-20)
        b=8;
    else
        b=-5;

   // wait(.02);
return(b);
}
void players()
{
    //initCanvas("Brave Brick",400,600);
    int p=0;
    void gameover(int);
    int cx1,cy,lx,lx2,cx1a,cx2,cx2a,cx3,cx3a,cx4,cx4a,cx5,cx5a,len=400,d=100,inc=0;
    float maxi,b;
    char ch;
    rectang r11,r11a,r22,r22a,r33,r33a,r44,r44a,r55,r55a;
    Rectangle rm(200,400,20,20);
        rm.setFill(true);
        rm.setColor(COLOR("black"));
        rm.rotate(atan2(0,-1)/4);
        Rectangle khel(200,500,100,40);
        khel.setFill();
        khel.setColor(COLOR(255,255,0));
        Rectangle rarrow(300,500,60,40);
        rarrow.setFill();
        rarrow.setColor(COLOR(0,255,0));
        Rectangle larrow(100,500,60,40);
        larrow.setFill();
        larrow.setColor(COLOR(0,255,0));
        Text press(200,500,"PRESS");
        Text lpress(100,500,"<--");
        Text rpress(300,500,"-->");
    for(int i=0;i<100;i++)
    {
        if(i>0)
        p=p+5;
    cy=0;
        //{
            cx1=randuv(0,150);
            lx=2*(cx1);
            r11.lx=lx;
            cx1a=(lx+d+len)/2;
            lx2=2*(len-cx1a);
            r11a.lx=lx2;
            Rectangle r1
            (cx1,cy,lx,20);
            r1.setFill(TRUE);
            r1.setColor(COLOR("red"));
            //r1.imprint();
            Rectangle r1a(cx1a,cy,lx2,20);
            r1a.setFill(TRUE);
            r1a.setColor(COLOR("red"));
            //r1a.imprint();
            cy=cy-300;
            int k,l,m,n;
            k=randuv(cy+30,cy+140);
            l=randuv(cy+160,cy+260);
            m=randuv(cx1+30,cx1+300);
            n=randuv(cx1+30,cx1+300);
            Rectangle r1b(m,k,25,25);
            r1b.setFill(TRUE);
            r1b.setColor(COLOR("red"));
            //r1b.imprint();
            Rectangle r1c(n,l,25,25);
            r1c.setFill(TRUE);
            r1c.setColor(COLOR("red"));
            //r1c.imprint();
            cx2=randuv(0,150);
            lx=2*(cx2);
            r22.lx=lx;
            cx2a=(lx+d+len)/2;
            lx2=2*(len-cx2a);
            r22a.lx=lx2;
            Rectangle r2(cx2,cy,lx,20);
            r2.setFill(TRUE);
            r2.setColor(COLOR("blue"));
            //r2.imprint();
            Rectangle r2a(cx2a,cy,lx2,20);
            r2a.setFill(TRUE);
            r2a.setColor(COLOR("blue"));
            //r2a.imprint();
            cy=cy-300;
            k=randuv(cy+30,cy+140);
            l=randuv(cy+160,cy+260);
            m=randuv(cx2+30,cx2+300);
            n=randuv(cx2+30,cx2+300);
            Rectangle r2b(m,k,25,25);
            r2b.setFill(TRUE);
            r2b.setColor(COLOR("blue"));
            //r2b.imprint();
            Rectangle r2c(n,l,25,25);
            r2c.setFill(TRUE);
            r2c.setColor(COLOR("blue"));
            //r2c.imprint();
            cx3=randuv(0,150);
            lx=2*(cx3);
            r33.lx=lx;
            cx3a=(lx+d+len)/2;
            lx2=2*(len-cx3a);
            r33a.lx=lx2;
            Rectangle r3(cx3,cy,lx,20);
            r3.setFill(TRUE);
            r3.setColor(COLOR("green"));
            //r3.imprint();
            Rectangle r3a(cx3a,cy,lx2,20);
            r3a.setFill(TRUE);
            r3a.setColor(COLOR("green"));
            //r3a.imprint();
            cy=cy-300;
            k=randuv(cy+30,cy+140);
            l=randuv(cy+160,cy+260);
            m=randuv(cx3+30,cx3+300);
            n=randuv(cx3+30,cx3+300);
            Rectangle r3b(m,k,25,25);
            r3b.setFill(TRUE);
            r3b.setColor(COLOR("green"));
            //r3b.imprint();
            Rectangle r3c(n,l,25,25);
            r3c.setFill(TRUE);
            r3c.setColor(COLOR("green"));
            //r3c.imprint();
            cx4=randuv(0,150);
            lx=2*(cx4);
            r44.lx=lx;
            cx4a=(lx+d+len)/2;
            lx2=2*(len-cx4a);
            r44a.lx=lx2;
            Rectangle r4(cx4,cy,lx,20);
            r4.setFill(TRUE);
            r4.setColor(COLOR("yellow"));
            //r4.imprint();
            Rectangle r4a(cx4a,cy,lx2,20);
            r4a.setFill(TRUE);
            r4a.setColor(COLOR("yellow"));
            //r4a.imprint();
            cy=cy-300;
            k=randuv(cy+30,cy+140);
            l=randuv(cy+160,cy+260);
            m=randuv(cx4+30,cx4+300);
            n=randuv(cx4+30,cx4+300);
            Rectangle r4b(m,k,25,25);
            r4b.setFill(TRUE);
            r4b.setColor(COLOR("yellow"));
            //r4b.imprint();
            Rectangle r4c(n,l,25,25);
            r4c.setFill(TRUE);
            r4c.setColor(COLOR("yellow"));
            //r4c.imprint();
            cx5=randuv(0,150);
            lx=2*(cx5);
            r55.lx=lx;
            cx5a=(lx+d+len)/2;
            lx2=2*(len-cx5a);
            r55a.lx=lx2;
            Rectangle r5(cx5,cy,lx,20);
            r5.setFill(TRUE);
            r5.setColor(COLOR(20,30,50));
            //r5.imprint();
            Rectangle r5a(cx5a,cy,lx2,20);
            r5a.setFill(TRUE);
            r5a.setColor(COLOR(20,30,50));
            //r5a.imprint();
            Rectangle R(200,cy-300,150,150);
            R.setFill(TRUE);
            R.setColor(COLOR(70,20,10));
            Text level(200,cy-300,"Level Complete");
            for(int j=0;j<=370;)
            {
                bool cont;
                int z;
                int rmy=rm.getY();
                int r1y=r1.getY();
                int r1by=r1b.getY();
                int r2y=r2.getY();
                int r2by=r2b.getY();
                int r3y=r3.getY();
                int r3by=r3b.getY();
                int r4y=r4.getY();
                int r5y=r5.getY();

                if(rmy>=r1by-30)
                    { z=1;cout<<"1\n";}
                else if(((r1by-30)>rmy)&&(rmy>=(r2by-30)))
                    { z=2;cout<<"2\n";}
                else if(((r2by-30)>rmy)&&(rmy>=(r3by-30)))
                    { z=3;cout<<"3\n";}
                else if(rmy<=(r3by-30))
                    { z=4;cout<<"4\n";}
                    /*if(((rmy>=(r1y-5))&&(rmy<=(r1y+10)))||((rmy>=(r2y-5))&&(rmy<=(r2y+10)))||((rmy>=(r3y-5))&&(rmy<=(r3y+10)))||((rmy>=(r4y-5))&&(rmy<=(r4y+10))))

                    {
                        p++;
                        Text score(380,20,p);
                    }
                    else if((rmy>=(r5y-5))&&(rmy<=(r5y+10)))
                    {
                        p++;
                        Text score(380,20,p);
                    }
                    else
                    {
                        Text score(380,20,p);
                    }*/
                switch(z)
                {
                    case 1 :    if(GetAsyncKeyState(VK_LCONTROL))
                                {
                                    khel.move(0,150);
                                    rarrow.move(0,150);
                                    larrow.move(0,150);
                                    press.move(0,150);
                                    lpress.move(0,150);
                                    rpress.move(0,150);
                                    ch='l';
                                    cont=check(rm,r1,r1a,r1b,r1c,r11,r11a);
                                    if(cont==true)
                                    {
                                        b=left_when_pressed(rm,r1,r1a,r1b,r1c,r2,r2a,r2b,r2c,r3,r3a,r3b,r3c,r4,r4a,r4b,r4c,r5,r5a,R,level);
                                        inc=0;
                                    }
                                    else
                                    {
                                        cout<<"over 1";
                                        rm.hide();
                                        r1.hide();
                                        r1a.hide();
                                        r1b.hide();
                                        r1c.hide();
                                        r2.hide();
                                        r2a.hide();
                                        r2b.hide();
                                        r2c.hide();
                                        r3.hide();
                                        r3a.hide();
                                        r3b.hide();
                                        r3c.hide();
                                        r4.hide();
                                        r4a.hide();
                                        r4b.hide();
                                        r4c.hide();
                                        r5.hide();
                                        r5a.hide();
                                        R.hide();
                                        level.hide();

                                        fstream f,fout;
                                        int q;
                                        f.open("high_score.txt",ios::in|ios::out|ios::app);
                                        f>>q;
                                        if(q<p)
                                        {
                                            f.close();
                                            fout.open("high_score.txt",ios::out|ios::trunc);
                                            fout<<p;
                                            fout.close();
                                        }
                                        else
                                        {
                                            f.close();
                                        }
                                        gameover(p);
                                    }
                                    j++;
                                }
                                if(GetAsyncKeyState(VK_RCONTROL))
                                {
                                    khel.move(0,150);
                                    rarrow.move(0,150);
                                    larrow.move(0,150);
                                    press.move(0,150);
                                    lpress.move(0,150);
                                    rpress.move(0,150);
                                    ch='r';
                                    cont=check(rm,r1,r1a,r1b,r1c,r11,r11a);
                                    if(randuv(0,255),cont==true)
                                    {
                                        b=right_when_pressed(rm,r1,r1a,r1b,r1c,r2,r2a,r2b,r2c,r3,r3a,r3b,r3c,r4,r4a,r4b,r4c,r5,r5a,R,level);
                                        inc=0;
                                    }
                                    else
                                    {
                                        cout<<"over 2";
                                        rm.hide();
                                        r1.hide();
                                        r1a.hide();
                                        r1b.hide();
                                        r1c.hide();
                                        r2.hide();
                                        r2a.hide();
                                        r2b.hide();
                                        r2c.hide();
                                        r3.hide();
                                        r3a.hide();
                                        r3b.hide();
                                        r3c.hide();
                                        r4.hide();
                                        r4a.hide();
                                        r4b.hide();
                                        r4c.hide();
                                        r5.hide();
                                        r5a.hide();
                                        R.hide();
                                        level.hide();

                                        fstream f,fout;
                                        int q;
                                        f.open("high_score.txt",ios::in|ios::out|ios::app);
                                        f>>q;
                                        if(q<p)
                                        {
                                            f.close();
                                            fout.open("high_score.txt",ios::out|ios::trunc);
                                            fout<<p;
                                            fout.close();
                                        }
                                        else
                                        {
                                            f.close();
                                        }
                                        gameover(p);
                                    }
                                    j++;
                                }
                                if(ch=='r')
                                {
                                    cont=check(rm,r1,r1a,r1b,r1c,r11,r11a);
                                    if(cont==true)
                                    {
                                        float b1=right(maxi,b,rm,r1,r1a,r1b,r1c,r2,r2a,r2b,r2c,r3,r3a,r3b,r3c,r4,r4a,r4b,r4c,r5,r5a,R,level);
                                        b=b1;
                                        inc=inc+b1;
                                        if(inc==-20)
                                        maxi=-20;
                                    }
                                    else
                                    {
                                        cout<<"over 3";
                                        rm.hide();
                                        r1.hide();
                                        r1a.hide();
                                        r1b.hide();
                                        r1c.hide();
                                        r2.hide();
                                        r2a.hide();
                                        r2b.hide();
                                        r2c.hide();
                                        r3.hide();
                                        r3a.hide();
                                        r3b.hide();
                                        r3c.hide();
                                        r4.hide();
                                        r4a.hide();
                                        r4b.hide();
                                        r4c.hide();
                                        r5.hide();
                                        r5a.hide();
                                        R.hide();
                                        level.hide();

                                        fstream f,fout;
                                        int q;
                                        f.open("high_score.txt",ios::in|ios::out|ios::app);
                                        f>>q;
                                        if(q<p)
                                        {
                                            f.close();
                                            fout.open("high_score.txt",ios::out|ios::trunc);
                                            fout<<p;
                                            fout.close();
                                        }
                                        else
                                        {
                                            f.close();
                                        }
                                        gameover(p);
                                    }
                                    j++;
                                }
                                if(ch=='l')
                                {
                                    cont=check(rm,r1,r1a,r1b,r1c,r11,r11a);
                                    if(cont==true)
                                    {
                                        float b1=left(maxi,b,rm,r1,r1a,r1b,r1c,r2,r2a,r2b,r2c,r3,r3a,r3b,r3c,r4,r4a,r4b,r4c,r5,r5a,R,level);
                                        b=b1;
                                        inc=inc+b1;
                                        if(inc==-20)
                                        maxi=-20;
                                    }
                                    else
                                    {
                                        cout<<"over 4 ";
                                        rm.hide();
                                        r1.hide();
                                        r1a.hide();
                                        r1b.hide();
                                        r1c.hide();
                                        r2.hide();
                                        r2a.hide();
                                        r2b.hide();
                                        r2c.hide();
                                        r3.hide();
                                        r3a.hide();
                                        r3b.hide();
                                        r3c.hide();
                                        r4.hide();
                                        r4a.hide();
                                        r4b.hide();
                                        r4c.hide();
                                        r5.hide();
                                        r5a.hide();
                                        R.hide();
                                        level.hide();

                                        fstream f,fout;
                                        int q;
                                        f.open("high_score.txt",ios::in|ios::out|ios::app);
                                        f>>q;
                                        if(q<p)
                                        {
                                            f.close();
                                            fout.open("high_score.txt",ios::out|ios::trunc);
                                            fout<<p;
                                            fout.close();
                                        }
                                        else
                                        {
                                            f.close();
                                        }
                                        gameover(p);
                                    }
                                    j++;
                                }
                                break;
                    case 2 :    if(GetAsyncKeyState(VK_LCONTROL))
                                {
                                    ch='l';
                                    cont=check(rm,r2,r2a,r2b,r2c,r22,r22a);
                                    if(cont==true)
                                    {
                                        b=left_when_pressed(rm,r1,r1a,r1b,r1c,r2,r2a,r2b,r2c,r3,r3a,r3b,r3c,r4,r4a,r4b,r4c,r5,r5a,R,level);
                                        inc=0;
                                    }
                                    else
                                    {
                                        cout<<"over 5";
                                        rm.hide();
                                        r1.hide();
                                        r1a.hide();
                                        r1b.hide();
                                        r1c.hide();
                                        r2.hide();
                                        r2a.hide();
                                        r2b.hide();
                                        r2c.hide();
                                        r3.hide();
                                        r3a.hide();
                                        r3b.hide();
                                        r3c.hide();
                                        r4.hide();
                                        r4a.hide();
                                        r4b.hide();
                                        r4c.hide();
                                        r5.hide();
                                        r5a.hide();
                                        R.hide();
                                        level.hide();

                                        fstream f,fout;
                                        int q;
                                        f.open("high_score.txt",ios::in|ios::out|ios::app);
                                        f>>q;
                                        if(q<p)
                                        {
                                            f.close();
                                            fout.open("high_score.txt",ios::out|ios::trunc);
                                            fout<<p;
                                            fout.close();
                                        }
                                        else
                                        {
                                            f.close();
                                        }
                                        gameover(p);
                                    }
                                    j++;
                                }
                                if(GetAsyncKeyState(VK_RCONTROL))
                                {
                                    ch='r';
                                    cont=check(rm,r2,r2a,r2b,r2c,r22,r22a);
                                    if(cont==true)
                                    {
                                        b=right_when_pressed(rm,r1,r1a,r1b,r1c,r2,r2a,r2b,r2c,r3,r3a,r3b,r3c,r4,r4a,r4b,r4c,r5,r5a,R,level);
                                        inc=0;
                                    }
                                    else
                                    {
                                        cout<<"over 6";
                                        rm.hide();
                                        r1.hide();
                                        r1a.hide();
                                        r1b.hide();
                                        r1c.hide();
                                        r2.hide();
                                        r2a.hide();
                                        r2b.hide();
                                        r2c.hide();
                                        r3.hide();
                                        r3a.hide();
                                        r3b.hide();
                                        r3c.hide();
                                        r4.hide();
                                        r4a.hide();
                                        r4b.hide();
                                        r4c.hide();
                                        r5.hide();
                                        r5a.hide();
                                        R.hide();
                                        level.hide();

                                        fstream f,fout;
                                        int q;
                                        f.open("high_score.txt",ios::in|ios::out|ios::app);
                                        f>>q;
                                        if(q<p)
                                        {
                                            f.close();
                                            fout.open("high_score.txt",ios::out|ios::trunc);
                                            fout<<p;
                                            fout.close();
                                        }
                                        else
                                        {
                                            f.close();
                                        }
                                        gameover(p);
                                    }
                                    j++;
                                }
                                if(ch=='r')
                                {
                                    cont=check(rm,r2,r2a,r2b,r2c,r22,r22a);
                                    if(cont==true)
                                    {
                                        float b1=right(maxi,b,rm,r1,r1a,r1b,r1c,r2,r2a,r2b,r2c,r3,r3a,r3b,r3c,r4,r4a,r4b,r4c,r5,r5a,R,level);
                                        b=b1;
                                        inc=inc+b1;
                                        if(inc==-20)
                                        maxi=-20;
                                    }
                                    else
                                    {
                                        cout<<"over 7";
                                        rm.hide();
                                        r1.hide();
                                        r1a.hide();
                                        r1b.hide();
                                        r1c.hide();
                                        r2.hide();
                                        r2a.hide();
                                        r2b.hide();
                                        r2c.hide();
                                        r3.hide();
                                        r3a.hide();
                                        r3b.hide();
                                        r3c.hide();
                                        r4.hide();
                                        r4a.hide();
                                        r4b.hide();
                                        r4c.hide();
                                        r5.hide();
                                        r5a.hide();
                                        R.hide();
                                        level.hide();

                                        fstream f,fout;
                                        int q;
                                        f.open("high_score.txt",ios::in|ios::out|ios::app);
                                        f>>q;
                                        if(q<p)
                                        {
                                            f.close();
                                            fout.open("high_score.txt",ios::out|ios::trunc);
                                            fout<<p;
                                            fout.close();
                                        }
                                        else
                                        {
                                            f.close();
                                        }
                                        gameover(p);
                                    }
                                    j++;
                                }
                                if(ch=='l')
                                {
                                    cont=check(rm,r2,r2a,r2b,r2c,r22,r22a);
                                    if(cont==true)
                                    {
                                        float b1=left(maxi,b,rm,r1,r1a,r1b,r1c,r2,r2a,r2b,r2c,r3,r3a,r3b,r3c,r4,r4a,r4b,r4c,r5,r5a,R,level);
                                        b=b1;
                                        inc=inc+b1;
                                        if(inc==-20)
                                        maxi=-20;
                                    }
                                    else
                                    {
                                        cout<<"over 8";
                                        rm.hide();
                                        r1.hide();
                                        r1a.hide();
                                        r1b.hide();
                                        r1c.hide();
                                        r2.hide();
                                        r2a.hide();
                                        r2b.hide();
                                        r2c.hide();
                                        r3.hide();
                                        r3a.hide();
                                        r3b.hide();
                                        r3c.hide();
                                        r4.hide();
                                        r4a.hide();
                                        r4b.hide();
                                        r4c.hide();
                                        r5.hide();
                                        r5a.hide();
                                        R.hide();
                                        level.hide();

                                        fstream f,fout;
                                        int q;
                                        f.open("high_score.txt",ios::in|ios::out|ios::app);
                                        f>>q;
                                        if(q<p)
                                        {
                                            f.close();
                                            fout.open("high_score.txt",ios::out|ios::trunc);
                                            fout<<p;
                                            fout.close();
                                        }
                                        else
                                        {
                                            f.close();
                                        }
                                        gameover(p);
                                    }
                                    j++;
                                }
                                break;
                    case 3 :    if(GetAsyncKeyState(VK_LCONTROL))
                                {
                                    ch='l';
                                    cont=check(rm,r3,r3a,r3b,r3c,r33,r33a);
                                    if(cont==true)
                                    {
                                        b=left_when_pressed(rm,r1,r1a,r1b,r1c,r2,r2a,r2b,r2c,r3,r3a,r3b,r3c,r4,r4a,r4b,r4c,r5,r5a,R,level);
                                        inc=0;
                                    }
                                    else
                                    {
                                        cout<<"over 9";
                                        rm.hide();
                                        r1.hide();
                                        r1a.hide();
                                        r1b.hide();
                                        r1c.hide();
                                        r2.hide();
                                        r2a.hide();
                                        r2b.hide();
                                        r2c.hide();
                                        r3.hide();
                                        r3a.hide();
                                        r3b.hide();
                                        r3c.hide();
                                        r4.hide();
                                        r4a.hide();
                                        r4b.hide();
                                        r4c.hide();
                                        r5.hide();
                                        r5a.hide();
                                        R.hide();
                                        level.hide();

                                        fstream f,fout;
                                        int q;
                                        f.open("high_score.txt",ios::in|ios::out|ios::app);
                                        f>>q;
                                        if(q<p)
                                        {
                                            f.close();
                                            fout.open("high_score.txt",ios::out|ios::trunc);
                                            fout<<p;
                                            fout.close();
                                        }
                                        else
                                        {
                                            f.close();
                                        }
                                        gameover(p);
                                    }
                                    j++;
                                }
                                if(GetAsyncKeyState(VK_RCONTROL))
                                {
                                    ch='r';
                                    cont=check(rm,r3,r3a,r3b,r3c,r33,r33a);
                                    if(cont==true)
                                    {
                                        b=right_when_pressed(rm,r1,r1a,r1b,r1c,r2,r2a,r2b,r2c,r3,r3a,r3b,r3c,r4,r4a,r4b,r4c,r5,r5a,R,level);
                                        inc=0;
                                    }
                                    else
                                    {
                                        cout<<"over 10";
                                        rm.hide();
                                        r1.hide();
                                        r1a.hide();
                                        r1b.hide();
                                        r1c.hide();
                                        r2.hide();
                                        r2a.hide();
                                        r2b.hide();
                                        r2c.hide();
                                        r3.hide();
                                        r3a.hide();
                                        r3b.hide();
                                        r3c.hide();
                                        r4.hide();
                                        r4a.hide();
                                        r4b.hide();
                                        r4c.hide();
                                        r5.hide();
                                        r5a.hide();
                                        R.hide();
                                        level.hide();

                                        fstream f,fout;
                                        int q;
                                        f.open("high_score.txt",ios::in|ios::out|ios::app);
                                        f>>q;
                                        if(q<p)
                                        {
                                            f.close();
                                            fout.open("high_score.txt",ios::out|ios::trunc);
                                            fout<<p;
                                            fout.close();
                                        }
                                        else
                                        {
                                            f.close();
                                        }
                                        gameover(p);
                                    }
                                    j++;
                                }
                                if(ch=='r')
                                {
                                    cont=check(rm,r3,r3a,r3b,r3c,r33,r33a);
                                    if(cont==true)
                                    {
                                        float b1=right(maxi,b,rm,r1,r1a,r1b,r1c,r2,r2a,r2b,r2c,r3,r3a,r3b,r3c,r4,r4a,r4b,r4c,r5,r5a,R,level);
                                        b=b1;
                                        inc=inc+b1;
                                        if(inc==-20)
                                        maxi=-20;
                                    }
                                    else
                                    {
                                        cout<<"over 11";
                                        rm.hide();
                                        r1.hide();
                                        r1a.hide();
                                        r1b.hide();
                                        r1c.hide();
                                        r2.hide();
                                        r2a.hide();
                                        r2b.hide();
                                        r2c.hide();
                                        r3.hide();
                                        r3a.hide();
                                        r3b.hide();
                                        r3c.hide();
                                        r4.hide();
                                        r4a.hide();
                                        r4b.hide();
                                        r4c.hide();
                                        r5.hide();
                                        r5a.hide();
                                        R.hide();
                                        level.hide();

                                        fstream f,fout;
                                        int q;
                                        f.open("high_score.txt",ios::in|ios::out|ios::app);
                                        f>>q;
                                        if(q<p)
                                        {
                                            f.close();
                                            fout.open("high_score.txt",ios::out|ios::trunc);
                                            fout<<p;
                                            fout.close();
                                        }
                                        else
                                        {
                                            f.close();
                                        }
                                        gameover(p);
                                    }
                                    j++;
                                }
                                if(ch=='l')
                                {
                                    cont=check(rm,r3,r3a,r3b,r3c,r33,r33a);
                                    if(cont==true)
                                    {
                                        float b1=left(maxi,b,rm,r1,r1a,r1b,r1c,r2,r2a,r2b,r2c,r3,r3a,r3b,r3c,r4,r4a,r4b,r4c,r5,r5a,R,level);
                                        b=b1;
                                        inc=inc+b1;
                                        if(inc==-20)
                                        maxi=-20;
                                    }
                                    else
                                    {
                                        cout<<"over 12";
                                        rm.hide();
                                        r1.hide();
                                        r1a.hide();
                                        r1b.hide();
                                        r1c.hide();
                                        r2.hide();
                                        r2a.hide();
                                        r2b.hide();
                                        r2c.hide();
                                        r3.hide();
                                        r3a.hide();
                                        r3b.hide();
                                        r3c.hide();
                                        r4.hide();
                                        r4a.hide();
                                        r4b.hide();
                                        r4c.hide();
                                        r5.hide();
                                        r5a.hide();
                                        R.hide();
                                        level.hide();

                                        fstream f,fout;
                                        int q;
                                        f.open("high_score.txt",ios::in|ios::out|ios::app);
                                        f>>q;
                                        if(q<p)
                                        {
                                            f.close();
                                            fout.open("high_score.txt",ios::out|ios::trunc);
                                            fout<<p;
                                            fout.close();
                                        }
                                        else
                                        {
                                            f.close();
                                        }
                                        gameover(p);
                                    }
                                    j++;
                                }
                                break;
                    case 4 :    if(GetAsyncKeyState(VK_LCONTROL))
                                {
                                    ch='l';
                                    cont=check_last(rm,r4,r4a,r4b,r4c,r5,r5a,r44,r44a,r55,r55a);
                                    if(cont==true)
                                    {
                                        b=left_when_pressed(rm,r1,r1a,r1b,r1c,r2,r2a,r2b,r2c,r3,r3a,r3b,r3c,r4,r4a,r4b,r4c,r5,r5a,R,level);
                                        inc=0;
                                    }
                                    else
                                    {
                                        cout<<"over 13";
                                        rm.hide();
                                        r1.hide();
                                        r1a.hide();
                                        r1b.hide();
                                        r1c.hide();
                                        r2.hide();
                                        r2a.hide();
                                        r2b.hide();
                                        r2c.hide();
                                        r3.hide();
                                        r3a.hide();
                                        r3b.hide();
                                        r3c.hide();
                                        r4.hide();
                                        r4a.hide();
                                        r4b.hide();
                                        r4c.hide();
                                        r5.hide();
                                        r5a.hide();
                                        R.hide();
                                        level.hide();

                                        fstream f,fout;
                                        int q;
                                        f.open("high_score.txt",ios::in|ios::out|ios::app);
                                        f>>q;
                                        if(q<p)
                                        {
                                            f.close();
                                            fout.open("high_score.txt",ios::out|ios::trunc);
                                            fout<<p;
                                            fout.close();
                                        }
                                        else
                                        {
                                            f.close();
                                        }
                                        gameover(p);
                                    }
                                    j++;
                                }
                                if(GetAsyncKeyState(VK_RCONTROL))
                                {
                                    ch='r';
                                    cont=check_last(rm,r4,r4a,r4b,r4c,r5,r5a,r44,r44a,r55,r55a);
                                    if(cont==true)
                                    {
                                        b=right_when_pressed(rm,r1,r1a,r1b,r1c,r2,r2a,r2b,r2c,r3,r3a,r3b,r3c,r4,r4a,r4b,r4c,r5,r5a,R,level);
                                        inc=0;
                                    }
                                    else
                                    {
                                        cout<<"over 14";
                                        rm.hide();
                                        r1.hide();
                                        r1a.hide();
                                        r1b.hide();
                                        r1c.hide();
                                        r2.hide();
                                        r2a.hide();
                                        r2b.hide();
                                        r2c.hide();
                                        r3.hide();
                                        r3a.hide();
                                        r3b.hide();
                                        r3c.hide();
                                        r4.hide();
                                        r4a.hide();
                                        r4b.hide();
                                        r4c.hide();
                                        r5.hide();
                                        r5a.hide();
                                        R.hide();
                                        level.hide();

                                        fstream f,fout;
                                        int q;
                                        f.open("high_score.txt",ios::in|ios::out|ios::app);
                                        f>>q;
                                        if(q<p)
                                        {
                                            f.close();
                                            fout.open("high_score.txt",ios::out|ios::trunc);
                                            fout<<p;
                                            fout.close();
                                        }
                                        else
                                        {
                                            f.close();
                                        }
                                        gameover(p);
                                    }
                                    j++;
                                }
                                if(ch=='r')
                                {
                                    cont=check_last(rm,r4,r4a,r4b,r4c,r5,r5a,r44,r44a,r55,r55a);
                                    if(cont==true)
                                    {
                                        float b1=right(maxi,b,rm,r1,r1a,r1b,r1c,r2,r2a,r2b,r2c,r3,r3a,r3b,r3c,r4,r4a,r4b,r4c,r5,r5a,R,level);
                                        b=b1;
                                        inc=inc+b1;
                                        if(inc==-20)
                                        maxi=-20;
                                    }
                                    else
                                    {
                                        cout<<"over 15";
                                        rm.hide();
                                        r1.hide();
                                        r1a.hide();
                                        r1b.hide();
                                        r1c.hide();
                                        r2.hide();
                                        r2a.hide();
                                        r2b.hide();
                                        r2c.hide();
                                        r3.hide();
                                        r3a.hide();
                                        r3b.hide();
                                        r3c.hide();
                                        r4.hide();
                                        r4a.hide();
                                        r4b.hide();
                                        r4c.hide();
                                        r5.hide();
                                        r5a.hide();
                                        R.hide();
                                        level.hide();

                                        fstream f,fout;
                                        int q;
                                        f.open("high_score.txt",ios::in|ios::out|ios::app);
                                        f>>q;
                                        if(q<p)
                                        {
                                            f.close();
                                            fout.open("high_score.txt",ios::out|ios::trunc);
                                            fout<<p;
                                            fout.close();
                                        }
                                        else
                                        {
                                            f.close();
                                        }
                                        gameover(p);
                                    }
                                    j++;
                                }
                                if(ch=='l')
                                {
                                    cont=check_last(rm,r4,r4a,r4b,r4c,r5,r5a,r44,r44a,r55,r55a);
                                    if(cont==true)
                                    {
                                        float b1=left(maxi,b,rm,r1,r1a,r1b,r1c,r2,r2a,r2b,r2c,r3,r3a,r3b,r3c,r4,r4a,r4b,r4c,r5,r5a,R,level);
                                        b=b1;
                                        inc=inc+b1;
                                        if(inc==-20)
                                        maxi=-20;
                                    }
                                    else
                                    {
                                        cout<<"over 16";
                                        rm.hide();
                                        r1.hide();
                                        r1a.hide();
                                        r1b.hide();
                                        r1c.hide();
                                        r2.hide();
                                        r2a.hide();
                                        r2b.hide();
                                        r2c.hide();
                                        r3.hide();
                                        r3a.hide();
                                        r3b.hide();
                                        r3c.hide();
                                        r4.hide();
                                        r4a.hide();
                                        r4b.hide();
                                        r4c.hide();
                                        r5.hide();
                                        r5a.hide();
                                        R.hide();
                                        level.hide();

                                        fstream f,fout;
                                        int q;
                                        f.open("high_score.txt",ios::in|ios::out|ios::app);
                                        f>>q;
                                        if(q<p)
                                        {
                                            f.close();
                                            fout.open("high_score.txt",ios::out|ios::trunc);
                                            fout<<p;
                                            fout.close();
                                        }
                                        else
                                        {
                                            f.close();
                                        }
                                        gameover(p);
                                    }
                                    j++;
                                }
                                break;
                }
            }
    }

}
void gameover(int p)
{
//initCanvas("Brave Brick",400,600);
Rectangle bkgroud(200,300,400,600);
bkgroud.setFill();
bkgroud.setColor(COLOR(16,25,32));
Circle gamover(200,170,81);
gamover.setFill();
gamover.setColor(COLOR(255,255,255));
Text gameovr(200,170,"Game Over");
gameovr.setFill();
gameovr.setColor(COLOR(255,0,0));
Rectangle score(200,330,200,80);
score.setFill();
score.setColor(COLOR(255,255,255));
Text yourscore(200,310,"Your Score : ");
Text your_score(250,310,p);
yourscore.setFill();
yourscore.setColor(COLOR(255,0,255));
fstream fin;
fin.open("high_score.txt",ios::in);
int q=0;
fin>>q;
Text highscore(180,350,"High Score : ");
Text high_score(250,350,q);
fin.close();
highscore.setFill();
highscore.setColor(COLOR(0,0,255));
Circle c5(300,330,40);
c5.setFill();
c5.setColor(COLOR(255,255,255));
Circle c6(100,330,40);
c6.setFill();
c6.setColor(COLOR(255,255,255));
Circle plygn(200,450,50);
plygn.setFill();
plygn.setColor(COLOR(255,255,255));
Text playagain(200,450,"Play Again");
playagain.setFill();
playagain.setColor(COLOR(0,150,0));
Rectangle exitfrom(200,550,100,50);
exitfrom.setFill();
exitfrom.setColor(COLOR(255,255,255));
Text exit2(200,550,"EXIT");
exit2.setFill();
exit2.setColor(COLOR(255,0,0));

while(true){
    int clickPos=getClick();
    int cx=clickPos/65536;
    int cy=clickPos%65536;

    if(cx>150&&cx<250&&cy>400&&cy<500)  //Play Again

 {
    bkgroud.hide();
    gamover.hide();
    gameovr.hide();
    score.hide();
    yourscore.hide();
    highscore.hide();
    c5.hide();
    c6.hide();
    plygn.hide();
    playagain.hide();
    exitfrom.hide();
    exit2.hide();
    high_score.hide();
    your_score.hide();
    players();

 }
    if(cx>100&&cx<300&&cy>525&&cy<575)
{
exit(0);
}

 }
 wait(1000000000);
}

main_program{
initCanvas("Brave Brick",400,600);
//for(int f=0;f<8888;f++){
    Rectangle bkgrd(200,300,400,600);
    bkgrd.setFill();
    bkgrd.setColor(COLOR(16,25,32));
    Rectangle play(200,180,150,150);
    play.setFill();
    play.setColor(COLOR(255,255,255));
    Rectangle play2(200,180,90,90);
    play2.setFill();
    play2.setColor(COLOR(0,0,0));
    play2.rotate(0.785375);
    Text playgame(200,180,"Play Game");
    playgame.setFill();
    playgame.setColor(COLOR(0,120,0));
    Rectangle highscore(200,310,170,50);
    highscore.setFill();
    highscore.setColor(COLOR(255,255,255));
    fstream fin;
    fin.open("high_score.txt",ios::in);
    int q=0;
    fin>>q;
    Text highscoretillnow(180,310,"High Score : ");
    Text highscore_tillnow(250,310,q);
    highscoretillnow.setFill();
    highscoretillnow.setColor(COLOR(0,180,195));
    Circle c1(285,310,25);
    c1.setFill();
    c1.setColor(COLOR(255,255,255));
    Circle c2(115,310,25);
    c2.setFill();
    c2.setColor(COLOR(255,255,255));
    Rectangle inst(200,385,150,50);
    inst.setFill();
    inst.setColor(COLOR(255,255,255));
    Text instr(200,385,"Instructions");
    instr.setFill();
    instr.setColor(COLOR(0,0,255));
    Circle c3(275,385,25);
    c3.setFill();
    c3.setColor(COLOR(255,255,255));
    Circle c4(125,385,25);
    c4.setFill();
    c4.setColor(COLOR(255,255,255));
    Rectangle exit1(200,450,100,40);
    exit1.setFill();
    exit1.setColor(COLOR(255,255,255));
    Text exits(200,450,"Exit");
    exits.setFill();
    exits.setColor(COLOR(255,0,0));

    while(true){

    int clickPos=getClick();
    int cx=clickPos/65536;
    int cy=clickPos%65536;




    if(cx>125&&cx<275&&cy>105&&cy<255)  //Play Game

    {
        playgame.hide();
        instr.hide();
        exits.hide();
        bkgrd.hide();
        play.hide();
        play2.hide();
        inst.hide();
        exit1.hide();
        highscore.hide();
        highscoretillnow.hide();
        highscore_tillnow.hide();
        players();
    }
  // Instructions
    if(cx>100&&cx<300&&cy>360&&cy<410){
        playgame.hide();
        instr.hide();
        exits.hide();
        bkgrd.hide();
        play.hide();
        play2.hide();
        inst.hide();
        exit1.hide();
        Rectangle bkgrud(200,300,400,600);
        bkgrud.setFill();
        bkgrud.setColor(COLOR(255,255,255));
        Rectangle back1(30,30,60,60);
        back1.setFill();
        back1.setColor(COLOR(0,0,0));
        Text bk1(30,30,"< BACK");
        Text instructions1(200,200,"1.Tap left arrow key to make the brick jump left. ");
        Text instructions2(200,250,"2.Tap right arrow key to make the brick jump right. ");
        Text instructions3(200,300,"3.Avoid hitting obstacles and platforms. ");
        Text instructions4(200,350,"4.Pass through platforms to increase your score. ");
    int clickPos=getClick();
    int hx=clickPos/65536;
    int hy=clickPos%65536;
        if(hx>0&&hx<60&&hy>0&&hy<60){
        bkgrud.hide();
        back1.hide();
        bk1.hide();
        instructions1.hide();
        instructions2.hide();
        instructions3.hide();
        instructions4.hide();
        playgame.show();
        instr.show();
        exits.show();
        bkgrd.show();
        play.show();
        play2.show();
        inst.show();
        exit1.show();
        highscore.show();
        highscoretillnow.show();}}
    if(cx>150&&cx<250&&cy>430&&cy<470){
    exit(0);

}
}
}




