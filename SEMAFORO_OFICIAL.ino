int sensorPin = A0;
int boton =2;
int sensorValue; 
int rapidez;
void setup() {
  // put your setup code here, to run once:
  pinMode(boton,INPUT);
  pinMode(9,OUTPUT);// ROJO PEATON
  pinMode(10,OUTPUT);// VERDE PEATON
  pinMode(11,OUTPUT);// VERDE CARRO
  pinMode(12,OUTPUT);// AMARILLO CARRO
  pinMode(13,OUTPUT);// ROJO CARRO
  //delay(rapidez);

}

void loop() {
  sensorValue = analogRead(sensorPin);
  rapidez = map(sensorValue, 0,70,0,500);
  // put your main code here, to run repeatedly:
digitalWrite(11, HIGH); // VERDE CARRO ENCENDIDO
digitalWrite(9, HIGH); // ROJO PEATON ENCENDIDO

if(digitalRead(boton)==LOW){
digitalWrite(11,LOW);// VERDE CARRO APAGADO
digitalWrite(12,HIGH);// AMARILLO CARRO ENCENDIDO
delay(2500);
digitalWrite(12,LOW);// AMARILLO CARRO APAGADO
digitalWrite(13,HIGH);// ROJO CARRO ENCENDIDO
digitalWrite(9,LOW);// ROJO PEATON APAGADO
digitalWrite(10,HIGH);// VERDE PEATON ENCENDIDO
delay(8000);
//delay(rapidez);
digitalWrite(10,LOW);// VERDE PEATON APAGADO
digitalWrite(13,LOW);// ROJO CARRO APAGADO

}
} 

