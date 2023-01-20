//1) Apresente a mensagem “Testando um algoritmo”. 
#include <stdio.h>
#include<stdlib.h>
int main () {
printf( "Testando um Algoritmo\n ");
}

//2) Apresente as mensagens “Testando um algoritmo” e também “Linguagem C” (uma abaixo da outra) 
int main () {
printf( "Testando um Algoritmo\n ");
printf(“linguagem C\n”);}

//3) Ler uma variável e apresentar seu dobro. 

int main (){
int x,y;
    printf("Informe um Valor: ");
	scanf("%i",&x);
    y=x*2;
    printf("\n");
	printf("Results: %.0f = %.2f\n",r,q);
	system("Pause");
    }

//4) Ler uma variável e apresentar seu Triplo. 
int main (){
int x,y;
    printf("Informe um Valor: ");
	scanf("%f",&r);
    y=x*3;
    printf("\n");
	printf("Results: %.0f = %.2f\n",r,q);
	system("Pause");
    }

//5) Ler uma variável e apresentar sua metade. 
int main (){
int x,y;
    printf("Informe um Valor: ");
	scanf("%f",&r);
    y=x/2;
    printf("\n");
	printf("Results: %.0f = %.2f\n",r,q);
	system("Pause");
    }

//6) Ler uma variável e apresentar 25% da mesma. 
int main (){
int x,y;
    printf("Informe um Valor: ");
	scanf("%f",&r);
    y=x*0.25;
    printf("\n");
	printf("Results: %.0f = %.2f\n",r,q);
	system("Pause");
    }

//7) Ler uma variável e apresentar 60% da mesma. 
int main (){
float r,q;
    printf("Informe um Valor: ");
	scanf("%f",&r);
    y=x*0.60;
    printf("\n");
	printf("Results: %.0f = %.2f\n",r,q);
	system("Pause");
    }

//8) Ler duas variáveis a apresentar 45% da soma destas.
int main (){
float r,q;
    printf("Informe um Valor: ");
	scanf("%f",&r);
    y=x*0.45;
    printf("\n");
	printf("Results: %.0f = %.2f\n",r,q);
	system("Pause");
    }
 
