/*-----( Import needed libraries )-----*/
// https://arduino-info.wikispaces.com/IR-RemoteControl

#include "IRremote.h"

/*-----( Declare Constants )-----*/
int receiver = 11; // pin 1 of IR receiver to Arduino digital pin 11

/*-----( Declare objects )-----*/
IRrecv irrecv(receiver);           // create instance of 'irrecv'
decode_results results;            // create instance of 'decode_results'
/*-----( Declare Variables )-----*/


void setup()   /*----( SETUP: RUNS ONCE )----*/
{
  Serial.begin(9600);
  Serial.println("YourDuino IR Receiver Button Decode Test");
  Serial.println("Questions: terry@yourduino.com");  
  irrecv.enableIRIn(); // Start the receiver

}/*--(end setup )---*/


void loop()   /*----( LOOP: RUNS CONSTANTLY )----*/
{
  if (irrecv.decode(&results)) // have we received an IR signal?

  {
//    Serial.println(results.value, HEX);  UN Comment to see raw values
    translateIR(); 
    irrecv.resume(); // receive the next value
  }  
}/* --(end main loop )-- */

/*-----( Declare User-written Functions )-----*/
void translateIR() // takes action based on IR code received

// describing KEYES Remote IR codes 

{

  switch(results.value)

  {

  case 0x511DBB: Serial.println(" FORWARD"); break;
  case 0x52A3D41F: Serial.println(" LEFT");    break;
  case 0xD7E84B1B: Serial.println(" -OK-");    break;
  case 0x20FE4DBB: Serial.println(" RIGHT");   break;
  case 0xA3C8EDDB: Serial.println(" REVERSE"); break;
  case 0xC101E57B: Serial.println(" 1");    break;
  case 0x97483BFB: Serial.println(" 2");    break;
  case 0xF0C41643: Serial.println(" 3");    break;
  case 0x9716BE3F: Serial.println(" 4");    break;
  case 0x3D9AE3F7: Serial.println(" 5");    break;
  case 0x6182021B: Serial.println(" 6");    break;
  case 0x8C22657B: Serial.println(" 7");    break;
  case 0x488F3CBB: Serial.println(" 8");    break;
  case 0x449E79F: Serial.println(" 9");    break;
  case 0x32C6FDF7: Serial.println(" *");    break;
  case 0x1BC0157B: Serial.println(" 0");    break;
  case 0x3EC3FC1B: Serial.println(" #");    break;
  case 0xFFFFFFFF: Serial.println(" REPEAT");break;

  default: 
    Serial.println(" other button   ");

  }// End Case

  delay(500); // Do not get immediate repeat


} //END translateIR



/* ( THE END ) */
