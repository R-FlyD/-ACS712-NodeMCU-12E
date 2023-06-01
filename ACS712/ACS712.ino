int pino_sensor = A0;
int menor_valor;
int valor_lido;
int menor_valor_acumulado = 0;
int ZERO_SENSOR = 0;
float corrente_pico;
float corrente_eficaz;
double maior_valor=0;
double corrente_valor=0;

void setup() {
  Serial.begin(9600);
  pinMode(pino_sensor,INPUT);
delay(3000);
 //Fazer o AUTO-ZERO do sensor
Serial.println("Fazendo o Auto ZERO do Sensor...");

menor_valor = 1024; //4095 para ESP32
 
  for(int i = 0; i < 10000 ; i++){
    valor_lido = analogRead(pino_sensor);
    if(valor_lido < menor_valor){
      menor_valor = valor_lido;    
    }
    delayMicroseconds(1);  
  }
  ZERO_SENSOR = menor_valor;
  Serial.print("Zero do Sensor:");
  Serial.println(ZERO_SENSOR);
  delay(3000);
 }

 
void loop() {

  //Zerar valores
  menor_valor = 1024; //4095 para ESP32
 
  for(int i = 0; i < 1600 ; i++){
    valor_lido = analogRead(pino_sensor);
    if(valor_lido < menor_valor){
      menor_valor = valor_lido;    
    }
    delayMicroseconds(10);  
  }

  Serial.print("Menor Valor:");
  Serial.println(menor_valor);

  //Transformar o maior valor em corrente de pico
  corrente_pico = ZERO_SENSOR - menor_valor; // Como o ZERO do sensor é 2,5 V, é preciso remover este OFFSET. Na leitura Analógica do ESp32 com este sensor, vale 2800 (igual a 2,5 V).
  corrente_pico = corrente_pico*0.9766; // A resolução mínima de leitura para o ESp32 é de 0.8 mV por divisão. Isso transforma a leitura analógica em valor de tensão em [mV}, para o nodeMCU 0,9766 pós o adc e o dac é 1V/1024
  corrente_pico = corrente_pico/66; //185 - ACS712-05B, 100 - ACS712-20A, 66 - ACS712-30A,                                    
  
  Serial.print("Corrente de Pico:");
  Serial.print(corrente_pico);
  Serial.println(" A");
    
  //Converter para corrente eficaz  
  corrente_eficaz = corrente_pico/1.4;
  Serial.print("Corrente Eficaz:");
  Serial.print(corrente_eficaz);
  Serial.println(" A");
  Serial.println("########################");
 
 delay(1000);
}
