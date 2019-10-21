  int switchPin = 7; //the switch connect to pin 12
  int switchPin1 = 6; //the switch connect to pin 12
int switchState = 0;// variable for reading the pushbutton status
int switchState1 = 0;// variable for reading the pushbutton status
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  
  pinMode(switchPin, INPUT); //initialize thebuttonPin as input
   pinMode(switchPin1, INPUT); //initialize thebuttonPin as input
 
}

void loop()
{ 
  //read the state of the switch value
  switchState = digitalRead(switchPin);
  switchState1 = digitalRead(switchPin1);
  
  if (switchState == HIGH ) //if it is,the state is HIGH
  {
    digitalWrite(2, HIGH);//turn the led on
    delay(20);
    digitalWrite(2, LOW);//TUrn the led off
  }
  if (switchState == LOW )
  {
   digitalWrite(2, LOW);
  }
  if (switchState1 == HIGH)
  {
   digitalWrite(3, HIGH); //turn the led off
    delay(40);
    digitalWrite(3, LOW);// turn off led
  }
  if (switchState1 == LOW )
  {
   digitalWrite(3, LOW);
  }
}