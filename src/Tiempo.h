#include <Arduino.h>
#include <Conf_Oled.h>

float readpot = A2;
bool estadol = true;
int inout = 7;
int lecant = -1;
float tiempo;
void ConfSetTime()
{
    pinMode(inout, INPUT);
}
void SetTime()
{
    lcd.clearDisplay();
    while (estadol)
    {
        lcd.setCursor(20, 4);
        lcd.setTextSize(1);
        lcd.print("Ingrese el Tiempo");
        lcd.setCursor(18, 20);
        lcd.setTextSize(1);
        lcd.print("A Agitar el PCB");
        lcd.setCursor(0, 40);
        lcd.setTextSize(2);
        lcd.print("MIN: ");
        lcd.display();
        // tiempo = analogRead(readpot);
        readpot = map(analogRead(A2),0,1023,0,180);
        lcd.setCursor(50, 40);
        lcd.print(String(readpot));
        if(readpot != lecant){
            lcd.clearDisplay();
            lecant = readpot;
        }
        if (digitalRead(inout) == 1)
        {
            estadol = false;
        }
        else
        {
            estadol = true;
        }
    }
}