int sum_two(int array[], int secondarray[], int n) //returns sum of two arrays
{
if(n < 1) //if n is less than 1, then return 0
return 0;

int sum = 0;
for(int i = 0; i < n; i++)
{
sum = sum + array[i] + secondarray[i]; //add both elements at index i to sum
}
return sum; //return sum
}
