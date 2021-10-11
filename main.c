#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  FILE *arq, *der;
  char c[80];
  int consoantes = 0, vogais = 0, i, k;
  arq = fopen("arquivoapenas.txt", "a");

  if(arq){
    printf("informe qualquer palavra:\n");
    fgets(c, 80, stdin);
    fputs(c, arq);

  }
  else{
    printf("não foi possivel criar o arquivo\n");
  }
fclose(arq);
system("pause");
printf("_______________________________________________________\n");
printf("\nO que voce escreveu foi:\n");


  der = fopen("arquivoapenas.txt", "r");

  while(fgets(c, 20, arq) != NULL);{
    printf("\n%s\n", c);

  }

  printf("-----------------------------------------------------------------\n");


 k = strlen(c);

  for( i = 0; i < k; i++){

    switch(c[i]){
case 'A':
case 'a':
case 'E':
case 'e':
case 'I':
case 'i':
case 'O':
case 'o':
case 'U':
case 'u':
    vogais++;
    break;
default:
    consoantes++;

    }

  }

  printf("Esses sao os numeros de vogais e consoantes na sua palavra:\n");
   printf("Vogais: %d\n", vogais);
   printf("Consoantes: %d\n", consoantes - 1);

   printf("-----------------------------------------------------------------\n");

   fclose(der);

    return 0;
}
