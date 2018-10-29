#include <iostream>

using namespace std;


void linearSearch(int* arr, int size, int num);
int main() {
  int num = 2, size = 5;
//   cout<<"Enter the array size: ";
  //cin>>size;
  int arr[] =  {9, 3, 5, 2, 1 };
//   cout<<"Enter Array Elements: ";
//   for(int i = 0; i < size; i++){
//     cin>>arr[i];
//   }
  cout<<"Enter the number to be searched: ";
//  cin>>num;
  linearSearch(arr, size, num);
  return 0;
}

void linearSearch(int* arr, int size, int num) {
  for(int i = 0; i < size; i++) {
      if(arr[i] == num) {
         cout<<num<<" found at position "<<i+1;
         return;
      }
  }
  cout<<"Number not found..!!";
}
