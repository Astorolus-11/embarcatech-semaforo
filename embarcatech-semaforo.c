#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/timer.h"

//Pinos:
const uint led_verde=11;
const uint led_azul=12;
const uint led_vermelho=13;

//Protótipos das funções:
void setup();//inicia e configura os pinos
bool repeating_timer_callback(struct repeating_timer *timer);//Função de callback 


int main()
{   
    //Variáveis
    int segundos=0;
    struct repeating_timer timer;

    setup();
    stdio_init_all();
    add_repeating_timer_ms(3000,repeating_timer_callback,NULL,&timer); // A cada 3 segundos muda de estado e liga cada led do semáforo

    while (true) {

        printf("Passou %d segundos desde o inicio\n",segundos);
        sleep_ms(1000);
        segundos++;
    }
}
void setup(){
    //Inicia os pinos dos LEDs:
    gpio_init(led_verde);
    gpio_init(led_azul);
    gpio_init(led_vermelho);
    //Define como saida:
    gpio_set_dir(led_verde,GPIO_OUT);
    gpio_set_dir(led_azul,GPIO_OUT);
    gpio_set_dir(led_vermelho,GPIO_OUT);
    //Inicialmente estão desligados:
    gpio_put(led_verde,false);
    gpio_put(led_azul,false);
    gpio_put(led_vermelho,false);

}
bool repeating_timer_callback(struct repeating_timer *t){
    static uint estado_atual=0; //Estado 0 = vermelho, Estado 1 = amarelo (azul na BitDogLab) e Estado 2 = verde
    // Utilizo o static para manter o valor da variável na próxima vez que rodar a função

    if(estado_atual==0){ // Sinal vermelho
        gpio_put(led_vermelho,true);
        gpio_put(led_azul,false);
        gpio_put(led_verde,false);
        printf("\nSinal vermelho! PARE!\n\n");
        estado_atual++;//atualiza o estado para 1
    }
    else if(estado_atual==1){ //Sinal amarelo 
        gpio_put(led_vermelho,true);
        gpio_put(led_azul,false);
        gpio_put(led_verde,true);
        printf("\nSinal amarelo! ESPERE!\n\n");
        estado_atual++;//atualiza o estado para 2

    }
    else if(estado_atual==2){ // Sinal verde
        gpio_put(led_vermelho,false);
        gpio_put(led_azul,false);
        gpio_put(led_verde,true);
        printf("\nSinal verde! AVANCE!\n\n");
        estado_atual=0;//atualiza o estado para 0

    }

    return true;
}