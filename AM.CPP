//program to resolve ambiguity that whis display method is invoked
#include<iostream.h>
#include<conio.h>
class M
{
   public:
   void display()
   {
      cout<<endl<<"M";
   }
};
class N
{
   public:
   void display()
   {
      cout<<endl<<"N";
   }
};
class P:public M,public N
{
   public:
   void display()
   {
      cout<<endl<<"P";
   }
};
int main()
{
  clrscr();
  P obj;
  obj.display();
  obj.M::display();
  obj.N::display();
  obj.P::display();
  getch();
  return 0;
}

