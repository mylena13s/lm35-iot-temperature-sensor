#### Thermal Sensor LM35

Este projeto de IoT foi desenvolvido no Tinkercad usando Arduino para monitorar a temperatura. O circuito inclui um sensor LM35 (idealizado) ou TMP36 (usado na simulação), um botão, LEDs e um buzzer.

Leitura de Temperatura: O programa lê a temperatura usando o sensor e a exibe no monitor serial após pressionar o botão.

Contagem Binária do Botão: Os LEDs indicam o número de vezes que o botão foi pressionado, representando um valor binário de 0 a F.

Piscar LEDs com 15 Pressões: Quando a contagem atinge 15, os LEDs piscam por 3 segundos.

Reinício Após 3 Segundos: Após 3 segundos, o contador é reiniciado e os LEDs retornam ao valor inicial (zero).

Buzzer para Temperatura > 25°C: O buzzer emite um som a cada 5 segundos se a temperatura exceder 25°C.

---

This IoT project was developed in Tinkercad using Arduino to monitor temperature. The circuit includes an LM35 sensor (idealized) or TMP36 sensor (used in the simulation), a button, LEDs, and a buzzer.  

Temperature Reading: The program reads the temperature using the sensor and displays it on the serial monitor after pressing the button.  

Button Binary Count: The LEDs indicate the number of button presses, representing a binary value from 0 to F.  

LED Blinking at 15 Presses: When the count reaches 15, the LEDs blink for 3 seconds.  

Reset After 3 Seconds: After 3 seconds, the counter resets, and the LEDs return to the initial value (zero).  

Buzzer for Temperature > 25°C: The buzzer emits a sound every 5 seconds if the temperature exceeds 25°C.  
