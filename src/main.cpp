#include "display.h"

//originally "#includ <ArduinoJson.h>" would cause the error.
//further narrowing it down brought it to one .h file that causes it
#ifdef __cplusplus

/* #include "ArduinoJson.hpp" manually 'inlined' */ 
#include "ArduinoJson/Configuration.hpp"
#if !ARDUINOJSON_DEBUG
#ifdef __clang__
#pragma clang system_header
#elif defined __GNUC__
#pragma GCC system_header
#endif
#endif
/* these includes cause no error. */
#include "ArduinoJson/Array/ArrayRef.hpp"
#include "ArduinoJson/Object/ObjectRef.hpp"
#include "ArduinoJson/Variant/VariantRef.hpp"
#include "ArduinoJson/Document/DynamicJsonDocument.hpp"
#include "ArduinoJson/Document/StaticJsonDocument.hpp"
#include "ArduinoJson/Array/ArrayImpl.hpp"
#include "ArduinoJson/Array/ElementProxy.hpp"
#include "ArduinoJson/Array/Utilities.hpp"
#include "ArduinoJson/Collection/CollectionImpl.hpp"
#include "ArduinoJson/Object/MemberProxy.hpp"
#include "ArduinoJson/Object/ObjectImpl.hpp"
#include "ArduinoJson/Variant/VariantAsImpl.hpp"

//commenting or uncommenting this 
//makes a "function not used" defect show up
//pio check --skip-packages -v
#include "ArduinoJson/Variant/VariantCompare.hpp"
#endif

// cppcheck-suppress unusedFunction
void setup() {
   setup_display();
}

// cppcheck-suppress unusedFunction
void loop() {
   show_display("Test");
}
