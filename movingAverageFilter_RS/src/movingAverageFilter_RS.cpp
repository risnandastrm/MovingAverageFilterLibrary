/*
  movingAverageFilter_RS.cpp - Library for flashing moving average filter code.
  Created by Risnanda S., January 11, 2020.
  Released into the public domain.
*/
#include "Arduino.h"
#include "movingAverageFilter_RS.h"

movingAverageFilter_RS::movingAverageFilter_RS(int lengthAverage){
	_lengthAverage = lengthAverage;
}

int movingAverageFilter_RS::filtering(int valueParameter){
	_sum += (valueParameter - _reading[_lastIndex]);		// Remove the oldest entry from the sum
	_average = _sum/_lengthAverage;                    		// Divide the sum of the window by the window size for the result
	
	_index = (_index+1) % _lengthAverage;					// Increment the index, and wrap to 0 if it exceeds the window size
    _reading[_index] = valueParameter;                      // Add the newest reading to the window
    _lastIndex = (_index + 1) % _lengthAverage;				// Find the last index
    
	return _average;
}

