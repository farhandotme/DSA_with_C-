#include<iostream>
using namespace std;

//class cars{
//	public:
//		string brand;
//		string model;
//		int year;
//		
//};
//main(){
//	cars ob1;
//	ob1.brand = "maruti";
//	ob1.model = "swift";
//	ob1.year = 2013;
//	
//	cars ob2;
//	ob2.brand = "toyota";
//	ob2.model = "fortuner";
//	ob2.year = 2015;
//	
//	cout<<ob1.brand;
//	cout<<"\n"<<ob1.model;
//	cout<<"\n"<<ob1.year;
//	cout <<endl;
//	cout<<"\n"<<ob2.brand;
//	cout<<"\n"<<ob2.model;
//	cout<<"\n"<<ob2.year;
//}


//Inside class defination----
//class farhan{
//	public:
//		void xyz(){
//		for(int i =1; i<=10; i++){
//			cout<<"\n"<<i;
//		}
//	};
//};
//
//main(){
//	farhan ob;
//	ob.xyz();
//}


//Outside class defination------
class abc{
	public:
		void xyz();
};

void abc::xyz(){
	for(int i=1;i<=10;i++){
		cout<<"\n"<<i;
	}
}

main(){
	abc ob;
	ob.xyz();
}



