#include <Arduino.h>
#include <Streaming.h>

#if defined(__AVR__) || defined(ARDUINO_ARCH_STM32)
  #include <ArduinoSTL.h>
#endif

#include <etl/unordered_map.h>

#include "map_keys.h"

constexpr size_t MAP_SIZE = 32;

using hashmap_t = etl::unordered_map<const char*, unsigned long, MAP_SIZE>;

hashmap_t test_map{};

void setup() {
  delay(500);

  Serial.begin(115200);
  Serial.println();

  delay(1000);
}

void testMap() {
  for (const auto& key : keys) {
    auto value = random(millis());
    Serial << "Adding - " << key << ": " << value << "..." << endl;
    test_map[key] = value;
  }

  delay(500);

  for (const auto& v : test_map) {
    Serial << v.first << ": " << v.second << endl;
  }
}

void loop() {
  testMap();

  delay(1000);
}
