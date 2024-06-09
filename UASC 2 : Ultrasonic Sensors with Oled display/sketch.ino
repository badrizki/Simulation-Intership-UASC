#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64 

Adafruit_SSD1306 display = Adafruit_SSD1306(128, 64, &Wire);

const int trigPin = 12;
const int echoPin = 14;

long duration;
int distanceCm;

void setup() {
  Serial.begin(115200);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;);
  }
  display.setTextSize(2);
  display.setTextColor(WHITE);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distanceCm = duration * 0.034 / 2;
  Serial.print("Distance (cm): ");
  Serial.println(distanceCm);
  display.clearDisplay();
  display.setCursor(0, 25);
  display.print("Distance: ");
  display.print(distanceCm);
  display.print(" cm");
  display.display();
  delay(500);
}