#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Create LCD object with I2C address (0x27 or 0x3F), columns, rows
LiquidCrystal_I2C lcd(0x27, 16, 2); // Use 0x3F if 0x27 doesn't work

const int flameSensorPin = 2;  // Flame sensor digital output
const int buzzerPin = 5;       // Buzzer pin

void setup() {
  pinMode(flameSensorPin, INPUT);
  pinMode(buzzerPin, OUTPUT);

  Serial.begin(9600);
  Serial.println("🔥 Fire Alarm System Starting...");

  lcd.init();           // Initialize LCD
  lcd.backlight();      // Turn on LCD backlight
  lcd.setCursor(0, 0);
  lcd.print("Fire Alarm Ready");
  delay(2000);
  lcd.clear();
}

void loop() {
  int flameStatus = digitalRead(flameSensorPin);

  if (flameStatus == LOW) { // Flame detected
    Serial.println("🚨 FIRE DETECTED! Starting alarm sequence...");
    lcd.setCursor(0, 0);
    lcd.print("** FIRE ALERT **");
    lcd.setCursor(0, 1);
    lcd.print("Evacuate Now!");

    // Beep for 10 seconds (on/off every 500ms)
    for (int i = 0; i < 10; i++) {
      digitalWrite(buzzerPin, HIGH);
      Serial.print("🚨Alarm ON  ("); Serial.print(i+1); Serial.println("/10)");
      delay(500); // Buzzer ON for 0.5 sec
      digitalWrite(buzzerPin, LOW);
      Serial.print("Beep OFF ("); Serial.print(i+1); Serial.println("/10)");
      delay(500); // Buzzer OFF for 0.5 sec
    }

    Serial.println("🔄 Alarm sequence complete. Cooling down...");
    // Show cooling‑down message
    lcd.setCursor(0, 0);
    lcd.print("Waiting...       ");
    lcd.setCursor(0, 1);
    lcd.print("Rechecking...    ");
    delay(2000);
    lcd.clear();

  } else {
    digitalWrite(buzzerPin, LOW);
    Serial.println("✅ No fire detected. Monitoring...");
    lcd.setCursor(0, 0);
    lcd.print("No Fire Detected");
    lcd.setCursor(0, 1);
    lcd.print("System Normal   ");
    delay(500); // Normal monitoring delay
  }
}
