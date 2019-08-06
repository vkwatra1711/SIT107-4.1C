void setup() 
{
  Serial.begin(9600); // open serial port, set the baud rate as 9600 bps
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop() 
{
  int val;
  val = analogRead(0); //connect sensor to Analog 0
  Serial.println(val); //print the value to serial port
  if ( val <= 100 )
  {
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else
  {
    digitalWrite(LED_BUILTIN, LOW);
  }
}
