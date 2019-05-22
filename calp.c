#include <stdio.h>

int main(void) {
  
  int peso;
  int idade;
  float altura;
  float z;
  int  ano;
  int resp;
  int a;
  int b;
  int resp1;
  int resp2;
  int resp3;
  int IMC;
  float AV1;
  float AV2;
  float AV3;
  float média;
  float média2;
  float média3;
  float média4;
  float fare;
  float kelvin;
  float celsius;
  int cep;
  
  printf("Qual seu CEP ? \n");
  scanf("%d",&cep);
  printf("Os dados armazenados foram : \n");
  printf(" Cep é %d \n",cep);

  //Entre 18,5 e 24,99	Peso normal
  //Entre 25 e 29,99	Acima do peso
  //Entre 30 e 34,99	Obesidade I
  //Entre 35 e 39,99	Obesidade II (severa)
  printf("Digite sua idade : \n");
  scanf("%d",&idade);
  printf("Digite seu peso : \n");
  scanf("%d",&peso);
  printf("Digite sua altura : \n ");
  scanf("%f",&altura);
  
  //Índice de massa corporal.
  IMC = peso /(altura * altura);
  printf("Seu IMC é %d \n ",IMC);
  if ((18.5<=IMC)&&(IMC<=24.99)) {
    printf("Seu peso está normal\n");
  }
  
  if ( (25<=IMC)&&(IMC<=29.99)) {
    printf("Você está acima do peso\n");
  }
  
  if ((30<=IMC)&&(IMC<=34.99)) {
    printf("Você possui Obesidade Tipo I \n");
  }
  if ((35<=IMC)&&(IMC<=39.99)) {
    printf("Você possui Obesidade Tipo II \n");
  }
  printf("Em que ano você nasceu ?  ");
  scanf("%d",&ano);
  resp = 2019 - ano;
  printf("Você tem %d anos\n",resp);
  printf("Escreva aqui dois numeros : ");
  scanf("%d e %d",&a,&b);
  resp1 = a + b;
  printf("A soma dos dois números é : %d \n",resp1);
  resp2 = a * (a*b);
  printf("O produto do primeiro número pelo quadrado do segundo é : %d \n",resp2);
  resp3 = a * a;
  printf("O quadrado do primeiro número é : %d \n\n",resp3);
+
//Calculo de média
  printf("Digite sua nota da AV1 : ");
  scanf("%f",&AV1);
  printf("Digite sua nota da AV2 : ");
  scanf("%f",&AV2);
  
  média = (AV1 + AV2) / 2 ; 

  if (média<6) {
    printf("Digite sua nota da AV3 : ");
    scanf("%f",&AV3);
    if((AV3>AV2)&&(AV2<AV1)){
      média2 = (AV1 + AV3)/2;
      printf("Sua média final é %.1f\n",média2);
    }
    if ((AV3>AV1)&&(AV2>AV1)){
      média3 = (AV2 + AV3)/2;
      printf("Sua média final é %.1f\n",média3);
    }
    if (AV2==AV1){
      média4 = (AV1+AV3)/2;
      printf("Sua média final é %.1f\n",média4);
    }

  }
  else {
    if (média >= 6 || média2 >= 6 || média3 >=6 || média4 >=6 ){
    printf("Parabéns você passou com %.1f\n",média);
    }
    else {
      printf("Infelizmente você foi reprovado \n");
    }
  }
 printf("Digite a temperatura em graus Farenheit :\n ");
 scanf("%f",&fare);
 celsius = ( fare - 32) * (5/9);
 kelvin = celsius - 373.15 ;
 printf("A temperatura em Farenheit é %.2f , em Celsius é %.2f e em Kelvin é %.2f\n",fare,celsius,kelvin);
  return 0;
}
