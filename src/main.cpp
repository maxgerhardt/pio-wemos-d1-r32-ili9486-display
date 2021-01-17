#include <Arduino.h>
#include <TFT_eSPI.h> // Hardware-specific library

TFT_eSPI tft = TFT_eSPI(); // Invoke custom library

int i = 0;

void setup()
{
    Serial.begin(115200);
    Serial.println("Firmware begin!!");
    tft.begin();
    tft.setRotation(1);
}

void loop()
{
    tft.fillScreen(TFT_BLACK);
    tft.setTextColor(TFT_WHITE, TFT_BLACK);
    //  tft.drawCentreString("Hello world " + String(i), 100, 80, 1);
    tft.drawCircle(360 / 2, 420 / 2, 500, TFT_RED);
    Serial.println("TFT draw complete");
}