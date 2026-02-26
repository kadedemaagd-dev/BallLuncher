/*
Dev: Kade Demaagd, Cohen Smith
 
*/
// ===== MOTOR DRIVER PINS =====
const int ENA = 5;   // Speed control Motor A
const int IN1 = 7;
const int IN2 = 8;

const int ENB = 6;   // Speed control Motor B
const int IN3 = 11;
const int IN4 = 12;

// ===== BUTTON =====
const int fireButton = 2;

void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(fireButton, INPUT_PULLUP);

  Serial.begin(9600);
}

void loop() {
  int buttonState = digitalRead(fireButton);

  if (buttonState == LOW) {   // Button pressed
    Serial.println("Launcher ON");

    // Set motors forward
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);

    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);

    // Set motor speed (0–255)
    analogWrite(ENA, 220);
    analogWrite(ENB, 220);
  }
  else {   // Button not pressed
    Serial.println("Launcher OFF");

    // Stop motors
    analogWrite(ENA, 0);
    analogWrite(ENB, 0);
  }

  delay(50);
}