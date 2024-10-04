#include <iostream>
using namespace std;

void xyz()
{
	int arr[3] = {5, 10, 20};
	int *ptr;
	ptr = arr;
	for (int i = 0; i < 3; i++)
	{
		cout << "\n"<< ptr<<ptr[i];
	}
}

main()
{
	xyz();
}
