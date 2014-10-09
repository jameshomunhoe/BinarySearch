#include <stdio.h>
#include "BinarySearch.h"

int binarySearch(int target, int array[], int startIndex, int endIndex){

	int midPoint;
	
	midPoint = ((endIndex - startIndex) / 2) + startIndex;
	
	
	
	if(midPoint == startIndex || midPoint == endIndex){
		if(target == array[midPoint])
			return midPoint;
		else if(target == array[midPoint +1])
			return midPoint +1;
		else
			return -1;
	}
	else if(target < array[midPoint])
		binarySearch(target, array, startIndex, --midPoint);
	else if(target > array[midPoint])
		binarySearch(target, array, ++midPoint, endIndex);
	
}