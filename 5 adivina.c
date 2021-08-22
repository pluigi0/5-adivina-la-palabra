#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "food", str2[30];
  int resultado, i, c=3, a=6;
  

  for (i=0; i<a; i++){
  	
  	
	  printf("\n\n\tHAY UNA PALABRA SECRETA, INTENTA ADIVINARLA");
	  printf("\n\t Introduce la palabra\t");
	  gets(str2);
	  
	  resultado = strcmp(str1, str2);
	  
  	  if (resultado == 0) {
	  	 printf("Adivinaste la palabra secreta: %s ", str2);
	  	 i = i+4;
      }
		 else{
		 	 printf("\n\tEsa no es la palabra");
		 	 c--;
		 	 printf("\n\tTe quedan %d intentos", c);
	 		 a--;
  		 }
	}		 	   
    
  return 0;
}
