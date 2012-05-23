// RNA.cpp

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include <rnaPachube.h>
#include <WString.h> // String
#include <HardwareSerial.h>


	
	rnaPachube::rnaPachube()
    {
        
            

    } // end constructor


    rnaPachube::setApiKey (char *aApiKey)
    {
        strncpy(apiKey, aApiKey, 41);
    }
  	
   