<h1 align = "center">Primeiros passos com a ESP8266MOD no Arduino IDE</h1>

## Processo de instalação na IDE:

- Pré requisito: Ter a IDE do Arduino ja instalada;

- 1º Em sua Arduino IDE, vá para **Arquivo> Preferências**;

- 2º Em URLs Adicionais para Gerenciadores de Placas adicione o seguinte link: `http://arduino.esp8266.com/stable/package_esp8266com_index.json`
e clique no botão OK;

- 3º no menu abra **Ferramentas > Placa > Gestor de Placas…**;

- 4º Pesquise **ESP8266**, em **ESP8266 by ESP8266 Community** clique no botão de instalar, aguarda a instalação e feche a aba;

## Rodando programa de teste:

- Conecte sua placa ao a uma das portas USB de seu dispositivo;

- No menu abra **Ferramentas > Placa > ESP8266 Boards > Generic ESP8266 Module** 

- No menu abra **Ferramentas > Porta >** e selecione a porta USB em que o modulo está conectado.

- No menu abra **Arquivo > Exemplos > 01.Basics > Blink**, este script irá fazer com que o LED do modulo pisque a cada 1 segundo.

- Compile e carregue o script no Modulo.
