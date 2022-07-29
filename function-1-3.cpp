int count(int array[], int n, int number) //returns count of number in array
{
if(n < 1) //if n is less than 1, then return 0
return 0;

int count = 0;
for(int i = 0; i < n; i++)
{
if(array[i] == number) //check if array element is same as number
count++; //If yes then increment count
}
return count; //return count
}