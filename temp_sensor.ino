// c++ code
const int LM35 = A0;
const int Buzzer = 12;
const int Button = 8;

const int LED1 = 4;
const int LED2 = 5;
const int LED3 = 6;
const int LED4 = 7;

int buttonState = 0;
int buttonPushCounter = 0;

float temp = 0;
int ADReades = 0;

void showNumber(int n) {
  int binaryNum[4] = {0, 0, 0, 0};
  int i = 0;

  while (n > 0) {
    binaryNum[i] = n % 2;
    n = n / 2;
    i++;
  }

  for (int j = 3; j >= 0; j--) {
    // led 1
    if (binaryNum[0] == 1)
      digitalWrite(LED1, HIGH);
    // led 2
    if (binaryNum[1] == 1)
      digitalWrite(LED2, HIGH);
    // led 3
    if (binaryNum[2] == 1)
      digitalWrite(LED3, HIGH);
    // led 4
    if (binaryNum[3] == 1)
      digitalWrite(LED4, HIGH);

    delay(500); 
    resetLeds();
    delay(500);
  }
}

void resetLeds() {
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
}

void turnOnLeads() {
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
}

void blinkLeds() {
  for (int counter = 0; counter < 3; counter++) {
    turnOnLeads();
    delay(250);
    resetLeds();
    delay(250);
    turnOnLeads();
    delay(250);
    resetLeds();
    delay(250);
  }
}

void verifyTemperature() {
  if (temp > 25) {
    digitalWrite(Buzzer, HIGH);
    delay(10);
  }
  digitalWrite(Buzzer, LOW);
}

void setup() {
  Serial.begin(9600);
  pinMode(Button, INPUT);
  pinMode(Buzzer, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

int countToVerifyTemp = 5000 / 150;
int count = 0;

void loop() {
  buttonState = digitalRead(Button);

  temp = map((analogRead(A0) - 20) * 3.04, 0, 1023, -40, 125);

  if (buttonState == HIGH) {
    resetLeds();
    buttonPushCounter++;

    Serial.print(buttonPushCounter);
    Serial.print(" - Temperatura: ");
    Serial.println(temp);
    showNumber(buttonPushCounter);
  }
  delay(150);

  if (buttonPushCounter == 15) {
    blinkLeds();
    buttonPushCounter = 0;
  }

  if (count == countToVerifyTemp) {
    blinkLeds();
    buttonPushCounter = 0;
  }
  count++;
}

  
                       
