#include "U8glib.h"

U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_DEV_0 | U8G_I2C_OPT_NO_ACK | U8G_I2C_OPT_FAST); // Fast I2C / TWI

const int NUM_ITEMS = 6; // number of items in the list and also the number of screenshots and screenshots with QR codes (other screens)
const int MAX_ITEM_LENGTH = 20; // maximum characters for the item name

char page [NUM_ITEMS] [MAX_ITEM_LENGTH] = {  // array with item names
  { "Level 1" }, 
  { "Level 2" }, 
  { "Level 3" }, 
  { "Level 4" }, 
  { "Level 5" }, 
  { "Academy" },   
 };

int count = 0;

void setup() {
  u8g.setFont(u8g_font_tpssb);
  u8g.setColorIndex(1);
}

void loop() {
  u8g.firstPage();
  do{
    u8g.drawStr(40, 35, page[count]);
  }
  while(u8g.nextPage());
  delay(1000);
  count++;
  if(count >= NUM_ITEMS)
  {
    count = 0;
  }
}
