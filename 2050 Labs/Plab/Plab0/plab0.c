/* 
For this prelab you are tasked to implement a function that will be passed an array of integers; an integer giving 
the size of the array; and a query integer to be searched for in the array. The function will return a nonnegative 
number representing the number of occurrences of integers in the array that are greater than or equal to the 
query integer. There is no prototype specified for the function, so you're free to choose the name of the 
function and the order in which the parameters are passed. 
*/ 

#include <stdio.h>


unsigned int occurrences(int array[], int *size, int *query)
{
	unsigned int count = 0;
	for(int i = 0; i < *size; i++)
	{
		if (array[i] >= *query)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int array[] = {5,7,4,2,6,8,9,3,5,6,4,4,7,3,2,8,4,5,4,4,4,4};
	int size = 22;
	int query = 4;
	unsigned int count = occurrences(array, &size, &query);
	printf("%d", count);
}