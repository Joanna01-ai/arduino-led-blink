# 💡 Arduino LED Blink Project

> Documented with the aid of Claude | Learning Arduino from scratch using Wokwi simulator

---

## 📋 Project Overview

My first Arduino project! Making an LED light blink using an Arduino Uno and the Wokwi browser simulator.

**Simulator used:** [Wokwi](https://wokwi.com) (browser-based, no hardware needed)

---

## 🔧 Components

| Component | Value | Purpose |
|---|---|---|
| Arduino Uno | — | The microcontroller brain |
| LED | Red | The light that blinks |
| Resistor | 220Ω | Protects the LED from too much electricity |

---

## 🔌 Wiring

| From | To |
|---|---|
| Arduino Pin 13 | One leg of the resistor |
| Other leg of resistor | Long leg (+) of LED |
| Short leg (–) of LED | Arduino GND |

> ⚠️ Always connect the resistor between Pin 13 and the LED — it protects the LED from burning out!

---

## 💻 Code

```cpp
void setup() {
  pinMode(13, OUTPUT);  // Set pin 13 as output
}

void loop() {
  digitalWrite(13, HIGH);  // Turn LED ON
  delay(1000);              // Wait 1 second
  digitalWrite(13, LOW);   // Turn LED OFF
  delay(1000);              // Wait 1 second
}
```

---

## 🧠 What Does the Code Mean?

### `void setup()`
Runs **once** when the Arduino turns on. Think of it as the "preparation" phase.

```cpp
pinMode(13, OUTPUT);
```
Tells the Arduino: *"Pin 13 is going to SEND electricity out"* — that's what OUTPUT means.

---

### `void loop()`
Runs **forever**, over and over, as long as the Arduino is on.

```cpp
digitalWrite(13, HIGH);  // Sends electricity to Pin 13 → LED turns ON
delay(1000);             // Waits 1000 milliseconds = 1 second
digitalWrite(13, LOW);   // Stops electricity to Pin 13 → LED turns OFF
delay(1000);             // Waits 1 second, then loops back
```

---

## 🧠 Simple Way to Remember It

| Term | Think of it as... |
|---|---|
| `setup()` | Getting dressed in the morning — done once |
| `loop()` | Your heartbeat — repeats forever |
| `HIGH` | Switch ON |
| `LOW` | Switch OFF |
| `delay(1000)` | Pause for 1 second |

---

## 📓 Project Logs

### log1 — [06/05/2026]
➡️ I made an LED light blink! The code above is the first working version with a 1 second blink delay.

### log2 — [06/05/2026]
➡️ Trying to make the LED blink faster. Changed both `delay(1000)` values to `delay(100)`. Now it blinks 10x faster!

```cpp
void loop() {
  digitalWrite(13, HIGH);
  delay(100);   // changed from 1000 → 100 for faster blink
  digitalWrite(13, LOW);
  delay(100);   // same as the other one
}
```

---

## 🚀 Installation (Wokwi for VS Code)

1. Install the **Wokwi for VS Code** extension
2. Press `F1` and select **"Wokwi: Request a new License"**
3. VS Code will ask you to confirm opening the Wokwi website — click **Open**
4. Click **"GET YOUR LICENSE"** (create a free account if needed)
5. Confirm sending the license back to VS Code
6. You'll see: *"License activated for [your name]"* — you're ready! 🎉

---

## 📈 Next Steps

- [ ] Make LED blink super fast (`delay(100)`)
- [ ] Add a button to control the LED
- [ ] Make the LED fade in and out
- [ ] Build a traffic light with multiple LEDs

---

## log3 — [07/05/2026]
➡️ Changed delay from 1000 to 100 — LED now blinks 
10x faster! Confirmed it works in Wokwi simulator.

```
 void setup() {
  pinMode(13, OUTPUT);  // Set pin 13 as output
}

void loop() {
  digitalWrite(13, HIGH);  // Turn LED ON
  delay(100);              // it was 1000 before but i changed it to 100 for it to blink very fast
  digitalWrite(13, LOW);   // Turn LED OFF
  delay(100);              // same as the other one
}
```
---

*Built by a complete beginner ✨ | Started 06/05/2026*
