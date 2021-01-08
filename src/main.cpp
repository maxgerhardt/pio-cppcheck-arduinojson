#include <Arduino.h>
#include "display.h"
//commenting or uncommenting this 
//makes a "function not used" defect show up
//pio check --skip-packages -v
//#include <ArduinoJSON.h>

// cppcheck-suppress unusedFunction
void setup() {
   setup_display();
}

// cppcheck-suppress unusedFunction
void loop() {
   show_display("Test");
}
