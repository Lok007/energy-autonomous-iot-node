// Low-power embedded firmware for an energy-autonomous IoT node
// Demonstrates duty-cycled sensing with deep sleep operation

#include <esp_sleep.h>
#include <DHT.h>

#define SENSOR_GPIO        15
#define SENSOR_MODEL       DHT22

#define MICROSEC_FACTOR    1000000ULL
#define SLEEP_INTERVAL_SEC 300   // sleep duration in seconds

DHT environmentalSensor(SENSOR_GPIO, SENSOR_MODEL);

void setup() {
  Serial.begin(115200);
  delay(800);

  environmentalSensor.begin();

  float temperatureValue = environmentalSensor.readTemperature();
  float humidityValue    = environmentalSensor.readHumidity();

  if (!isnan(temperatureValue) && !isnan(humidityValue)) {
    Serial.print("Temperature: ");
    Serial.print(temperatureValue);
    Serial.print(" C | Humidity: ");
    Serial.print(humidityValue);
    Serial.println(" %");
  } else {
    Serial.println("Warning: Sensor data invalid");
  }

  Serial.println("Switching to deep sleep mode");

  esp_sleep_enable_timer_wakeup(
    SLEEP_INTERVAL_SEC * MICROSEC_FACTOR
  );
  esp_deep_sleep_start();
}

void loop() {
  // Execution resumes from setup() after wake-up
}
