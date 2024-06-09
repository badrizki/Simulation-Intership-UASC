#define BLYNK_PRINT Serial

#define BLYNK_TEMPLATE_ID "TMPL6I92kitbZ"
#define BLYNK_TEMPLATE_NAME "LED RGB"
#define BLYNK_AUTH_TOKEN "j9cR9081kb7NQvkNQ-F6tTBVlHaLzHAg"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

// Replace these with your Blynk authentication token and Wi-Fi credentials
char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Wokwi-GUEST";
char pass[] = "";

// Define the pin numbers for the RGB LED
const int redPin = 5;    // GPIO5
const int greenPin = 19; // GPIO18
const int bluePin = 18;  // GPIO19

BLYNK_WRITE (V0)
{
  int pinValue=param.asInt();
  if(pinValue == 1)
  {
    digitalWrite(5, HIGH);
  }
  else
  {
    digitalWrite(5,LOW);
  }
}

BLYNK_WRITE (V1)
{
  int pinValue=param.asInt();
  if(pinValue == 1)
  {
    digitalWrite(19, HIGH);
  }
  else
  {
    digitalWrite(19,LOW);
  }
}

BLYNK_WRITE (V2)
{
  int pinValue=param.asInt();
  if(pinValue == 1)
  {
    digitalWrite(18, HIGH);
  }
  else
  {
    digitalWrite(18,LOW);
  }
}

void setup() {
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
  pinMode(5, OUTPUT);
  pinMode(19, OUTPUT);
  pinMode(18, OUTPUT);
}

void loop() {
  // Run the Blynk service
  Blynk.run();
}

