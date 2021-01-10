#include "display.h"

//originally "#includ <ArduinoJson.h>" would cause the error.
//further narrowing it down brought it to one .h file that causes it

/* #include "ArduinoJson.hpp" manually 'inlined' */ 
#include "ArduinoJson/Configuration.hpp"
/* these includes cause no error. */
#include "ArduinoJson/Array/ArrayRef.hpp"

//commenting or uncommenting this 
//makes a "function not used" defect show up
//pio check --skip-packages -v
//#include "ArduinoJson/Variant/VariantCompare.hpp"

// cppcheck-suppress unusedFunction
void setup() {
   setup_display();
}

// cppcheck-suppress unusedFunction
void loop() {
   show_display("Test");
}
