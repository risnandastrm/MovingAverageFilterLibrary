/*
 * 
 * Explanation of what your example does
 * 
 */
 
#include <movingAverageFilter_RS.h>

movingAverageFilter_RS leftSensor(2);	// nameParameter(lengthAverage);

void setup() {
	// Setup Serial communication to print result on Serial Monitor
	Serial.begin(9600);
}

void loop() {
	// Get the moving average filter of analog value
	int analogValue = analogRead(A0);
	int filterResult = leftSensor.filtering(analogValue);
  
	// Check result
	Serial.print(analogValue);
	Serial.print(":");
	Serial.println(filterResult);
}