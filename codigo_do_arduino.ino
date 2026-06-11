//importando a biblioteca do servo motor
#include <Servo.h> 

//instalando um objeto chamado Servo
Servo servo;

//crio uma função que inicializa os pinos e computadores
void setup(){
  Serial.begin(9600); // vel. de comunicação
  servo.attach(3); //Pino onde ligamos o sinal do servo motor
}

//crio uma função que se repete infinitamente
void loop () {
	for (int posicao = 0 ; posicao <= 180 ; posicao ++){
    	servo.write(posicao);
 		Serial.println(posicao);
     	delay(50);
    }
	for (int posicao = 180 ; posicao >= 0 ; posicao --){
    	servo.write(posicao);
 		Serial.println(posicao);
      	delay(50);
    }
} 