#include <SPI.h>       
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>   

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

// Declaration for SSD1306 display connected using software SPI (default case):
#define OLED_MOSI   9
#define OLED_CLK   10
#define OLED_DC    11
#define OLED_CS    12
#define OLED_RESET 13
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT,
  OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);
  
  
  float n=0;
  
void setup() {
  Serial.begin(9600);

  // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  
  if(!display.begin(SSD1306_SWITCHCAPVCC)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); }
      display.display();
  delay(2000);
  // Don't proceed, loop forever
  // Scroll in various directions, pausing in-between:
 //display.startscrollleft(0x00, 0x0F);
  //delay(40000000);

}
void loop() {
  display.clearDisplay();
  Serial.print(n);
  display.setCursor(0, 10);
  display.setTextSize(2); // Draw 2X-scale text
  display.setTextColor(SSD1306_WHITE);
  display.print("Pain!");
  display.display();      // Show initial text
  delay(500);
  display.clearDisplay();display.setCursor(0, 10);
  display.setTextSize(2); 
  display.print("You made  me a");
  display.display();      // Show initial text
  delay(1000);
  display.clearDisplay();display.setCursor(0, 10);
  display.setTextSize(2); 
  display.print("You made  me a");
  display.display();      // Show initial text
  delay(1000);
  display.clearDisplay();display.setCursor(0, 10);
  display.setTextSize(2); 
  display.print("Believer");
  display.display();      // Show initial text
  delay(4000);
  display.clearDisplay();display.setCursor(0, 10);
  display.setTextSize(2); 
 // display.startscrollleft(0x00, 0x0F);
 // delay(40000000);
  display.print("Pain!");
  display.display();      // Show initial text
  delay(1000);
  display.clearDisplay();display.setCursor(0, 10);
  display.setTextSize(2); 
  display.print("You break me down");
  display.display();      // Show initial text
  delay(1200);
  display.clearDisplay();display.setCursor(0, 10);
  display.setTextSize(2); 
    display.print("You build  me up");
  display.display();      // Show initial text
  delay(1000);
  display.clearDisplay();display.setCursor(0, 10);
  display.setTextSize(2); 
    display.print("Believer");
  display.display();      // Show initial text
  delay(4000);
  display.clearDisplay();display.setCursor(0, 10);
  display.setTextSize(2); 
}
