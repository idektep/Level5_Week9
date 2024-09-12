#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  // 0x3C คือที่อยู่ I2C ของหน้าจอ OLED
  delay(2000);
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
}

void loop() {
  //display.setTextSize(1);
  //display.setTextColor(SSD1306_WHITE);
  display.setCursor(25, 10);
  display.println("Hello, World!");
  display.display();
  delay(1000);
  display.clearDisplay();
}
