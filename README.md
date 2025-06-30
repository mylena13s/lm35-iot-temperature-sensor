#### Thermal Sensor LM35

This IoT project was developed in Tinkercad using Arduino to monitor temperature. The circuit includes an LM35 sensor (idealized) or TMP36 sensor (used in the simulation), a button, LEDs, and a buzzer.  

Temperature Reading: The program reads the temperature using the sensor and displays it on the serial monitor after pressing the button.  

Button Binary Count: The LEDs indicate the number of button presses, representing a binary value from 0 to F.  

LED Blinking at 15 Presses: When the count reaches 15, the LEDs blink for 3 seconds.  

Reset After 3 Seconds: After 3 seconds, the counter resets, and the LEDs return to the initial value (zero).  

Buzzer for Temperature > 25°C: The buzzer emits a sound every 5 seconds if the temperature exceeds 25°C.  
