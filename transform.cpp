#include <iostream>
#include <math.h>
using namespace std;

int main() {


	int R, D, i =0;

	int array[100] = {};

	cout<<"Enter Decimal value to be converted:\n";
	cin>> D;
	while(D>0){

		R=D%2;
		array[i]=R;
		i++;
		D=(D-R)/2;
	}
	cout<<"The value in base 2 is: ";
	for(int j=i-1; j>=0; j--){

		cout<<array[j];
	}
	cout<<endl;

	return 0;

}
