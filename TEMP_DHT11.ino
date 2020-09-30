/**
   Criado por Paçoca Tech

   Youtube: https://www.youtube.com/channel/UCW6OP5j28zFsnKxpQ2v9CsA
   Instagram: http://instagram.com/pacocatech
   Github: http://github.com/pacocatech
   E-mail: pacocatech@gmail.com

   Biblioteca: http://hobbyist.co.nz/sites/default/files/WeatherStation/DHT.zip
   Manipulando sensor DHT11.
*/
#include <dht.h>
#define pinoSensor A1 

//criamos o objeto que controla o sensor
dht DHT; 

void setup()
{
  //iniciando o monitor serial
  Serial.begin(9600);

  //Aguardamos 1 segundo para começar a ler os dados do sensor
  delay(1000);
}
void loop()
{
  //iniciamos o objeto que irá controlar o sensor
  DHT.read11(pinoSensor);
  
  Serial.print("Temperatura = ");
  //recuperamos a informação de temperatura
  Serial.println(DHT.temperature); 
  
  Serial.print(" Umidade = ");
  //recuperamos a informação de umidade
  Serial.print(DHT.humidity);
  Serial.println(" %  ");
  
  delay(2000);  
}
