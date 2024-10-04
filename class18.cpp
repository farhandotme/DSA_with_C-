#include<iostream>
using namespace std;
class xyz
{
	public:
		string name;
		string address;
		string course;
		int age;
};

main()
{
	xyz ob;
	ob.name = "farhan";
	ob.address = "bhangagarh";
	ob.course = "C++";
	ob.age = 21;
	cout<< ob.name;
	cout<< "\n" <<ob.address;
	cout<< "\n"<<ob.course;
	cout<< "\n"<<ob.age;
}
