#include <iostream>
#include <fstream>
using namespace std;
main()
{
  // ofstream a("a1.c");
  // a << "#include<stdio.h>";
  // a.close();
  string a;
  ifstream myReadFile("a1.c");
  while (getline(myReadFile, a))
  {
    cout << a;
  }
  myReadFile.close();
}


// NIC and Arious and TechVerible