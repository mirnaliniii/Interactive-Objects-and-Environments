void setup() {
    const int BUTTON1 = A2;
    const int BUTTON2 = A0;
    int inPin = A1;
    int val = 0;
  
   // start serial port at 9600 bps:
   Serial.begin(9600);
}
// 
//void loop() {
// // this example uses sensors with a range 0-1023
// // to change the range to 0-255, just divide by 4
// //otherwise use the map() method to convert the range 
//    for (int thisSensor = 0; thisSensor < 2; thisSensor++) {
//      int sensorValue = analogRead(thisSensor);
//      Serial.print(sensorValue);
//      // if you're on the last sensor value, end with a println()
//      // otherwise, print a comma
//      //The number of sensors needs to be hard coded, in this example 3 sensors are running 0,1,2
//      if (thisSensor == 0) {
//         Serial.println("normal call");
//      } else {
//         Serial.print(",");
//      }
//   }
//}

void loop() {
        int val = 0;
        int val2 =0;
        int inPin = A1;
        int inPin1 = A0;
        
    val = digitalRead(inPin);  // read input value
  if (val == HIGH) {         // check if the input is HIGH (button released)
    Serial.println("Normal Call from Mrs.Bloomberg");  // turn LED OFF
  } if (val == LOW) {
    Serial.println("");  // turn LED ON
  }

   val2 = digitalRead(inPin1);  // read input value
  if (val2 == HIGH) {         // check if the input is HIGH (button released)
    Serial.println("Urgent Call from Mrs.Bloomberg");  // turn LED OFF
  } if (val2 == LOW) {
    Serial.println("");  // turn LED ON
  }

  
  
}

                  
