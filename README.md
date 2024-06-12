# Sensor Térmico LM35 

Este projeto de IoT foi desenvolvido no Tinkercad usando Arduino para monitorar a temperatura. O circuito inclui um sensor LM35 (idealizado) ou TMP36 (usado na simulação), botão, LEDs e buzzer.

1. **Leitura de Temperatura:**
    O programa lê a temperatura usando o sensor e a exibe no monitor serial após pressionar o botão.

2. **Contagem Binária do Botão:**
    Os LEDs indicam o número de pressões do botão, representando um valor binário de 0-F.

3. **Piscar dos LEDs com 15 Pressões:**
    Quando a contagem atinge 15, os LEDs piscam por 3 segundos.

4. **Reinício Após 3 Segundos:**
    Após 3 segundos, o contador é reiniciado e os LEDs retornam ao valor inicial (zero).

5. **Buzzer para Temperatura > 25°C:**
    O buzzer emite som a cada 5 segundos se a temperatura exceder 25°C.
