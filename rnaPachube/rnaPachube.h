// Version 0.1
// hex705, Jan 24,2012
// steve daniels
// spinningtheweb.org


#ifndef rnaPachube_h
#define rnaPachube_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include <WString.h> // String




class rnaPachube 
{
    
public:
	// constructor
	rnaPachube();
    setApiKey( String ) ;
  
	
private:
	char apiKey[41];
    
    
    typedef struct
    
    {
        char* apiKey;
        char* uri;
        char* feed;
    }

}; // end class rnaPachube



# endif   // end #ifndef rnaPachube_h
