#include <Arduino.h>
#include <lv_conf.h>
#include <lvgl.h>

#include "gui/gui.h"

void setup() {
  gui_start();
}

void loop() {
  // random comment
  lv_timer_handler();

  delay(5);
}

