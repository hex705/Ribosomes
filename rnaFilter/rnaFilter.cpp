// RNA.cpp

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include <rnaFilter.h>
#include <WString.h> // String
#include <HardwareSerial.h>


	
	rnaChange::rnaChange()
	{
		lastState = -1;
    
	} // end constructor

   

    void rnaChange::setPin( int p ) {
        
        pin = p;
        pinMode( pin, INPUT );
        delay(250);
        changed();
        
    }


	int rnaChange::getPin()
	{
		return pin;
	}
	
	int rnaChange::trigger()
	{
		return edge;
	}

    int rnaChange::poll()
    {
        return digitalRead(pin);
    }
	
	
	int rnaChange::changed()
	{
        
		// from interupt reserved words
		// #define CHANGE 1   #define FALLING 2   #define RISING 3
		// Serial.println("Starting change");
		
		 edge = 0; // default no change
		
		int newState = digitalRead(pin);
		
		if (newState != lastState) {	
			if (newState<lastState) {
				// FALLING::2 --> HIGH to LOW detected
				edge = FALLING;
			} else {
				// RISING::3  --> LOW to HIGH detected
				edge = RISING;  
			}
		}
		lastState = newState;

		return edge;
   	} // end changed 