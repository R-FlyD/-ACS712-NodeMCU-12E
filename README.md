<div  Align="justify">

# ACS712-30A
## Configuração da IDE Arduino para o NodeMCU

Para incluir a placa ESP8266 NodeMCU na IDE Arduino, acesse o menu Arquivo e em seguida Preferências. No campo URLs Adicionais para Gerenciadores de Placas preencha com o seguinte endereço:


> http://arduino.esp8266.com/stable/package_esp8266com_index.json


Clique em OK para continuar. No menu Ferramentas -> Placa -> Gerenciador de Placas procure por esp8266 by ESP8266 Community e clique em Instalar:

  
<div align="center">
  <img src="https://www.arduinoecia.com.br/wp-content/uploads/2019/04/IDE-Arduino-Gerenciador-de-Placas-768x192.jpg" width=600><br>
</div>

  
Com isso o NodeMCU irá aparecer na sua lista de placas disponíveis. Para utilizar o NodeMCU com a IDE Arduino, no meu caso o modulo é o **(ESP-12E Module)** da lista:

  
<div align="center">
  <img src="https://www.arduinoecia.com.br/wp-content/uploads/2019/04/IDE-Arduino-Selecao-Placa-Nodemcu-ESP8266-600x329.jpg" width=400><br>
</div>

Após carregar o programa, talvez seja necessário pressionar o botão **RST** (**RESET**) do ESP8266 NodeMCU para que o programa seja corretamente executado.

## Execução
Crie o repositorio e abra a pasta **ACS712** na IDE do Arduino, para posteriormente upar o codigo com o microcontrolador desejado. No meu caso o modulo foi utilizado juntamente com ESP8266 NodeMCU-12E, o esquematico de ligação pode ser encontrado logo abaixo, utilizando o pino Analogico do ESP8266 NodeMCU A0.

<div align="center">
  <img src="https://github.com/arthurcoelho442/ACS712-NodeMCU-12E/assets/56831082/b654e5d2-4e8d-4ed8-b658-6d9321bdba0f" width=600><br>
</div>

Para se utilizar o sensor com o nodeMCU você precisará:
- Alimentação de 5V para o sensor, pino Vin se a alimentação da placa for via USB.
- A entrada ADC do ESP8266 funciona na faixa de 0-1 Volts, isso significa que você precisa usar o divisor de tensão para converter a faixa de 0-5V da saida do sensor para 0-1V.
 
Com o programa carregado, espere alguns segundos para a calibragem do sensor e posteriormente coloque o sensor de corente em serie do circuito a ser analizado.

# Autores
| [<img src="https://avatars.githubusercontent.com/u/56831082?v=4" width=115><br><sub>Arthur Coelho Estevão</sub>](https://github.com/arthurcoelho442) |
| :---: |
</div>
