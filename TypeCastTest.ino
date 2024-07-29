// Type Cast Test
// learn type casting behavior

void setup() 
{
  Serial.begin(9600);
  
  while(!Serial);

  displayMessage("Starting TypeCastTest.ino");
  
  long mPulses = (long) ( tPulses / 2.0 );

  long mPulses = (long) ( tPulses / 2 );
}

void loop() 
{

}
