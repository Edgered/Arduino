// Define Pins

#define RED 3
#define GREEN 5
#define BLUE 6
#define delayTime 1000


void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, HIGH);
}

void loop() { 
  int redValue = 150;
  int greenValue = 140;
  int blueValue = 250;
  
  analogWrite(RED, 255 - redValue);
  analogWrite(GREEN, 255 - greenValue);
  analogWrite(BLUE, 255 - blueValue);  
  delay(delayTime);
   
  analogWrite(RED, 244);
  analogWrite(GREEN, 165);
  analogWrite(BLUE, 16);
  delay(delayTime);

  analogWrite(RED, 33);
  analogWrite(GREEN, 00);
  analogWrite(BLUE, 00);
  delay(delayTime);
  // put your main code here, to run repeatedly:

}
