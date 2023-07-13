
# Snake com Arduino
Nesse projeto, montamos um jogo de Snake em uma placa Arduino. 

Uma matriz de LEDs é usada como tela, leds acesos representam o corpo da cobra enquanto os piscantes representam a comida. 

O movimento da cobra é controlado por um analógico e a velocidade pode ser ajustada por um potênciometro para tornar o jogo mais fácil ou difícil.

Ao ligar o jogo, o texto "SNAKE" é mostrado no display da direita pra esquerda, o mesmo acontece com "SCORE: [número] GAME OVER" quando o jogador perde.

## Vídeos
Jogando o Snake: https://youtu.be/IIoW_xa22tk

Desenvolvimento:

## Componentes

| Componente | Preço |
| --- | --- |
| Placa Arduino | emprestada sem custo |
| Protoboard do Lab | emprestada sem custo |
| Matriz LED 8x8 do Lab | emprestada sem custo |
| Joystick Shield Arduino | R$12,85 |
| Jumper macho-femea | R$0,69 * 10 = R$6,90 |
| Potenciômetro Linear 10kΩ | R$7,00 |
| Protoboard BB-01 | R$20,40 |
| Jumper macho-macho 20cm x10 | R$0,70 * 10 = R$7,00 |
| Jumper macho-macho 20cm x10 | R$0,70 * 10 = R$7,00 |
| ***TOTAL*** | ***R$54,15*** |

OBS: Alguns componentes também foram usados na fonte
*Componentes comprados na Ca&Ma em São Carlos, 21/06/2023

### Protoboards: 
Usadas para permitir conexões entre os componentes
### Matriz LED:
Usada como tela para o jogo
### Joystick Shield Arduino:
Usado como controle de 4 direções, a função de sensitivade não foi considerada
### Jumpers:
Usados para fazer conexões entre componentes e protoboards
### Potênciometro:
No nosso projeto ele foi usado para regular a velocidade do jogo


## O Processo:
- Compramos as peças
- Codamos o jogo em C para Windows
- Achamos uma versão do código adaptada para a versão de C++ que roda no Arduino
- Instalamos a IDE do Arduino e rodamos o código
- Montamos o circuito com duas protoboards, deixando o potenciômetro e analógico soltos como controles
- Conectamos o PC com o software compilado na IDE à placa e voilà!
