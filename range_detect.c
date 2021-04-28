#include "range.h"

int detectRanges(const float* readingsArray, int numOfReadings)
{
   struct RangeInfo_s RangeInfoArray[10];
   int numofRange = 0;
   
    if((readingsArray != NULL) && (numOfReadings > 0))	
    {	   
	  float sortedArray[numOfReadings];
   	
	  /*Sort the input array */	
      bubbleSortAscending(readingsArray, numOfReadings, sortedArray);
  
      /*check for ranges */
      float min = sortedArray[0];
      float max = sortedArray[0];
      int readings = 1;
  
      for (int i=0; i < numOfReadings;i++)
      {
        if(!(i == (numOfReadings-1)))
        {
            if((sortedArray[i+1] - sortedArray[i])<= 1)
	        {
		      readings++;
		      max = sortedArray[i+1];
		      continue;
	        }    
        }
	    else
	    {
	        max = sortedArray[numOfReadings-1];
	    }
        readings = 1;
	    min = sortedArray[i+1];
	    numofRange++;
      }	
    }
    else
    {
       printf("NULL readings input");
    }
 
	return numofRange;
 
}

