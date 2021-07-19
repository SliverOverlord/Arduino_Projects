/***********************************************************
File name:   01_blinkingLed.ino
Author: Joshua DeNio
Date: 03/24/2020
Description:  Turns on the red LED and buzzer then the green LED when the buzzer is off.

***********************************************************/
// Set pins
int ledPin_red = 8; 
int ledPin_green = 9;
int buzzer_pin = 10;

// Sing a song
void sing()
{
  
}

// Code setup
void setup()
{
  // set pins to output
  pinMode(ledPin_red,OUTPUT); 
  pinMode(ledPin_green,OUTPUT);
  pinMode(buzzer_pin, OUTPUT); 
}

// main loop
void loop()
{
  // Turn on red LED
  digitalWrite(ledPin_red,HIGH);
  // Turn on buzzer
  digitalWrite(buzzer_pin, HIGH);
  delay(1000);

  // Turn off the buzzer and red LED
  digitalWrite(buzzer_pin, LOW); 
  digitalWrite(ledPin_red,LOW);

  // Wait and flash white LED
  delay(1000);
  digitalWrite(ledPin_green,HIGH);
  delay(200);
  digitalWrite(ledPin_green,LOW);
  delay(1000);                   
}
