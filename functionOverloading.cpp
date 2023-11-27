#include <iostream>

using namespace std;
 
 class A{

void add(int a, int b) //first function
{

  cout << "sum = " << (a + b);
}
 

void add(double a, double b) //second function
{

    cout << endl << "sum = " << (a + b);
}
};

int main()
{
A a1,b1;   //creating objects 
    a1.add(10, 2); //calling first function 

    b1.add(5.3, 6.2);  //calling second function
 

    return 0;
}
