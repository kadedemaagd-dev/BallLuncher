/*
Dev: Kade Demaagd, Cohen Smith
 
*/
// Pins connected to motor controller inputs
int motor1 = 6;  // Blue wire → Motor driver input
int motor2 = 5;  // Purple wire → Motor driver input

void setup() {
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
}

void loop() {

  // Spin motors
  digitalWrite(motor1, HIGH);
  digitalWrite(motor2, HIGH);
  delay(3000);

  // Stop motors
  digitalWrite(motor1, LOW);
  digitalWrite(motor2, LOW);
  delay(2000);
}