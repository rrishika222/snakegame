/*#include<iostream>
using namespace std;
class reverse
{ int n;
public:
void input();
void output();

};
void reverse :: input()
{
  cout<<"Enter the number"<<endl;
  cin>>n;
}
void reverse :: output ()
{ int a,r=0,i=100;

  while(n>0)
 {  a=n%10;
   r=r+(a*i);
   i=i/10;
   n=n/10;

}
cout<<"The reverse number : "<<r;
}
int main()
{ reverse x;
 x.input();
 x.output();
 return 0;
}*/

/* Operator Overloading
#include<iostream>
using namespace std;
class Complex
{ private:
    int x,y;
  public:
  Complex()
  { }
  Complex(int a, int b)
  { x=a;y=b;
  }
  Complex add(Complex b)
  { Complex temp;
    temp.x= x+b.x;
    temp.y=y+b.y;
    return temp;
  }
  void output()
  { cout<<"The value of a is is : "<<x<<" b is "<<y;

  }


};

int main()
{ Complex c1(4,8);
  Complex c2(5,10);
  Complex c3;
  c3=c1.add(c2);
  c2.output();


return 0;
}*/

