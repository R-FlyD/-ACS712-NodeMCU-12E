<div  Align="justify">

# ACS712-30A

## Execução
Crie o repositorio e abra a pasta **ACS712** na IDE do Arduino, para posteriormente upar o codigo com o microcontrolador desejado. No meu caso o modulo foi utilizado juntamente com ESP8266 NodeMCU-12E, o esquematico de ligação pode ser encontrado logo abaixo, utilizando o pino Analogico do ESP8266 NodeMCU A0, que no programa são

<div align="center">
  <img src="https://github.com/arthurcoelho442/ACS712-NodeMCU-12E/assets/56831082/a5dd74d1-0987-439f-bd32-e2eff18e6336" width=600><br>
</div>

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

Com o programa carregado, basta aproximar a tag da antena e o led irá acender. Se você não tem um led ou deseja apenas testar o módulo, pode acompanhar o resultado também pelo **Serial Monitor**, onde a ID da tag é mostrada:
  
  
<div align="center">
  <img src="https://www.arduinoecia.com.br/wp-content/uploads/2020/08/Serial-Monitor-Leitor-RFID-RDM6300.jpg" width=450><br>
</div>

# Autores
| [<img src="https://avatars.githubusercontent.com/u/56831082?v=4" width=115><br><sub>Arthur Coelho Estevão</sub>](https://github.com/arthurcoelho442) |  [<img src="https://avatars.githubusercontent.com/u/56406192?v=4" width=115><br><sub>Milena da Silva Mantovanelli</sub>](https://github.com/Milena0899) |
| :---: | :---: |
</div>
