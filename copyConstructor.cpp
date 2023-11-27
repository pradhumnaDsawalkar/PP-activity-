#include<iostream>
using namespace std;
class stud
{
int sno; char name[40];
Public:
stud(stud &s)//Copy Constructor
{
sno=s;
strcpy(sname,n);
}
stud(){
  sno=0;
  strcpy(sname,"new");
}
void getinfo()
{
cin>> sno;
gets (sname);
}
void showinfo()
{
cout<< sno;
puts(sname);
}
};
void main()
{
stud obj; //  default constructor invoked 
stud obj1(23, "Nisha"); // parameterized constructor used
stud obj2=obj; // copy constructor used
stud obj3=objl; // copy constructor used
obj2.showinfo(); // displays the default given values
obj3.showinfo();// displays parametrized values
}
