#include<iostream>
using namespace std;
class stud
{
int sno; char name[40];
Public:
stud(int s, char n )//Paramerized Constructor
{
sno=s;
strcpy(sname,n);
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
stud obj (1,"Ashu"); // Parameterized constructor invoked 
obj.showinfo(); // displays the value of sno as 1 and sname as "Ashu" 
obj.getinfo(); // reads the user given value from the user 
obj.showinfo(); // displays the user given values
}
