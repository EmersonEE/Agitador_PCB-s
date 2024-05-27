#include <Arduino.h>
// #include <Conf_Oled.h>
#include <Tiempo.h>

uint8_t push1 = 8;  // INPUT
uint8_t push2 = 12; // INPUT
uint8_t push3 = 13; // INPUT
// uint8_t push4 = 7;  // INPUT

void setup()
{
    ConfiOled();
    ConfSetTime();
}

void Bienvenida()
{

    lcd.clearDisplay();
    lcd.drawRect(10, 20, 110, 40, WHITE); // dibuja rectangulo
    lcd.setCursor(18, 34);                // ubica cursor en coordenadas 28,34
    lcd.setTextSize(2);                   // establece tamano de texto en 2
    lcd.setTextColor(WHITE);              // establece color al unico disponible (pantalla monocromo)
    lcd.print("AGITADOR");                // escribe texto
    lcd.display();
}
void loop()
{
    Bienvenida();
    delay(1000);
    SetTime();
    delay(1000);
}
