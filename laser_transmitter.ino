int laser = 5;
int num = 342;
int x[10];
int* binary_con(int n);

void setup() {
  Serial.begin(9600);
 pinMode(laser, OUTPUT);
 //Serial.print("Podaj liczbe:");
}

void loop() {

//while(Serial.available()==0){}
   //num = Serial.parseInt();       
binary_con(num); 
/*
for(int i = 0; i < 10; i++){
  Serial.print(x[i]);
  }
*/ 
  //inicjalizacja połaczenia
  digitalWrite(laser, HIGH);
  delay(2000);
  digitalWrite(laser, LOW);
//przekaz danych
 for(int i = 0; i < 10; i++){
  if(x[i] == 1){
    digitalWrite(laser, HIGH);
    delay(500);
    }
    else{digitalWrite(laser, LOW); delay(500);}
  }
}
int* binary_con(int n){
  int bin[10];
  for(int i = 0; i < 10; i++){
    bin[i] = n%2;
    n = n/2;
    }
  for(int i = 0; i < 10; i++){
    x[i] = bin[9-i];
    }  
    return x;
  }
