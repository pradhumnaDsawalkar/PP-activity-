#include <iostream>

class ABC
{
private:
     int m_abc;
public:
    ABC(int abc)
    {
       m_abc = abc;                                         // parameterised constructor
    }
    ABC operator +(int value);                             // declared operator function
    
    int getABC() const 
    { 
        return m_abc;
    } 
    
};

ABC ABC::operator +(int value)
{ 
    return ABC(m_abc + value);
}

int main()
{
    ABC a1(6);                                               // create object and passed argument
    ABC a2=a1+2;
    
    std::cout << "I have " << a2.getABC()<<" rupees.\n";       // display output
    return 0;
}
