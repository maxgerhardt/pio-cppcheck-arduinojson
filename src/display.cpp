#include "display.h"
#include <stdio.h>

void setup_display(){
  printf("setup display()\n");
}

void show_display(const char* header, int wait) {
  printf("show: %s\n", header);
  (void) wait;
}
