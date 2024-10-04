#include <iostream>
using namespace std;

//main(){
//  int num = 20;
//  cout<<num;
//  cout<<"\n"<<&num;
//  string name = "farhan";
//  string *ptr= &name;
//  cout<<"\n"<<name;
//  cout<<"\n"<<&name;
//  cout<<"\n"<<ptr;
//}

//main(){
//	int a=45;
//	int *pr=&a;
//	int b=76;
//	int c=35;
//	int d=12;
//	int avg = (a+b+c+d)/4;
//	cout<<"\n"<<avg;
//	int *p = &avg;
//	cout<<"\n"<<p;
//}


//main()
//{
//	int num;
//	cout << "Enter the number : ";
//	cin >> num;
//	int arr[num];
//	for (int i = 0; i < num; i++)
//	{
//	 cin >> arr[i];
//	}
//	int l = arr[0];
//	for (int i = 0; i < num; i++)
//	{
//	 if (arr[i] > l)
//	 {
//	   l = arr[i];
//	 }
//	}
//	cout << "The largest number is : " << l;
//	int *p = &l;
//	cout<<"\nThe address is : "<<p;
//}


main(){
	int arr[20] = {1,2,3,4,5,6,7,8,9};
	int *ptr;
	ptr = arr;
	cout<<"\n"<<*(ptr+3);
	int a = 23;
	int *p = &a;
	*p=*p * 3;
	cout<<"\n"<<a;
	cout<<"\n"<<p;
}
