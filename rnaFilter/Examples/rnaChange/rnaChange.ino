  
  //  change.ino
  
  //  Example file for rnaFilter::rnaChange library 
  //  By hex705, Jan 24, 2012
  
  //  CHANGE is a simple filter that returns transition FLAGS
  //  HIGH to LOW ==> FALLING  (int 2)
  //  LOW to HIGH ==> RISING   (int 3)
  
  //  CHANGE ignores repeated values
  
  
  #include <rnaFilter.h>
  
  #define LEDpin    13  // Arduino built in LED -- used for feedback 
  #define buttonPin 2   // button connected to PIN 3 -- any digital input will work
  
  
  // local system variables
  rnaChange button;   // instantiate the button object
  
  void setup() {
    
    Serial.begin(9600);
    button.setPin(2);          // attchage the CHANGE filter to digitalPin 2 (INPUT)
    
    pinMode(LEDpin, OUTPUT);  // standard way to set direction of a pin
    
  }
  
  
  void loop() {
   
    // check to see if the button is pressed
    if (button.changed()){
      
           if (button.trigger() == RISING  )  { Serial.println("PRESSED");   digitalWrite(LEDpin, HIGH); }
           if (button.trigger() == FALLING )  { Serial.println("RELEASED" ); digitalWrite(LEDpin, LOW) ; }
         
    } // end changed()
   
    
  } // end loop
  
  
/*
  

  // *************************************************
  //  compare the serial output when not using change
  //  comment out above and uncomment below
  // *************************************************
  
  
  
  #define LEDpin 13 // Arduino built in LED -- used for feedback 
  #define buttonPin 2  // button connected to PIN 3 -- any digital input will work
  
  
  void setup() {
    
    Serial.begin(9600);
    
    pinMode(buttonPin, INPUT);
    pinMode(LEDpin, OUTPUT);  // standard way to set direction of a pin
    
    
  }
  
  
  void loop() {
   
    // check to see if the button is pressed
      int buttonState = digitalRead(buttonPin);
        
      if (buttonState == HIGH  )  { Serial.println("PRESSED");   digitalWrite(LEDpin, HIGH); }
      if (buttonState == LOW )  { Serial.println("RELEASED" ); digitalWrite(LEDpin, LOW) ; }
    
  }
  
  
  */

