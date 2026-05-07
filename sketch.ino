// ================================
// Arduino LED Blink Project
// By: [Joanna]
// Date: 06/05/2026
// Simulator: Wokwi (wokwi.com)
// ================================

// -- COMPONENTS --
// - Arduino Uno
// - 1x Red LED
// - 1x 220 ohm Resistor
//
// -- WIRING --
// Pin 13 → Resistor → LED long leg (+)
// LED short leg (-) → GND

void setup() {
  pinMode(13, OUTPUT);  // Set pin 13 as output
}

void loop() {
  digitalWrite(13, HIGH);  // Turn LED ON
  delay(1000);               // Wait (change this number to adjust speed!)
  digitalWrite(13, LOW);   // Turn LED OFF
  delay(1000);               // Wait
}

// -- WHAT I LEARNED --
// setup()          → runs once when Arduino turns on
// loop()           → runs forever
// pinMode()        → sets a pin as INPUT or OUTPUT
// digitalWrite()   → sends HIGH (on) or LOW (off) to a pin
// delay()          → pauses the program (in milliseconds)
// HIGH             → electricity ON
// LOW              → electricity OFF
// 1000ms           → 1 second
// 100ms            → 0.1 second (10x faster blink)
