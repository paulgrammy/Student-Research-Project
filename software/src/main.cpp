#include <stdio.h>
#include <Arduino.h>
#include "AudioTools.h"
#include "BluetoothA2DPSink.h"

I2SStream i2s;
BluetoothA2DPSink a2dp_sink(i2s);

#define LED_GPIO GPIO_NUM_2

void setup() {
  auto config = i2s.defaultConfig();

  config.pin_bck = 14;
  config.pin_ws = 17;
  config.pin_data = 16;

  i2s.begin(config);

  a2dp_sink.start("MyMusic");
}

void loop() {
}
