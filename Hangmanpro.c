#include <stdio.h>

int main (){
  while (1){
  int empezar_juego = 1;
  int ver_intrucciones = 2;
  int about = 3;
  int salir = 4 ;
  int choice;

printf("1. empezar juego\n");
printf("2. Instrucciones\n");
printf("3. About\n");
printf("4. Salir\n");
scanf ("%d", &choice);
  if (choice == empezar_juego){
    printf ("juego\n\n");
  }

  else if (choice == ver_intrucciones){
    printf ("Vamos a jugar HANGMAN, el juego en donde la computadora escogera una palabra random y usted como jugador debera adivinar la palabra. Tendra 10 intentos para poder adivinar la palabra, de lo contrario perdera el juego. Empieze adivinando letras para llenar las casillas de la palabra que tiene que adivinar\n\n");
  }
  else if (choice == about){
    printf ("....\n\n");
  }
  else if (choice == salir){
    printf ("Adios\n\n");
   break;
  }
  
  }
  return 0;
}
