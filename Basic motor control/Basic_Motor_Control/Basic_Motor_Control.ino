/*

  This code is based on some existing tutorials, in particular one on Adafruit's Learning platform

  http://learn.adafruit.com/adafruit-arduino-lesson-13-dc-motors/overview

*/

/*

  It's not good practice to "hard wire" variables, what if we wanted to change pins.

  So let's create some constants. Contstants are just variables which don't change.

*/


const int MOTOR_PIN = 3;



void setup() {
  // put your setup code here, to run once:
  
  // this sets pin 3 to be an output, connected to something, in this case the motor circuit
  pinMode(3, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly: 
  
  // here we're writing a "speed" to pin 3. it's an analogue value of 255 which is the highest speed. 
  analogWrite(3, 255);
}
