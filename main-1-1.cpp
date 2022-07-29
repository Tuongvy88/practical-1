#include <iostream>
#include "function-1-1.cpp" //include function
using namespace std;

int main()
{
int arr1[6] = {2, 3, 4, 6, 11, 4}; //sample test arays
int arr2[8] = {12, 13, 48, 6, 11, 4, 7, 10};

cout << "\nThe array 1 is: ";
for(int i = 0; i < 6; i++) //print array
{
cout << arr1[i] << ", ";
}
cout << "\nThe sum is: " << sum_array(arr1, 6) << endl; //print sum

cout << "\nThe array 2 is: ";
for(int i = 0; i < 8; i++) //print array
{
cout << arr2[i] << ", ";
}
cout << "\nThe sum is: " << sum_array(arr2, 8) << endl; //print sum
return 0;
}