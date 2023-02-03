#include <iostream>
class Pen{
public:
std::string color;
};
int main{
	using namespace std;
	cout << "Test v4: OK";
	Pen pen;
	pen.color ="FFFFFF";
	cout<<"pen.color="<<pen.color;
return 0;
}