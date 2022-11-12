#include<iostream>
using namespace std;
class clock
{
int h,m;
public:
void read_time( );
void show_time( );
void add_time(clock t1,clock t2);
};
void clock::read_time()
{
cout<<"Enter hrs: ";
cin>>h;
cout<<"Enter mins: ";
cin>>m;
}
void clock::show_time()
{
cout<<"\nhrs: "<<h<<"\nmins: "<<m;
}
void clock::add_time(clock t1,clock t2)
{
 int H, M;
 H=t1.h+t2.h;
 M=t1.m+t2.m;
 if(M>=60)
 {
 H=H+1;
 M=M-60; 
}
 cout<<"\ntotal hrs= "<<H<<"\ntotal mins= "<<M;
};
int main()
{ clock t1,t2,c;
t1.read_time();
t2.read_time();
t1.show_time();
t2.show_time();
c.add_time(t1,t2);
return 0;
}