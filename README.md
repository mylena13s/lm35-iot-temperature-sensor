# LM35 Thermal Sensor 🌡️

IoT project developed on Tinkercad using Arduino to monitor temperature. The circuit includes an LM35 sensor (idealized) or TMP36 (used in simulation), button, LEDs, and buzzer.

## Step by Step 🛠️

1. **Temperature Reading:**
    The program reads the temperature using the sensor and displays it on the serial monitor after pressing the button.

2. **Button Binary Counting:**
    LEDs indicate the number of button presses, representing a binary value from 0-F.

3. **LEDs Blinking at 15 Presses:**
    When the count reaches 15, the LEDs blink for 3 seconds.

4. **Reset After 3 Seconds:**
    After 3 seconds, the counter is reset, and the LEDs return to the initial value (zero).

5. **Buzzer for Temperature > 25°C:**
    The buzzer emits sound every 5 seconds if the temperature exceeds 25°C.
