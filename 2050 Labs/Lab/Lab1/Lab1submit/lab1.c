#include "lab1.h"

/*This function will take an integer array, an integer representing the size of the array, and a
result pointer. This function will determine the minimum value in the array, and place the result in
the result pointer. The function must check that the size is at least 1, and that the array pointer is not
NULL. The function will return -1 on error, or 0 on success.

HowTO: start by doing for loop and test how to find lowest integer
	   possible by comparing at the loop.

Lab By: Elliott Weiler
		12580817

*/

int getMin(int size, int *array, int *result)
{
	*result = 100; //setting initial result to 100 so if error then it shows 100 instead of previous result
	printf("\nInitial Result: %d\n", *result); //Printing Initial to prove 100 every start. Can be commented out.
	if(size < 1 || array == NULL) return -1; //Checks that size is at least 1 and array pointer isn't NULL. Returns -1 on error.
	else
	{
		for (int i = 0; i < size; i++) //Looping through size of array on success, finding minimum value.
		{
			if (array[i] < *result) *result = array[i]; //if current index value of array is less than current result then change result to lowest number.
			printf("\nCurrent Array[i]: %d\n", array[i]); //prints current value of index were on. Can be commented out.
			printf("Current Lowest[i]: %d\n", *result); //prints the current lowest to see if any changes. Can be commented out.
		}
		puts(""); //purely for easier readability. Can be commented out.
		return 0; //returning 0 for success.
	}
}

