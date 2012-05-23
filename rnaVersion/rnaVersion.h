

#ifndef Utilities_h
#define Utilities_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include <WString.h> // String



class rnaFileName

{
public:
	rnaFileName(String); 
	void printFileName();
	String which();
    String fileName;
	
}; // end class fileID

class rnaChange 
{
public:
	// constructor
	rnaChange();
    void setPin(int);
	int changed();
	int trigger();
	int getPin();
	
	
	
private:
	int lastState;
	int edge, pin;

}; // end class rnaChange

# endif   // end #ifndef RNA_h
