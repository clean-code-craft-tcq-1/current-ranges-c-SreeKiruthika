#include "range.h"

void bubbleSortAscending(const float* inputArray, int numOfReadings, float* sortedArray)
{
   int c, d;
   float temp;
   
	/*Assign it to a temporary sorting array*/
   for(int i=0; i< numOfReadings ; i++)
   {
		sortedArray[i] = inputArray[i];
   }
      
   /*Bubble sorting */
  for (c = 0 ; c < numOfReadings; c++)
  {
    for (d = 0 ; d < numOfReadings - c - 1; d++)
    {
      if (sortedArray[d] > sortedArray[d+1]) 
      {
        temp       = sortedArray[d];
        sortedArray[d]   = sortedArray[d+1];
        sortedArray[d+1] = temp;
      }
    }
  }
   printf("\nSorted Array : ")  ;
   
   printArray (sortedArray,numOfReadings);
   
} 

void printArray (float *arrayIndex, int Arraysize)
{
	for(int i=0; i< Arraysize ; i++)
   {
		printf("%f,", arrayIndex[i]);
   }
}

