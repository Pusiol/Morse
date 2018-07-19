#include <windows.h>

#define TICK 200


#define DELAY    Sleep
#define LIGAR    system("color f0")
#define DESLIGAR system("color 0f")



void cod(char); //Escreve um caracter

void print(char*); //Escreve uma string




/*
//No arduino seria:

#define DELAY    delay
#define LIGAR    digitalWrite(13, HIGH)
#define DESLIGAR digitalWrite(13, LOW)



//E no raspbery:

#define DELAY    usleep
#define LIGAR    system("echo 1 > /sys/class/gpio/gpio462/value")
#define DESLIGAR system("echo 0 > /sys/class/gpio/gpio462/value")
*/