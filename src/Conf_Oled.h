#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define ANCHO 128
#define ALTO 64
#define DISPLAY_RESET 4



Adafruit_SSD1306 lcd(ANCHO, ALTO, &Wire, DISPLAY_RESET);

void ConfiOled()
{
    Wire.begin();
    lcd.begin(SSD1306_SWITCHCAPVCC, 0x3C);
}