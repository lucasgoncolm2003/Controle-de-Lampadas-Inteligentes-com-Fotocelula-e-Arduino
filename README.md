# Circuito Integrado de Controle de Lâmpadas Inteligentes com Fotocélula ou Sensor de Luminosidade com Arduino - [Fotorresistor, Resistor, Bateria, Relé SPDT, Transistor NPN, Diodo e Lâmpada] 
O Projeto foi realizado com Arduino, Fotorresistor ou Sensor de Luminosidade, Resistor, Bateria 9V, Relé SPDT, Transistor NPN, Diodo e Lâmpadas. Esse circuito funciona com o monitoramento do ambiente por parte de um Sensor de Luminosidade que acende as Lâmpadas no momento em que o Sensor detecta pouca luminosidade no ambiente, ou seja, quando o ambiente anoitece, podendo ser usado como recurso de Automação Residencial, Predial ou Industrial. Aqui está um anexo que mostra o circuito montado com todos os seus componentes, com desenho projetado em Tinkercad.
<br>
<div style="display: inline_block" align="center">
<img src="https://user-images.githubusercontent.com/112359793/210191540-93b03fc9-9569-4465-ae8f-cb1ea795003b.png">
</img>
</div>
<h2>Funcionamento do Circuito</h2>
O projeto é feito com Arduino em Linguagem C++, primeiramente com um Circuito de Controle composto por um Resistor e um Sensor de Luminosidade (ou uma Fotocélula), essa última realiza uma Leitura Analógica da Luminosidade do Local, que quando é baixa, a Leitura é convertida em um Sinal Digital que é enviado para um Circuito de Potência, com Resistores, Diodos, Transistor NPN, um Relé SPDT, e uma Bateria 9V usada como Fonte para Três Lâmpadas. Assim, quando a Luminosidade é baixa (anoiteceu ou já está escuro), o Arduino envia um Sinal para um Circuito de Potência para acender Lâmpadas em Paralelo, algo que pode ser aplicado na Automação Residencial, Predial ou Industrial.
