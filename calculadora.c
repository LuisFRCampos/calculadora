#INCLUDE <STDIO.H>
INT MAIN (VOID){
  FLOAT X=0, Y=0, resultado=0;
  INT OP=0;
  DO{
  printf("Autor:Luís Fernando Ribeiro de Campos, Curso de Análise e desenvolvimento de sistemas, Universidade La Salle, Matricula 202222243");
  PRINTF("\n\t1 - SOMA\n\t2 - SUBTRAÇÂO\n\t3 - MULTIPLICAÇÃO\n\t4 - DIVISÃO")
  SCANF("%I", &OP);
  PRINTF("\nDigite o primeiro numero: ");
  scanf("%f", &x);
  printf("\nDigite o segundo numero: ");
  scanf("%f", &y);
  switch(op){
    case 1:
      resultado = x+y;
      break;
    case 2:
      resultado = x-y;
      break;
    case 3:
      resultado = x*y
      break
    case 4:
      resultado = x/y
      break;
    default
      printf("\n Digite uma opção validade\n");
      break;
  }
  printf("\n\t o resultado e: %0.2f", resultado);
  printf("\n Digite 1 para continuar: ");
  scanf("%i", &op);
  WHILE(op==1);
  }
