#include <iostream>
#include "function-1-4.cpp"
using namespace std;

int main()
{
int arr1[6] = {10, 20, 30, 40, 50}; //sample test arays
int arr2[8] = {2, 4, 6, 8, 10};

cout << "\nThe array 1 is: ";
for(int i = 0; i < 5; i++) //print array
{
cout << arr1[i] << ", ";
}
cout << "\nThe array 2 is: ";
for(int i = 0; i < 5; i++) //print array
{
cout << arr2[i] << ", ";
}

cout << "\nThe sum of two arrays is : " << sum_two(arr1, arr2, 5) << endl; //print sum of two arrays
return 0;
}

