#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
#include<conio.h>
#include<process.h>

void man()
{
       clearviewport();
       circle(500,100,30);
       circle(490,90,7);
       circle(510,90,7);
       line(490,127,490,170);
       line(510,127,510,170);
       arc(500,115,190,10,10);
       line(490,170,510,170);
       line(500,170,480,200);
       line(500,170,520,200);
       line(490,127,450,145);
       line(510,127,550,145);
}       
void hang1()
{
 clearviewport();
       circle(500,100,30);
       circle(490,90,7);
       circle(510,90,7);
       line(490,127,490,170);
       line(510,127,510,170);
       arc(500,115,10,180,10);
       line(490,170,510,170);
       line(500,170,480,200);
       line(500,170,520,200);
       line(490,127,450,145);
       line(510,127,550,145);
       ellipse(500, 100,60, 60, 35, 40);
       circle(500,50,10);
       circle(500,35,5);
       line(500,35,500,0); 
}
void hang2()
{
      clearviewport();
       circle(500,100,30);
       circle(490,90,7);
       circle(510,90,7);
       line(490,127,490,170);
       line(510,127,510,170);
       circle(500,113,7);
       line(490,170,510,170);
       line(500,170,480,200);
       line(500,170,520,200);
       line(490,127,450,145);
       line(510,127,550,145);
       ellipse(500, 130,130, 60, 20, 5);
       line(500,70,500,0); 
}
void hang3()
{
        clearviewport();
       circle(510,100,30);
        line(490,90,500,95);
       line(520,90,530,95);
       line(490,127,490,170);
       line(510,127,510,170);
       line(500,110,520,117);
       line(490,170,510,170);
       line(500,170,480,200);
       line(500,170,520,200);
       line(490,120,480,155);
       line(510,127,520,155);
       ellipse(500, 130,130, 60, 15, 5);
       line(500,70,500,0); 
}
char ques1()
{
     char ch;
       outtextxy(10,300,"Q1. Which statement is most appropriate for C++ language ?");
       delay(1000);
       outtextxy(10,320,"A. Type less language");
       delay(1000);
       outtextxy(10,340,"B. Statically types language");
       delay(1000);
       outtextxy(10,360,"C. Dynamiccaly typed language");
       delay(1000);
       outtextxy(10,380,"D. Both B and C");
       delay(1000);
       outtextxy(10,400,"Pres A,B,C or D to answer");
       ch=getch();
       return ch;
}
char ques2()
{
     char ch;
     outtextxy(10,300,"Q2. What is the implicit pointer that is passed as the first argument for nonstatic member functions ?");
     delay(1000);
     outtextxy(10,320,"A. Self pointer");
     delay(1000);
     outtextxy(10,340,"B. std::auto_ptr pointer");
     delay(1000);
     outtextxy(10,360,"C. myself pointer");
     delay(1000);
     outtextxy(10,380,"D. this pointer");
     delay(1000);
     ch=getch();
     return ch;
}
           
