int pincount = 8;
int lampu[8] ={2, 3, 4, 5, 6, 7, 8, 9};



void setup() {

  for (int i=0; i<pincount; i=i+1){
    pinMode (lampu[i], OUTPUT);
  }
  
}

void loop() {

  for (int i=0; i<pincount; i=i+1){
    digitalWrite(lampu[i], HIGH);
    delay(100);
    digitalWrite(lampu[i], LOW);
  }
  for (int i=pincount-1; i>=0; i=i-1){
    digitalWrite(lampu[i], HIGH);
    delay(100);
    digitalWrite(lampu[i], LOW);
  }
  
}
