#include <iostream>
#include "function-1-3.cpp"
using namespace std;

int main()
{
int arr[8] = {12, 10, 48, 6, 10, 4, 12, 10}; //sample test aray

cout << "\nThe array is: ";
for(int i = 0; i < 8; i++) //print array
{
cout << arr[i] << ", ";
}
cout << "\nThe count of is 10 is : " << count(arr, 8, 10) << endl; //print count of 10 in array
cout << "\nThe count of is 12 is : " << count(arr, 8, 12) << endl; //print count of 12 in array
cout << "\nThe count of is 3 is : " << count(arr, 8, 3) << endl; //print count of 3 in array
return 0;
}