char ques3()
{
     char ch;
     outtextxy(10,300,"Q3. Which of the following operator can not be overloaded ?");
     delay(1000);
     outtextxy(10,320,"A. Scope resolution(::) operator");
     delay(1000);
     outtextxy(10,340,"B. Arrow(->) operator");
     delay(1000);
     outtextxy(10,360,"C. Equality(==) operator");
     delay(1000);
     outtextxy(10,380,"D. Assignment(=) operator");
     delay(1000);
     ch=getch();
     return ch;
}     
char ques4()
{
     char ch;
     outtextxy(10,300,"Q4. Which of the following is not a feature of C++ ?");
     delay(1000);
     outtextxy(10,320,"A. Operator overloading");
     delay(1000);
     outtextxy(10,340,"B. Namespaces");
     delay(1000);
     outtextxy(10,360,"C. Inheritance");
     delay(1000);
     outtextxy(10,380,"D. Reflection");
     delay(1000);
     ch=getch();
     return ch;
}
int main()
{
    char ch;
    initwindow(1000, 600, "Hangman game");
    setcolor(BLUE);
    settextstyle(4,0,5);
    outtextxy(200,300,"H");
    delay(1000);
    outtextxy(250,300,"A");
    delay(1000);
    outtextxy(300,300,"N");
    delay(1000);
    outtextxy(350,300,"G");
    delay(1000);
    outtextxy(400,300,"M");
    delay(1000);
    outtextxy(450,300,"A");
    delay(1000);
    outtextxy(500,300,"N");
    delay(1000);
    clearviewport();
    setcolor(WHITE);
    settextstyle(4,0,3);
    outtextxy(10,10,"INSTRUCTION");
    settextstyle(3,0,1);
    outtextxy(10,40,"1. This game consists of some multiple choise questions");
    outtextxy(10,60,"2. For every wrong answer, the man gets closer to being hung");
    outtextxy(10,80,"3. User have to correctly answer the questions and save the man to be hanged");
    outtextxy(10,100,"4. If you answered 3 times wrong then you will lose the game");
    outtextxy(10,120,"Press ENTER to START the game and ESC to ABORT");
    ch=getch();
    if(ch==27)
     exit(0);
    if(ch==13)
    {
       clearviewport();
       circle(500,100,30);
       circle(490,90,7);
       circle(510,90,7);
       line(490,127,490,170);
       line(510,127,510,170);
       arc(500,115,190,10,10);
       line(490,170,510,170);
       line(500,170,480,200);
       line(500,170,520,200);
       line(490,127,450,145);
       line(510,127,550,145);
       delay(200);
       clearviewport();
       circle(500,100,30);
       circle(490,90,7);
       circle(510,90,7);
       line(490,127,490,170);
       line(510,127,510,170);
       arc(500,115,190,10,10);
       line(490,170,510,170);
       line(500,170,480,200);
       line(500,170,520,200);
       line(490,127,450,145);
       line(510,127,560,135);
       delay(200);
       clearviewport();
       circle(500,100,30);
       circle(490,90,7);
       circle(510,90,7);
       line(490,127,490,170);
       line(510,127,510,170);
       arc(500,115,190,10,10);
       line(490,170,510,170);
       line(500,170,480,200);
       line(500,170,520,200);
       line(490,127,450,145);
       line(510,127,550,145);
       delay(200);
       clearviewport();
       circle(500,100,30);
       circle(490,90,7);
       circle(510,90,7);
       line(490,127,490,170);
       line(510,127,510,170);
       arc(500,115,190,10,10);
       line(490,170,510,170);
       line(500,170,480,200);
       line(500,170,520,200);
       line(490,127,450,145);
       line(510,127,560,135);
       delay(200);
       clearviewport();
       circle(500,100,30);
       circle(490,90,7);
       circle(510,90,7);
       line(490,127,490,170);
       line(510,127,510,170);
       arc(500,115,190,10,10);
       line(490,170,510,170);
       line(500,170,480,200);
       line(500,170,520,200);
       line(490,127,450,145);
       line(510,127,550,145);
       delay(200);
       ch=ques1();
       if(ch=='B'||ch=='b')
       {
           man();
           outtextxy(400,400,"Well Done...!!!");         
           delay(1500);
           man();
           ch=ques2();
           if(ch=='D'||ch=='d')
           {
               man();
               outtextxy(400,400,"Well Done...!!!");         
               delay(1500);
               man();
               ch=ques3();
               if(ch=='A'||ch=='a')
               {
                   man();
                   outtextxy(400,400,"Well Done...!!!");         
                   delay(1500);
                   man();
                   ch=ques4();
                   if(ch=='D'||ch=='d')
                   {
                      man();
                      outtextxy(400,400,"You Won..!!!!");         
                      delay(1500);
                   }
                   else
                   {
                       hang1();
                       outtextxy(400,400,"You saved the man and won the game");
                   }
               }
               else
               {
                   hang1();
                   outtextxy(400,400,"Wrong answer...!!!");         
                   delay(1500);
                   hang1();
                   ch=ques4();
                   if(ch=='D'||ch=='d')
                   {
                      hang1();
                      outtextxy(400,400,"You saved the man and won the game");         
                      delay(1500);
                   }
                   else
                   {
                       hang2();
                       outtextxy(400,400,"You saved the man and won the game");
                   }
               }
           }
           else
           {
               hang1();
               outtextxy(400,400,"Wrong answer..!!!");
               delay(1500);
               hang1();
               ch=ques3();
               if(ch=='A'||ch=='a')
               {
                   hang1();
                   outtextxy(400,400,"Well Done...!!!");         
                   delay(1500);
                   hang1();
                   ch=ques4();
                   if(ch=='D'||ch=='d')
                   {
                      hang1();
                      outtextxy(400,400,"You saved the man and won the game");         
                      delay(1500);
                   }
                   else
                   {
                       hang2();
                       outtextxy(400,400,"You saved the man and won the game");
                   }
               }
               else
               {
                   hang2();
                   outtextxy(400,400,"Wrong answer...!!!");         
                   delay(1500);
                   hang2();
                   ch=ques4();
                   if(ch=='D'||ch=='d')
                   {
                      hang2();
                      outtextxy(400,400,"You saved the man and won the game");         
                      delay(1500);
                   }
                   else
                   {
                       hang3();
                       outtextxy(400,400,"You lose");
                   }
               }
           }

               
               
       }
       else
       {
           hang1();
           outtextxy(400,400,"Wrong answer...!!!");
           delay(1500);
           hang1();
           ch=ques2();
           if(ch=='D'||ch=='d')
           {
               hang1();
               outtextxy(400,400,"Well Done...!!!");         
               delay(1500);
               hang1();
               ch=ques3();
               if(ch=='A'||ch=='a')
               {
                   hang1();
                   outtextxy(400,400,"Well Done...!!!");         
                   delay(1500);
                   hang1();
                   ch=ques4();
                   if(ch=='D'||ch=='d')
                   {
                      hang1();
                      outtextxy(400,400,"You saved the man and won the game");         
                      delay(1500);
                   }
                   else
                   {
                       hang2();
                       outtextxy(400,400,"You saved the man and won the game");
                   }
              }
              else
              {
                   hang2();
                   outtextxy(400,400,"Wrong answer...!!!");         
                   delay(1500);
                   hang2();
                   ch=ques4();
                   if(ch=='D'||ch=='d')
                   {
                      hang2();
                      outtextxy(400,400,"You saved the man and won the game");         
                      delay(1500);
                   }
                   else
                   {
                       hang3();
                       outtextxy(400,400,"You lose");
                   }
               }
           }
           else
           {
               hang2();
               outtextxy(400,400,"Wrong answer..!!!");
               delay(1500);
               hang2();
               ch=ques3();
               if(ch=='A'||ch=='a')
               {
                   hang2();
                   outtextxy(400,400,"Well Done...!!!");         
                   delay(1500);
                   hang2();
                   ch=ques4();
                   if(ch=='D'||ch=='d')
                   {
                      hang2();
                      outtextxy(400,400,"You saved the man and won the game");         
                      delay(1500);
                   }
                   else
                   {
                       hang3();
                       outtextxy(400,400,"You lose");
                   }
               }
               else
               {
                   hang3();
                   outtextxy(400,400,"You lose");         
                   delay(1500);
               }
           }
           
       }
       
}
getch();
}