//9) Ler duas variáveis e apresentar a subtração de uma pela outra. 
int main(){
int x,y,z;
    printf(“Informe Um Valor:\n”);
    scanf(“%i”,&x);
    printf(“Informe Um Valor:\n”);
    scanf(“%i,&y”)
    printf("\n");
   z=x-y;
   printf("Results: %.0z,x,y);
   system ("Pause");
}

//10) Ler três variáveis (A,B,C) e apresentar o resultado da seguinte fórmula: D=A+C-B. 

int main(){
int w,x,y,z;
    printf(“Informe Um Valor:\n”);
    scanf(“%i”,&x);
    printf(“Informe Um Valor:\n”);
    scanf(“%i,&y”)
    printf(“Informe Um Valor:\n”);
    scanf(“%i,&w”)
    printf("\n");
   z=x-y+w
   printf("Results: %.0z,x,y,w);
system (Pause)
}

//11) Encontrar e apresentar o valor para Z aplicando a seguinte fórmula: Z=(L+A * 2) / C. 

int main(){
int w,x,y,z;
    printf(“Informe Um Valor:\n”);
    scanf(“%i”,&x);
    printf(“Informe Um Valor:\n”);
    scanf(“%i,&y”);
    printf(“Informe Um Valor:\n”);
    scanf(“%i,&w”);
    printf("\n");
   z=(y+x*2)/w
   printf("Results: %.0z,x,y,w);
system (Pause);
}
//12) Ler uma variável e acumular em outra um aumento de 25%, apresentado-a no final. 

int main(){
float w,x,y,z;
    printf(“Informe Um Valor:\n”);
    scanf(“%f”,&x);
    y=x*0,25;
   z=x+y;
    printf("\n");

   printf("Results: %.0z,x,y,);
system (Pause)
}


//13) Ler duas variáveis numérica, e apresentar a soma das mesmas, acumulando ou não em outra variável

int main(){
int w,x,y,z;
    printf(“Informe Um Valor:\n”);
    scanf(“%f”,&x);
    printf(“Informe um valor:\n”);
    scanf(“%f”,&y);
    z=x+y;
    printf("\n");
   printf("Results: %.0z,x,y,);
system (Pause)
}


//14) AREA = (BASE x ALTURA) / 2. Área de um Triângulo 

int main(){
int w,x,y,z;
    printf(“Informe a base:\n”);
    scanf(“%f”,&x);
    printf(“Informe a altura:\n”);
    scanf(“%f”,&y);
    z=x*y/2;
    printf("\n");
   printf("Results: %.0z,x,y,);
system (Pause)
}
//15) CAC = 3.1416 * R². Lembre-se que R² é o mesmo que (R * R). Área de um Círculo 

 float x,y,z;
     printf("Informe o raio:\n");
   scanf("%f,&x");
    z=x*x;
    y=z*3.14;
    printf("\n");
   printf("valor: %.0f",z);
 system ("Pause");


//16) CPC = 3.1416 * D, sendo que D = R + R. Perímetro de Círculo
float x,y,z;
    printf("Informe o raio:\n");
    scanf("%f,&x");
    z=(2*3.14*x);
    
    printf("\n");
   printf("valor: %.0f",z);
system ("Pause");
}

 
//17) CVC = (3.1416 * R²) * H Volume de Círculo
float x,y,z,y,h;
     printf("Informe o raio:\n");
     scanf("%f,&x");
     printf("Informe o altura:\n");
     scanf("%f,&h");
     z=x*x;
     y=(3.14*z)*h;
     printf("\n");
    printf("valor: %.0f",y);
 system ("Pause");

 
//18) VCN = ((3.1416 * R²) / 3) * H Volume de um Cone 
 float x,y,z,y,h;
     printf("Informe o raio:\n");
     scanf("%f,&x");
     printf("Informe o altura:\n");
     scanf("%f,&h");
     z=x*x;
     y=((3.14*z)/3)*h;
     printf("\n");
    printf("valor: %.0f",y);
 system ("Pause");
}

//19) VPD = (L * L) * (H / 3) Volume de Pirâmide 
  float x,y,z,y,h;
     printf("Informe o lado:\n");
     scanf("%f,&x");
     printf("Informe o altura:\n");
     scanf("%f,&h");
     z=x*x;
    y= z* (h/3);
     printf("\n");
    printf("valor: %.0f",y);
system ("Pause")

//20) VPM = L1 * L2 * L3 Volume de Prisma 

float x,y,z,y,h;
     printf("Informe o lado1:\n");
     scanf("%f,&x");
     printf("Informe o lado2:\n");
     scanf("%f,&h");
 printf("Informe o lado3:\n");
     scanf("%f,&z");
  y=(x*h*z);
     printf("\n");
    printf("valor: %.0f",y);
 system ("Pause")


//21) VEF = (4/3) * 3.1416) * R³ Volume de Esfera.

  float x,y,z,y,h;
     printf("Informe o raio:\n");
     scanf("%f,&x");
h=x*x*x;
  z=(4/3)*3.14;
 y=z*h;
     printf("\n");
    printf("valor: %.0f",y);
 system ("Pause");

//23) Ler 3 notas e apresentar a média das mesmas.
int main(){
float r,q,e,d,y,u,t;
r,q,e,d,y,u,t =0;


 printf ("\t\t\tMedia de notas\n");
printf ("informe a primeira nota: ");
 scanf("%f",&q);
printf ("informe a segunda nota: ");
 scanf("%f",&e);
 printf ("informe a terceira nota: ");
 scanf("%f",&r);

d = (q + r +e) /3;

 printf ("A media das notas e de: %.2f",d);
 system("Pause");

//24) Ler 6 notas e apresentar a soma das mesmas.
int main(){ 
printf ("\t\t\tSoma de notas\n");
printf ("Informe a primeira nota: ");
 scanf("%f",&q);
 printf ("Informe a segunda nota: ");
 scanf("%f",&e)
 printf ("Informe a terceira nota: ");
 scanf("%f",&r);
 printf ("Informe a quarta nota: ");
 scanf("%f",&y);
 printf ("Informe a quinta nota: ");
 scanf("%f",&u);
 printf ("Informe a sexta nota: ");
 scanf("%f",&t);

 d = (q + r + e + y + u + t);

  printf ("A soma das notas e de: %.2f",d);
  system("Pause");
return 0;
}

//25) Conhecido 3 números inteiros, apresente o resultado da multiplicação dos mesmos 
int main(){
x,y,z,t,g = 0;
 printf ("Informe o primeiro valor: ");
 scanf("%i",&x);
 printf ("Informe o segundo valor: ");
 scanf("%i",&y);
 printf ("Informe o terceiro valor: ");
 scanf("%i",&z);

 t =(y*x*z)

printf(“O resultado é : %i,&t”);
system(pause)
}
//26) Informado 3 números, apresente a soma do primeiro com o terceiro, multiplicando pelo segundo. 
int main(){

 t = x + z;
 g = t * y;
 printf ("O resultado da e: %i ",t);
 printf ("O resultado da e: %i ",g);
 system("Pause");

   return 0; 

}

//27) Sendo dado dois números pelo usuário, apresente a décima parte da subtração de um pelo outro,  utilizando uma terceira variável. 

int main(){
 float r,q,e;
 r,q,e=0;
 printf ("Informe o primeiro valor: ");
 scanf("%f",&q);

 printf ("Informe o segundo valor: ");
 scanf("%f",&e);
 ex:27
  r=(q-e);
  printf ("a subitracao deu:%.10f ",r);
  system("Pause");
}


//28) Baseado no exercício anterior, faça o mesmo processo sem fazer uso de uma terceira variável.
q=(q-e);
 printf ("a subitracao deu:%.10f ",q);
   system("Pause");
 
   return 0; 
}

//29) Simulação de Chat
#include<stdio.h>

void oi()
{
    printf("Oi!\n");
}

void tudo_bem()
{
    printf("Tudo otimo, e com voce?\n");
}

void familia()
{
    printf("Meus bits...digo, minha familia vai bem!\n");
}

void sair()
{
    printf("Ja vai??? Nao! Nao! Espere! Naa...\n");
}


int main()
{
    int continuar=1;

    do
    {
        printf("\n\tChat Foreve Alone\n\n");
        printf("1. Oi\n");
        printf("2. Tudo bem\n");
        printf("3. Como vai a familia\n");
        printf("0. Sair\n");

        scanf("%d", &continuar);
        system("cls || clear");

        switch(continuar)
        {
            case 1:
                oi();
                break;

            case 2:
                tudo_bem();
                break;

            case 3:
                familia();
                break;

            case 0:
                sair();
                break;

            default:
                printf("Digite uma opcao valida\n");
        }
    } while(continuar);
}
//30)Conversor dolar
#include <stdio.h>
#include<stdlib.h>

int main(){
	float valorReal, valorDolar;

	printf("digite o valor em reais a ser convertido: ");
scanf("%f", &valorReal);

valorDolar = valorReal / 5.3;
printf ("valor em  dolar $%.2f\n", valorDolar);
return 0;
}
//31) Validador de CPF
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char cpf[15];
    int i;
    int dig;
    
    srand(time(NULL));
    
    for(i = 0; i < 11; i++){
        cpf[i] = (rand() % 10) + '0';
    }
    cpf[3] = '.';
    cpf[7] = '.';
    cpf[11] = '-';
    dig = ((((cpf[0] - '0') * 10) + ((cpf[1] - '0') * 9) + ((cpf[2] - '0') * 8) + ((cpf[4] - '0') * 7) + ((cpf[5] - '0') * 6) + ((cpf[6] - '0') * 5) + ((cpf[8] - '0') * 4) + ((cpf[9] - '0') * 3) + ((cpf[10] - '0') * 2)) % 11);
    if(dig == 0 || dig == 1){
        cpf[12] = '0';
    }
    else{
        cpf[12] = (11 - dig) + '0';
    }
    dig = ((((cpf[0] - '0') * 11) + ((cpf[1] - '0') * 10) + ((cpf[2] - '0') * 9) + ((cpf[4] - '0') * 8) + ((cpf[5] - '0') * 7) + ((cpf[6] - '0') * 6) + ((cpf[8] - '0') * 5) + ((cpf[9] - '0') * 4) + ((cpf[10] - '0') * 3) + ((cpf[12] - '0') * 2)) % 11);
    if(dig == 0 || dig == 1){
        cpf[13] = '0';
    }
    else{
        cpf[13] = (11 - dig) + '0';
    }
    cpf[15] = '\0';