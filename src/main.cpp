#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define ANCHO 128
#define ALTO 64

uint8_t push1 = 8;  // INPUT
uint8_t push2 = 12; // INPUT
uint8_t push3 = 13; // INPUT
uint8_t push4 = 7;  // INPUT

#define DISPLAY_RESET 4
// display Objeto
Adafruit_SSD1306 lcd(ANCHO, ALTO, &Wire, DISPLAY_RESET);

void setup()
{
    Wire.begin();
    lcd.begin(SSD1306_SWITCHCAPVCC, 0x3C);
}

void Bienvenida()
{

    lcd.clearDisplay();
    lcd.drawRect(10, 20, 110, 40, WHITE); // dibuja rectangulo
    lcd.setCursor(18, 34);                // ubica cursor en coordenadas 28,34
    lcd.setTextSize(2);                   // establece tamano de texto en 2
    lcd.setTextColor(WHITE);              // establece color al unico disponible (pantalla monocromo)
    lcd.print("AGITADOR");                // escribe texto
    delay(1000);
    lcd.display();
    lcd.clearDisplay();
    lcd.drawRect(10, 20, 110, 40, WHITE); // dibuja rectangulo
    lcd.setCursor(18, 34);                // ubica cursor en coordenadas 28,34
    lcd.setTextSize(2);                   // establece tamano de texto en 2
    lcd.setTextColor(WHITE);              // establece color al unico disponible (pantalla monocromo)
    lcd.print("EMER :)");                 // escribe texto
    delay(1000);
    lcd.display(); // muestra en pantalla todo lo establecido anteriormente
}
void loop()
{
    Bienvenida();
    lcd.clearDisplay();
    lcd.setCursor(20,4);
    lcd.setTextSize(1);
    lcd.print("Eliga el Tiempo");
    lcd.setCursor(18,20);
    lcd.setTextSize(1);
    lcd.print("A Agitar el PCB");
    lcd.setCursor(0,40);
    lcd.setTextSize(2);
    lcd.print("MIN: ");
    lcd.display();
    delay(1000);
}
