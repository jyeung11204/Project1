int analogPin = A5;
int oldnum;

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
  int currentnum = analogRead(analogPin);
  

  if (oldnum < currentnum) { 
    //if oldnum is getting brighter then go towards the light  
      OrangutanMotors::setSpeeds(15, 15);
      delay(1000);
    }
    else 
    {
      OrangutanMotors::setSpeeds(15, -15);
      delay(1000);
    }
     oldnum = currentnum;
  
  OrangutanLCD::clear();
  OrangutanLCD::print(currentnum);
  delay(100);
}
