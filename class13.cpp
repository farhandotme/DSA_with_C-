// #include <iostream>
// using namespace std;

// // swipe of numbers

// main()
// {
//   int a, b;
//   cout << "enter the numbers : ";
//   cin >> a >> b;
//   cout << "Actual one: " << a << b;
//   int temp = 0;
//   temp = a;
//   a = b;
//   b = temp;
//   cout << "\nswipe : " << a << b;
// }

// The stream library allows us to work files.Use the stream library include both the standred <iostream> and <fstream>.There are three classes include <fstream> Library which are use to create, write, or read files. <oftream> create and write to files the <ifstream> read from files fstream. The combination of <ofstream> and <ifstream>.

#include <iostream>
#include <fstream>
using namespace std;
main()
{
  ofstream a("a1.txt");
  a << "Welcome to world";
  a.close();
}
