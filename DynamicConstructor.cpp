

#include <iostream>
using namespace std;

class rscoe {
	const char* p;

public:
	// default constructor
	rscoe()
	{

		// allocating memory at run time
		p = new char[6];
		p = "rscoe";
	}

	void display() { cout << p << endl; }
};

int main()
{
	rscoe obj;
	obj.display();
}
