#include <iostream>
#include "function-1-2.cpp"
using namespace std;

int main()
{
int arr1[6] = {1, 3, 4, 5, 9, 6}; 
int arr2[8] = {2, 5, 18, 9, 20, 4, 10, 8};

cout << "\nThe array 1 is: ";
for(int i = 0; i < 6; i++) 
{
cout << arr1[i] << ", ";
}
cout << "\nThe average is: " << average(arr1, 6) << endl; 

cout << "\nThe array 2 is: ";
for(int i = 0; i < 8; i++) 
{
cout << arr2[i] << ", ";
}
cout << "\nThe average is: " << average(arr2, 8) << endl; 
return 0;
}