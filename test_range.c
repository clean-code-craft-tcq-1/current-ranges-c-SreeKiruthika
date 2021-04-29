#include "range.h"
#include <assert.h>

/*infers the number of ranges when all enteries are same*/
void TC_01()
{
	float readingsArray[]={4,4,4,4};
    int numOfReadings = sizeof(readingsArray)/sizeof(readingsArray[0]);
	printf ("\nTC_01 \nInput Array : ");
	printArray (readingsArray, numOfReadings);
    assert(detectRanges(readingsArray, numOfReadings) == 1);
}

/*"infers the number of ranges when NULL"*/
void TC_02()
{
	float *readingsArray = NULL;
    int numOfReadings = 0;
	printf ("\nTC_02 \nInput Array : ");
	printArray (readingsArray, numOfReadings);
    assert(detectRanges(readingsArray, numOfReadings) == 0);
}

/*"infers the number of ranges when mixed values*/
void TC_03()
{
	float readingsArray[]={3, 3, 5, 4, 10, 11, 12};
    int numOfReadings = sizeof(readingsArray)/sizeof(readingsArray[0]);
	printf ("\nTC_03 \nInput Array : ");
	printArray (readingsArray, numOfReadings);
    assert(detectRanges(readingsArray, numOfReadings) == 2);
}

/*"infers the number of ranges when mixed values in flaot*/
void TC_04()
{
	float readingsArray[]={3.1, 1.2, 2.5, 4.9, 1.1, 11.2, 12.5,10.9,20,20.5};
    int numOfReadings = sizeof(readingsArray)/sizeof(readingsArray[0]);
	printf ("\nTC_04 \nInput Array : ");
	printArray (readingsArray, numOfReadings);
    assert(detectRanges(readingsArray, numOfReadings) == 3);
}

int main()
{
	TC_01();
	TC_02();
	TC_03();
	TC_04();
	return 0;
}