//TRAFFIC LIGHT
/*
int redled = 5;
int yellowled = 4;
int greenled = 3;

void setup() {
  pinMode(redled, OUTPUT);
  pinMode(yellowled, OUTPUT);
  pinMode(greenled, OUTPUT);

}

void loop() {
  digitalWrite(greenled, HIGH);
  delay(8000);
  digitalWrite(greenled, LOW);
  delay(100);
  digitalWrite(yellowled, HIGH);
  delay(2500);
  digitalWrite(yellowled, LOW);
  delay(100);
  digitalWrite(redled, HIGH);
  delay(10500);
  digitalWrite(redled, LOW);

}
*/

// BUZZER BEEPS
/*int buzzPin = 3;
void setup() {
  pinMode(buzzPin, OUTPUT);
}

void loop(){
  digitalWrite(buzzPin, HIGH);
  delay(1000);
  digitalWrite(buzzPin, LOW);
  delay(5000);
}
*/


//BUTTON FOR LED
/*
// Pin definitions
const int ledPin = 13;
const int buttonPin = 2;

void setup() {
  pinMode(ledPin, OUTPUT); 
  pinMode(buttonPin, INPUT);

  // Optional: Serial for debugging
  Serial.begin(9600);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  // Debug
  Serial.println(buttonState);
  delay(50); // debounce delay
}
*/


//TEMP DISPLAY
/*void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A1);
  Serial.print("Raw ADC value: ");
  Serial.println(sensorValue);
  delay(1000);
}
*/


//DISTANCE SENSOR
/*#include <Servo.h>

const int trigPin = 13;
const int echoPin = 12;

const int buzzer = 11; // Passive buzzer
const int greenLED = 10;
const int yellowLED = 9;
const int redLED = 8;

const int servoPin = 6; // New: pin for servo signal

long duration;
double distance;

double maxDistanceInches = 12; // Sensor range limit

Servo myServo;
int currentAngle = 0;
bool sweepingForward = true;

double previousDistance = 0;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);

  digitalWrite(buzzer, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(redLED, LOW);

  Serial.begin(9600);

  // Attach servo
  myServo.attach(servoPin);
  myServo.write(currentAngle); // start at 0°
}

void loop() {
  // Move the servo back and forth in a sweep
  if (sweepingForward) {
    currentAngle += 5;
    if (currentAngle >= 120) sweepingForward = false;
  } else {
    currentAngle -= 5;
    if (currentAngle <= 0) sweepingForward = true;
  }
  myServo.write(currentAngle);
  delay(75); // allow time for servo to move

  // Trigger ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure echo duration
  duration = pulseIn(echoPin, HIGH, 15000); // 15ms timeout
  distance = duration * 0.034 / 2; // cm
  distance = distance / 2.54; // convert to inches

  // LED & buzzer logic (unchanged)
  if (distance < maxDistanceInches)
    digitalWrite(greenLED, HIGH);
  else
    digitalWrite(greenLED, LOW);
  
  if (distance < (maxDistanceInches * 0.66))
    digitalWrite(yellowLED, HIGH);
  else
    digitalWrite(yellowLED, LOW);
  
  if (distance < (maxDistanceInches * 0.33)) {
    digitalWrite(redLED, HIGH);
    digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(redLED, LOW);
    digitalWrite(buzzer, LOW);
  }

  // Print current angle and distance
  Serial.print("Angle: ");
  Serial.print(currentAngle);
  Serial.print("°, Distance: ");
  Serial.println(distance);
} 
*/

//COURSERA ASSIGNMENT
/*void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  for(int i = 0; i < 5; i++) {
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    delay(500);
  }
  for(int i = 0; i < 5; i++) {
    digitalWrite(13, HIGH);
    delay(2000);
    digitalWrite(13, LOW);
    delay(2000);
  }
}
*/