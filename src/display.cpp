#include <Arduino.h>
#include "display.h"

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display(128, 64, &Wire, -1);

void setup_display(){
  Serial.begin(115200);
  Serial.println("setup display()");
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3c, false, false))
  {
     Serial.println("SSD1306 allocation failed");
     while (1);
  }
}

void show_display(String header, int wait) {
  Serial.println(header);
  delay(wait);
}
