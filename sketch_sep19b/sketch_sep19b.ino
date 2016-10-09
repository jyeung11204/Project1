int analogPin = A5;

#include <Pololu3pi.h>
#include <PololuQTRSensors.h>
#include <OrangutanMotors.h>
#include <OrangutanAnalog.h>
#include <OrangutanLEDs.h>
#include <OrangutanLCD.h>
#include <OrangutanPushbuttons.h>
#include <OrangutanBuzzer.h>

Pololu3pi robot;

void setup() {
  // put your setup code here, to run once:
  pinMode(analogPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    
    int irnum = analogRead(analogPin);
    //OrangutanLCD::clear();
    
    if (irnum >= 450) { 
      OrangutanMotors::setSpeeds(-100, 15);
      delay(1000);
    }
    else 
    {
      OrangutanMotors::setSpeeds(15, 15);
    }
    OrangutanLCD::clear();
    //OrangutanMotors::setSpeeds(15, 15);
    OrangutanLCD::print(analogRead(analogPin));
    delay(100);
}
