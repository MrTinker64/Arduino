#include <Servo.h>  // servo library

Servo servo1;  // servo control object

void setup()
{

 servo1.attach(9, 900, 2100);  //Connect the servo to pin 9 with a minimum pulse width of 900 and a maximum pulse width of2100.
}

void loop()
{ 
 // To control a servo, you give it the angle you'd like it
 // to turn to. Servos cannot turn a full 360 degrees, but you
 // can tell it to move anywhere between 0 and 180 degrees.

 // Change position at full speed:

 servo1.write(180); 

 delay(2000);         // Pause to get it time to move

//  servo1.write(180);

//  delay(2000);         // Pause to get it time to move
}