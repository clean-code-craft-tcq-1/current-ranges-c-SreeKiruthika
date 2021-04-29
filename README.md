# Test Driven Ranges

This exercise extends the [Battery Monitoring] use-case.

The charging current varies during the process of charging.
We need to capture the range of current measurements -
what range of currents are most often encountered while charging.

> **DO NOT** jump into implementation! Read the example and the starting task below.

## Example

### Input

Consider a set of periodic current samples from a charging session to be:
`3, 3, 5, 4, 10, 11, 12`

### Functionality

The continuous ranges in there are: `3,4,5` and `10,11,12`.

The task is to detect the ranges and
output the number of readings in each range.

In this example,

- the `3-5` range has `4` readings
- the `10-12` range has `3` readings.

### Output

The expected output would be:

```
Range, Readings
3-5, 4
10-12, 3
```

## Tasks

Start test-driven development:

1. Establish quality parameters for your project: What is the maximum complexity you would allow? How much duplication would you consider unacceptable? What is the coverage you'll aim for?
Adapt/adopt/extend the `yml` files from one of your workflow folders.

1. Write the smallest possible failing test.

1. Write the minimum amount of code that'll make it pass.

1. Write the next failing test.

Implement one failing test and at least one passing test:

## TestCase_01
To implement minimum check for the function
    float readingsArray[]={4,4,4,4};
    int  numOfReadings = sizeof(readingsArray)/sizeof(readingsArray[0]);
	assert(detectRanges(readingsArray, numOfReadings) == 1);

# Implementation 
```
int detectRanges(const float* readingsArray, int numOfReadings)
{
	return 1;
}
```	

## TestCase_02
To implement range check for the function when number of ranges is 2 (this also holds good for NULL array)
    float readingsArray[]={3,3,5,4,10,11,12};
    int  numOfReadings = sizeof(readingsArray)/sizeof(readingsArray[0]);
	assert(detectRanges(readingsArray, numOfReadings) == 2);

# Implementation 
```
int detectRanges(const float* readingsArray, int numOfReadings)
{
	/*Sorted array is the array obtained after sorting the input array via bubble sort */	
   float sortedArray[]={3,3,4,5,10,11,12};         
   int numofRange = 0;
   for (int i=0; i<numOfReadings;i++)
   {
      if(!(i == (numOfReadings-1))) // To prevent array out of bound access
      {
        if((sortedArray[i+1] - sortedArray[i])<= 1)
	    {
		    continue;
	    }
      }
	  numofRange++;
    }	
  return numofRange;
}
```	

## TestCase_03
To implement range check and printing range and count (this also holds good for NULL array)
    float readingsArray[]={3,3,5,4,10,11,12};
    int  numOfReadings = sizeof(readingsArray)/sizeof(readingsArray[0]);
	assert(detectRanges(readingsArray, numOfReadings) == 2);

# Implementation 
```
Refer the code submitted along with the test cases (3 cases tested)
Current implementation supports only checking value via console. Checking value as return is not yet implemented

```	

## TestCase_fail
To implement range check for the function when all have difference > 1
    float readingsArray[]={3.0,5.5,4.4,10.0,11.1,12.2};
    int  numOfReadings = sizeof(readingsArray)/sizeof(readingsArray[0]);
	assert(detectRanges(readingsArray, numOfReadings) == 6);
	
# Implementation 
```
The implementation is not smart enough to choose ranges based on general difference values 
The logic needs to be realised for adapting the same
```	



	


