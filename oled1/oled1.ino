#include "U8glib.h"

U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_DEV_0 | U8G_I2C_OPT_NO_ACK | U8G_I2C_OPT_FAST); // Fast I2C / TWI

void setup() {
  u8g.setFont(u8g_font_tpssb);
  u8g.setColorIndex(1);
}

void loop() {
  u8g.firstPage();
  do{
    u8g.drawStr(40, 35, "Level 5");
  }
  while(u8g.nextPage());
}
