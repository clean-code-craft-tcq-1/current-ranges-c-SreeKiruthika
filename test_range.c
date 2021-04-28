#include "range.h"

/*infers the number of ranges when all enteries are same*/
void TC_01()
{
	float readingsArray[]={4,4,4,4};
    int numOfReadings = sizeof(readingsArray)/sizeof(readingsArray[0]);
    REQUIRE(detectRanges(readingsArray, numOfReadings) == 1);
}

/*"infers the number of ranges when NULL"*/
void TC_02()
{
	float *readingsArray = NULL;
    int numOfReadings = 0;
    REQUIRE(detectRanges(readingsArray, numOfReadings) == 0);
}

/*"infers the number of ranges when mixed values*/
void TC_03()
{
	float readingsArray[]={3, 3, 5, 4, 10, 11, 12};
    int numOfReadings = sizeof(readingsArray)/sizeof(readingsArray[0]);
    REQUIRE(detectRanges(readingsArray, numOfReadings) == 2);
}

void main()
{
	TC_01();
	TC_02();
	TC_03();
}