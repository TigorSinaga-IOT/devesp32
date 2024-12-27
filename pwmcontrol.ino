const int opto = 5;  // 16 corresponds to GPIO 16
const int ledPinmerah = 21;
const int brightness = 255;


void setup() {
  // set the LED as an output
  Serial.begin(9600);
  pinMode(opto,OUTPUT);
}

void loop()
{
//  if (Serial.available() > 0) {
//     // Baca data serial
//     char data = Serial.read();
    
//     // Analisis data
//     if (data == '1') {
//       // Nyalakan pin 5
//       analogWrite(opto,255);
//     } 
//     else if (data == '0') {
//       // Matikan pin 5
//       analogWrite(opto,0);
//     }
//   }
  //analogWrite(opto,230);
  
    for(int dutyCycle = 10; dutyCycle <= 255; dutyCycle+=25)
    {   
    // changing the LED brightness with PWM
    analogWrite(opto, dutyCycle);
    delay(500);
    }

  // // decrease the LED brightness
  // for(int dutyCycle = 255; dutyCycle >= 0; dutyCycle-=30){
  //   // changing the LED brightness with PWM
  //   analogWrite(ledPinhijau, dutyCycle);
  //   delay(15);
  // }
  // // increase the LED brightness
  
  // for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle+=30){   
  //   // changing the LED brightness with PWM
  //   analogWrite(ledPinmerah, dutyCycle);
  //   delay(15);
  // }

  // // decrease the LED brightness
  // for(int dutyCycle = 255; dutyCycle >= 0; dutyCycle-=30){
  //   // changing the LED brightness with PWM
  //   analogWrite(ledPinmerah, dutyCycle);
  //   delay(15);
  // }
}