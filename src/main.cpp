#include <Arduino.h>
#include <esp32_smartdisplay.h>
#include "ui.h"

// put function declarations here:
int myFunction(int, int);

void setup()
{
  smartdisplay_init();

  auto display = lv_display_get_default();

  ui_init();

  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop()
{
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y)
{
  return x + y;
}