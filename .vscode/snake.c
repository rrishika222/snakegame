#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int width=20,height=20;
int gameover=0,score,fruitX,fruitY,x,y,flag;
void setup()
{  gameover=0;
    score=0;
    x=height/2;
  y=width/2;
 label1:
  fruitX=rand()%20;
   if(fruitX==0)
   goto label1;
   label2:
  fruitY=rand()%20;
   if(fruitY==0)
   goto label2;
}
void draw()
{
     int i,j;
     system("cls");
   for (i=0;i<=height;i++)
   { { for (j=0;j<=width;j++)
       if(i==0||i==height||j==0||j==width)
      { printf("*");}
        else
        { if(i==x && j==y)
           {printf("s");}
            else if (i==fruitX && j==fruitY)
            {
              printf("o");
            }
            else 
            {printf(" ");}
            }
         
         } 
         printf("\n");
         }
}
void input()
{ 
  if(kbhit())
  { switch(getch())
    {
      case 'a':
        flag =1;
       break;
       case 's':
       flag= 2;
       break;
       case 'w':
       flag=3;
       break;
       case 'z':
       flag=4;
       break;
      case 'x':
       gameover=1;
       break;
    }
  }

}
void logic()
{ switch(flag)
   {case 1:
    y--;
    break;
    case 2 :
    y++;
    break;
    case 3 :
    x--;
    break;
    case 4:
    x++;
    break;}
    if(x>height || y>width || x<0 || y<0)
   { gameover=1;}
    else if (x==fruitX && y==fruitY)
    {  score+=score+10;
      label3:
  fruitX=rand()%20;
   if(fruitX==0)
   goto label3;
   label4:
  fruitY=rand()%20;
   if(fruitY==0)
   goto label4;
   
    }
   

}
int main ()
{  int b,d;
  setup();
    while(!gameover)
    {draw();
    input();
    logic();
    for(b=0;b<10000;b++)
     {
          for(d=0;d<100000;d++)
          {    }
     }
    
    }
   
    printf("YOUR SCORE IS %d",score);
    return 0;
}