bool bs=1;  //buton state
bool lbs=1; //last button state 
double bpt=0; //button press time
double brt=0; //button release time

void setup(){
  pinMode(8,INPUT_PULLUP);
  Serial.begin(9600);
}

void loop(){
  bs=digitalRead(8);
  if(bs!=lbs){
    if(bs==0){
      bpt=millis();
    }
    else{
      brt=millis();
      double  buttonduration=(brt-bpt)/1000;
      Serial.print("TIME =");
      Serial.print(buttonduration);
      Serial.println('s');
    }
  }
  lbs=bs;
  }