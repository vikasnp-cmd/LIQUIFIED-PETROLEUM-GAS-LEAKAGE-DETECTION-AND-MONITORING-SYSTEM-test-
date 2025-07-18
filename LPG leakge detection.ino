#include <Servo.h>
#include <SoftwareSerial.h>

#define MQ2_PIN A0            // Gas Sensor
#define FLAME_PIN A1          // IR Flame Sensor
#define BUZZER_PIN 3
#define LED_PIN 12
#define SERVO_PIN 11
#define GSM_RX 7
#define GSM_TX 8

Servo gasValve;
SoftwareSerial gsm(GSM_RX, GSM_TX);

int gasThreshold = 300;       // Set threshold for gas detection
int flameThreshold = 500;     // Adjust according to testing

bool leakDetected = false;
bool fireDetected = false;

void setup() {
  pinMode(MQ2_PIN, INPUT);
  pinMode(FLAME_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);

  gasValve.attach(SERVO_PIN);
  gasValve.write(0); // Valve open (normal state)

  gsm.begin(9600);
  Serial.begin(9600);

  delay(1000);
  Serial.println("System Initialized");
}

void loop() {
  int gasValue = analogRead(MQ2_PIN);
  int flameValue = analogRead(FLAME_PIN);

  Serial.print("Gas: ");
  Serial.print(gasValue);
  Serial.print(" | Flame: ");
  Serial.println(flameValue);

  leakDetected = gasValue > gasThreshold;
  fireDetected = flameValue < flameThreshold;  // IR flame sensor outputs low when fire detected

  if (leakDetected || fireDetected) {
    digitalWrite(BUZZER_PIN, HIGH);
    digitalWrite(LED_PIN, HIGH);
    gasValve.write(90); // Close valve

    if (leakDetected) {
      sendSMS("Alert: LPG Leak Detected! Valve closed. Please check immediately.");
    }

    if (fireDetected) {
      sendSMS("Fire Alert: Flames Detected! Emergency services notified.");
    }

    delay(10000); // Avoid spamming SMS
  } else {
    digitalWrite(BUZZER_PIN, LOW);
    digitalWrite(LED_PIN, LOW);
    gasValve.write(0); // Keep valve open
  }

  delay(1000);
}

void sendSMS(String message) {
  gsm.println("AT+CMGF=1");  // Set SMS mode to text
  delay(1000);
  gsm.println("AT+CMGS=\"+91XXXXXXXXXX\""); // Replace with actual phone number
  delay(1000);
  gsm.print(message);
  gsm.write(26);  // ASCII code for CTRL+Z to send SMS
  delay(5000);
}
