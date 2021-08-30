#define NUMBASE 2
#define NUMBITS 5
#define ENCENDIDO LOW
#define APAGADO  HIGH

const int addr[] = { 3, 4, 5, 6, 7};
const int startButton = 2;

void setup() {
  Serial.begin(9600);
  Serial.println("Iniciando..."); 

  pinMode(startButton,INPUT);

  for(int i = 0; i <= NUMBITS; i++){
     pinMode(addr[i],OUTPUT);
     digitalWrite(addr[i], APAGADO);
  }
}

void loop() {
  int buttonState = digitalRead(startButton);
  if(buttonState == APAGADO) {
  } 
  else{
    for (int count = 0; count <= (int)pow(NUMBASE, NUMBITS); count++){
      int count2 = 0;
      for( int i = 0; i < NUMBITS; i++){
        count2++;
        int num_module = (int)(pow(NUMBASE, count2) + 0.1);
        int num_comparator = (num_module / 2) - 1;
        if(count % num_module > num_comparator) {
          digitalWrite(addr[i], ENCENDIDO);
        }else{
           digitalWrite(addr[i], APAGADO);
        }
        Serial.print("count "); Serial.print(count);
        Serial.print(" % ");  Serial.print(num_module);
        Serial.print(" > ");  Serial.print(num_comparator);
        Serial.print(" OUT: B");  Serial.print(i);
        Serial.print(" = ");  Serial.println(count % num_module > num_comparator);
      }
      delay(250);
      count2 = 0;
      Serial.println(" -------------- ");
    }
  }
}