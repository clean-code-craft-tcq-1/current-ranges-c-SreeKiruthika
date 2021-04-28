#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "range.h"


TEST_CASE("infers the number of ranges when all enteries are same")
{
	float readingsArray[]={4,4,4,4};
    int numOfReadings = sizeof(readingsArray)/sizeof(readingsArray[0]);
    REQUIRE(detectRanges(readingsArray, numOfReadings) == 1);
}

TEST_CASE("infers the number of ranges when NULL")
{
	float *readingsArray = NULL;
    int numOfReadings = 0;
    REQUIRE(detectRanges(readingsArray, numOfReadings) == 0);
}

TEST_CASE("infers the number of ranges when mixed values")
{
	float readingsArray[]={3, 3, 5, 4, 10, 11, 12};
    int numOfReadings = sizeof(readingsArray)/sizeof(readingsArray[0]);
    REQUIRE(detectRanges(readingsArray, numOfReadings) == 2);
}