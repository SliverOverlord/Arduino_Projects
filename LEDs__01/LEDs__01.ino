/***********************************************************
File name:   01_blinkingLed.ino
Author: Joshua DeNio
Date: 03/24/2020
Description:  Lite LEDs and let the LEDs blink a patriotic squence.

***********************************************************/
// Set pins
int ledPin_red = 8; 
int ledPin_white = 9;
int ledPin_blue = 7;

// Code setup
void setup()
{
  pinMode(ledPin_red,OUTPUT); 
  pinMode(ledPin_white,OUTPUT);
  pinMode(ledPin_blue,OUTPUT);
}

// main loop
void loop()
{  
  digitalWrite(ledPin_red,HIGH);
  delay(200);
  digitalWrite(ledPin_red,LOW);
  delay(1000);
  digitalWrite(ledPin_white,HIGH);
  delay(200);
  digitalWrite(ledPin_white,LOW);
  delay(1000);
  digitalWrite(ledPin_blue,HIGH);
  delay(200);
  digitalWrite(ledPin_blue,LOW);
  delay(1000);
} 
