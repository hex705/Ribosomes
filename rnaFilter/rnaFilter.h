// Version 0.1
// hex705, Jan 24,2012
// steve daniels
// spinningtheweb.org


#ifndef rnaFilter_h
#define rnaFilter_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include <WString.h> // String


class rnaChange 
{
    
public:
	// constructor
	rnaChange();

    void setPin( int );
    
	int changed();
	int trigger();
	int getPin();
    int poll();
	
private:
	int lastState;
	int edge, pin;

}; // end class rnaChange

# endif   // end #ifndef rnaFilter_h
