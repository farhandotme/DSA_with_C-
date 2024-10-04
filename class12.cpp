#include <iostream>
using namespace std;

// void rev(){
//	int n;
//	cout<<"Enter the size: ";
//	cin>>n;
//	int arr[n], rev[n], j = 0;
//	for(int i = 0; i<n; i++){
//		cin>>arr[i];
//	}
//	for(int i=n-1; i>=0; i--){
//		rev[j] = arr[i];
//		j++;
//	}
//	for(int i=0; i<n; i++){
//		cout<<rev[i];
//	}
// }
//
//
// main(){
//	rev();
// }

// note : important

void revArr(int size, int arr[])
{
  int a;
  int z = size - 1;
  int temp;
  while (a < z)
  {
    temp = arr[a];
    arr[a] = arr[z];
    arr[z] = temp;
    a++;
    z--;
  }
}

main()
{
  int size, i;
  cout << "Enter the size : ";
  cin >> size;
  int arr[size];
  for (i = 0; i < size; i++)
  {
    cin>>arr[i];
  }
  revArr(size, arr);
  for (i = 0; i<size; i++)
  {
    cout << "\n"<<arr[i];
  }
}
