#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#define WIDTH 20
#define HEIGHT 20
#define NUM_MESSAGES 12

int snakeX[400], snakeY[400], snakeSize;
int foodX, foodY;
int score;
int direction;
int gameOver;
int prevMessageIndex = -1;
int prevScoreDiv5 = 0;
char simoesPattern[] = "sssimoes";
char* messages[NUM_MESSAGES] = {
    "Voce consegue passar em calculo",
    "Nao desista, ok?",
    "Basta nao pensar no Quartus",
    "Pensa na lasanha do bandeco",
    "Mais um dia sendo melhor que a federal",
    "CAASO! CAASO!",
    "Tomar caju pode melhorar sua performance em até 37%",
    "Ja venceu o vestibular, isso eh mole",
    "01000101",
    "No esporte nos somos bosta, aqui nao",
    "Xupa poli",
    "Engcomp nao aguenta",
};

void setup() {
    srand(time(0));
    gameOver = 0;
    
    snakeX[0] = WIDTH / 2;
    snakeY[0] = HEIGHT / 2;
    snakeSize = 1;
    
    foodX = rand() % WIDTH;
    foodY = rand() % HEIGHT;
    
    score = 0;
    
    direction = -1;
}

void draw() {
    system("cls");
    int i, j;
    for (i = 0; i < WIDTH+2; i++)
        printf("#");
    printf("\n");
    
    for (i = 0; i < HEIGHT; i++) {
        for (j = 0; j < WIDTH; j++) {
            if (j == 0)
                printf("#");
                
            if (i == snakeY[0] && j == snakeX[0])
                printf("S");
            else if (i == foodY && j == foodX)
                printf("C");
            else {
                int isBodyPart = 0;
                for (int k = 1; k < snakeSize; k++) {
                    if (i == snakeY[k] && j == snakeX[k]) {
                        printf("%c", simoesPattern[k % 8]);
                        isBodyPart = 1;
                        break;
                    }
                }
                if (!isBodyPart)
                    printf(" ");
            }
            
            if (j == WIDTH - 1)
                printf("#");
        }
        printf("\n");
    }
    
    for (i = 0; i < WIDTH+2; i++)
        printf("#");
    printf("\n");
    
    printf("Score: %d\n", score);

    if (score / 5 > prevScoreDiv5) {
        prevScoreDiv5 = score / 5;
        int messageIndex;
        do {
            messageIndex = rand() % NUM_MESSAGES;
        } while (messageIndex == prevMessageIndex);
        prevMessageIndex = messageIndex;
        printf("%s\n", messages[messageIndex]);
    } else if (score >= 5) {
        printf("%s\n", messages[prevMessageIndex]);
    }
}

void input() {
    if (_kbhit()) {
        switch (_getch()) {
        case 'a':
            direction = 0;
            break;
        case 'w':
            direction = 1;
            break;
        case 'd':
            direction = 2;
            break;
        case 's':
            direction = 3;
            break;
        case 'x':
            gameOver = 1;
            break;
        }
    }
}

void logic() {
    for (int i = snakeSize - 1; i > 0; i--) {
        snakeX[i] = snakeX[i - 1];
        snakeY[i] = snakeY[i - 1];
    }
    
    switch (direction) {
    case 0: // Left
        snakeX[0]--;
        break;
    case 1: // Up
        snakeY[0]--;
        break;
    case 2: // Right
        snakeX[0]++;
        break;
    case 3: // Down
        snakeY[0]++;
        break;
    default:
        break;
    }
    
    // Check for collision with border
    if (snakeX[0] < 0 || snakeX[0] >= WIDTH || snakeY[0] < 0 || snakeY[0] >= HEIGHT)
        gameOver = 1;
    
    // Check for collision with self
    for (int i = 1; i < snakeSize; i++)
        if (snakeX[i] == snakeX[0] && snakeY[i] == snakeY[0])
            gameOver = 1;
    
    // Check for collision with food
    if (snakeX[0] == foodX && snakeY[0] == foodY) {
        score++;
        snakeSize++;

        while (1) {
            int foodInSnake = 0;
            foodX = rand() % WIDTH;
            foodY = rand() % HEIGHT;

            for (int i = 0; i < snakeSize; i++)
                if (snakeX[i] == foodX && snakeY[i] == foodY)
                    foodInSnake = 1; // Food spawned in snake, try again

            if (!foodInSnake) // Food is not in snake, valid spawn
                break;
        }
    }
}


int main() {
    setup();
    
    while (!gameOver) {
        draw();
        input();
        logic();
        Sleep(100); // Making the game run at a reasonable speed
    }
    
    return 0;
}
