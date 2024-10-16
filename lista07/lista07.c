//Desenvolver um programa em C que contenha uma função que recebe por parâmetro um valor inteiro correspondente a um tempo em
//segundos e devolve ao programa principal o tempo em horas, minutos e segundos. O programa principal exibirá uma mensagem
//informando o tempo calculado em horas, minutos e segundos.
#include <stdio.h>
#include <stdlib.h>
void f1(int seg, int *hr, int *min, int *s){
 *hr=seg/3600;
 *min=(seg%3600)/60;
 *s=(seg%3600)%60;
}
int main()
{
 int seg, hr, min,s;
 printf("Informe um valor em segundos: ");
 scanf("%d", &seg);
 f1(seg, &hr, &min, &s);
 printf("valor em minutos: %d\n", hr);
 printf("valor em horas: %d\n", min);
 printf("segundos: %d\n", s);
 return 0;
}

//Desenvolver um programa em C que contenha uma função que recebe por parâmetro dois valores inteiros, A e B, e realiza a troca entre
//eles, ou seja, A passará a possuir o valor que estava em B, e B passará a possuir o valor que estava em A. O programa principal exibirá
//os valores trocados.
#include <stdio.h>
#include <stdlib.h>
void f1(int aA, int aB, int *a, int *b){
 *a=bB;
 *b=aA;
}
int main()
{
 int aA;
 int aB;
 int a;
 int b;
 printf("Informe um valor A: ");
 scanf("%d", &aA);
 printf("Informe um valor B: ");
 scanf("%d", &bB);
 f1(aA, bB, &a, &b);
 printf("Valores A e B trocado: %d %d", a, b);
 return 0;
}

//Desenvolver um programa em C que contenha uma função que recebe por parâmetro a hora de inicio e a hora de término de um jogo,
//ambas subdivididas em 2 valores distintos: horas e minutos. A função deve retornar a duração do jogo em horas e minutos, considerando
//que o tempo máximo de duração de um jogo é de 24 horas e que o jogo pode começar em um dia e terminar no outro. O programa
//principal exibirá uma mensagem informando a duração calculada.
#include <stdio.h>
#include <stdlib.h>
void duracao(int hI, int hImin, int hT, int hTmin, int *hr, int *min){
 int inicio = hI*60 + hImin;
 int termino = hT*60 + hTmin;
 if(termino<inicio){
 termino+=24*60;
 }
 int duracao = termino - inicio;
 *hr=duracao/60;
 *min=duracao%60;
}
int main()
{
 int hI, hImin, hT, hTmin, hr, min;
 printf("Informe a hora e os minutos que começam o jogo: ");
 scanf("%d %d", &hI, &hImin);
 printf("Informe a hora e os minutos que terminam o jogo: ");
 scanf("%d %d", &hT, &hTmin);
 duracao(hI, hImin, hT, hTmin, &hr, &min);
 printf("Duração do jogo em horas e minutos: %d:%d\n", hr, min);
 return 0;
}
