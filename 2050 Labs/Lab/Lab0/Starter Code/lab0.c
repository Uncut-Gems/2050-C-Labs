#include "lab0.h"
//Lab by: Elliott Weiler

/* 
This function loops through an array of data and checks to see how
many times the query integer occurs and reports back the number of occurrences
*/

int countOccurrences(int size, int array[], int query)
{
	int occurrence = 0;
	for (int i = 0; i < size; i++)
	{
		if(array[i] == query)
		{
			occurrence++;
		}
	}
	return occurrence;
}
