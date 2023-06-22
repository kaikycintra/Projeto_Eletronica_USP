# Fonte
Nesse projeto, montamos uma fonte de tensão ajustável de 3V a 12V com capacidade de 100mA, partindo de uma corrente alternada de 127V e 60Hz.

| Fonte construída | Functionamento do circuito |
| --- | --- |
| <video src="" style="max-width: 730px;"></video> | <video src="" style="max-width: 730px;"></video> |

| Componente | Preço |
| --- | --- |
| Capacitor 1mF x2 | R$0,50 * 2 = R$1,00 |
| LED x2 | R$0,50 * 2 = R$1,00 |
| Diodo Zener 13V x2 | R$0,62 * 2 = R$1,24 |
| Transistor NPN 60V | R$1,60 |
| Potenciômetro Linear 10kΩ | R$7,00 |
| Resistor 3k3Ω x10 | R$0,07 * 10 = R$0,70 |
| Resistor 4k7Ω x10 | R$0,07 * 10 = R$0,70 |
| Fusível 1,5A | R$1,10 |
| Protoboard BB-01 | R$20,40 |
| Jumper macho-macho 20cm x10 | R$0,70 * 10 = R$7,00 |
| Plug AC 10A | R$6,00 |
| ***TOTAL*** | ***R$47,74*** |

*Componentes comprados na Ca&Ma em São Carlos, 21/06/2023

## Componentes do Circuito
### Transformador: 
Dispositivo elétrico que consegue alterar a tensão elétrica de entrada para níveis mais apropriados para uma aplicação específica, fazendo uso de enrolamentos e princípios eletromagnéticos da Lei de Faraday-Lenz. Neste projeto, utilizamos um transformador do laboratório que pôde ajustar a tensão em uma razão de 7.3 entre saída e entrada.
### Diodos:
Componentes elétricos que permitem o fluxo de corrente elétrica em uma única direção. No projeto, são utilizados para montar uma ponte de diodos, que atua como um retificador de tensão, aproveitando ambos os ciclos da corrente alternada.
### Resistores:
Componentes com resistência fixa que garantem o ajuste da corrente elétrica no circuito, permitindo não queimar nada outras partes essenciais.
### Capacitor:
Dispositivo elétrico que consegue armazenar pequenas quantidades de carga elétrica, fornecendo corrente contínua se a tensão interna for maior que a externa. Para conseguir uma flutuação (ripple) menor que 10%, seria necessário um capacitor de no mínimo 790uF (conforme mostrado na seção de cálculos abaixo). No entanto, utilizamos um de 1mF por apresentar vantagens e estar mais barato.
### Potenciômetro:
Componente com resistência ajustável que permite regular o fluxo de corrente e, consequentemente, alterar os níveis de tensão do circuito. Neste projeto, foi empregado para possibilitar a escolha dos níveis de tensão entre 3V a 12V, conforme especificado.
### Diodo Zener:
Uma variação do diodo comum, que só permite o fluxo de corrente elétrica se a tensão aplicada for superior à tensão de trabalho especificada pelo fabricante. Isso limita a voltagem máxima permitida pelo circuito. No projeto, foi usado para garantir que a tensão ficasse abaixo de 13V no final do circuito.
### Transistor:
Componente elétrico que pode alterar ou amplificar sinais e potência elétrica. No projeto, foi empregado para ajustar a corrente elétrica no final do circuito.

## Funcionamento:
### Transformação:
Nesta fase, os sinais elétricos de entrada (corrente alternada com tensão de 127V e frequência de 60Hz) têm sua diferença de potencial diminuída pelo transformador para níveis próximos a 24,6V, mantendo o resto das características da onda.
### Retificação:
Nesta fase, os sinais elétricos em corrente alternada (vindos da fase de transformação) são retificados para um sinal continuamente positivo pela ação da ponte de diodos. A disposição dos diodos no circuito permite ou bloqueia a passagem de corrente elétrica, definindo um sentido único para o fluxo de elétrons durante ambos os ciclos da onda. O resultado é uma reflexão completa dos valores negativos de tensão em relação ao eixo do gráfico.
### Filtragem: 
Nesta fase, o capacitor libera corrente elétrica nos momentos de diminuição na voltagem de entrada, tornando a saída de tensão quase contínua. As imperfeições são caracterizadas pelo ripple.
### Regulação:
Nesta fase, o diodo Zener corrige o ripple ao limitar a voltagem da curva em 13V. Assim, a saída do sistema apresenta uma tensão fixa e constante com pequenas imperfeições. Finalmente, o potenciômetro é acionado para regular o valor de saída entre os especificados 3V e 12V.


[Circuito no Falstad](https://tinyurl.com/2mrqdjvw)
![Circuito](https://github.com/kaikycintra/Projeto_Eletronica_USP/blob/efbc84228148290c1601633abef27bb99c9a0139/Fonte/CircuitoFalstad.jpg)
Esquemático no EAGLE
![Esquemático no EAGLE](https://i.imgur.com/WNwCi8H.png)
Board no EAGLE

![Board no EAGLE](https://i.imgur.com/DSsR56V.png)
