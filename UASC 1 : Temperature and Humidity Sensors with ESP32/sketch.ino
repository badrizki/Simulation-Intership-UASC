#include <DHT.h>

#define DHTPIN 23       
#define DHTTYPE DHT22  
#define BUZZER_PIN 19   
#define LED_PIN 12     

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println("°C");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println("%");

  if ((temperature < 25) || (temperature > 30) || (humidity < 70) || (humidity > 90)) {
    digitalWrite(LED_PIN, HIGH);
    tone(BUZZER_PIN, 440, 500);
  } else {
    digitalWrite(LED_PIN, LOW);
    noTone(BUZZER_PIN);
  }

  delay(1000);
}

