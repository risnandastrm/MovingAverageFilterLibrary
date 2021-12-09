/*
  movingAverageFilter_RS.h - Library for flashing moving average filter code.
  Created by Risnanda S., January 11, 2020.
  Released into the public domain.
*/
#ifndef movingAverageFilter_RS_H
#define movingAverageFilter_RS_H

#include "Arduino.h"

class movingAverageFilter_RS{
	public:
		movingAverageFilter_RS(int lengthAverage);
		int filtering(int valueParameter);
	private:
		int _lengthAverage;
		
		int _reading[1000],
			_lastIndex,
			_average,
			_index,
			_sum;
	  
};


#endif