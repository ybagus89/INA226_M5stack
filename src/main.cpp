#include <M5Stack.h>
#include <INA226_asukiaaa.h>

const uint16_t ina226calib = INA226_asukiaaa::calcCalibByResistorMilliOhm(2); // Max 5120 milli ohm
INA226_asukiaaa voltCurrMeter(INA226_ASUKIAAA_ADDR_A0_GND_A1_GND, ina226calib);

void setup() {
  M5.begin();
  Serial.begin(115200);

  // Use correct I2C pins for M5Stack Core
  // Wire1.begin(25, 26); // SDA, SCL
  // voltCurrMeter.setWire(&Wire1);

  if (voltCurrMeter.begin() != 0) {
    Serial.println("Failed to begin INA226");
    M5.Lcd.println("INA226 init failed!");
  } else {
    M5.Lcd.clear();
    M5.Lcd.setTextSize(3);
    M5.Lcd.setCursor(0, 0);
    M5.Lcd.println("INA226 Ready");
    delay(1000);
  }
}

void loop() {
  int16_t ma, mv, mw;
  M5.Lcd.clear();
  M5.Lcd.setTextSize(3);
  M5.Lcd.setCursor(0, 0);

  if (voltCurrMeter.readMV(&mv) == 0) {
    M5.Lcd.printf("V: %dmV\n", mv);
  } else {
    M5.Lcd.println("V: Error");
  }
  if (voltCurrMeter.readMA(&ma) == 0) {
    M5.Lcd.printf("I: %dmA\n", ma);
  } else {
    M5.Lcd.println("I: Error");
  }
  if (voltCurrMeter.readMW(&mw) == 0) {
    M5.Lcd.printf("P: %dmW\n", mw);
  } else {
    M5.Lcd.println("P: Error");
  }

  // Debug output to serial
  Serial.printf("Voltage: %d mV, Current: %d mA, Power: %d mW\n", mv, ma, mw);

  delay(1000);
}