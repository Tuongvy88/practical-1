double average(int array[], int n) //returns average of array
{
if(n < 1) //if n is less than 1, then return 0.0
return 0.0;

double average;
int sum = 0;
for(int i = 0; i < n; i++)
{
sum = sum + array[i]; //add each element to sum
}
average = (double)sum/n; //type cast sum from int to double
return average; //return average
}