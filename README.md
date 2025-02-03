# Projeto de semáforo utilizando temporização

## 1. Propósito
O objetivo desse projeto é simular um semáforo, tanto pelo Wokwi quanto pelo Raspberry Pi Pico W RP2040 que foi utilizado.


## 2. Vídeo de demonstração
https://www.dropbox.com/scl/fi/x7ulp6r6yrl1pv5y9brdq/WhatsApp-Video-2025-02-03-at-00.09.42.mp4?rlkey=isf5kmdalprl0bm2vmitapszl&st=mj87y2w8&dl=0


## 3. Funcionalidades
- A cada 3 segundos o LED muda de cor:
- 1. O LED vermelho será ligado com 3 segundos;
  2. O LED amarelo será ligado com 3 segundos;
  3. Por ultimo o LED verde será ligado com 3 segundos e depois volta para o vermelho.


## 4. Pré-requisitos
1. Ter o [Pico SDK](https://github.com/raspberrypi/pico-sdk) instalado na máquina;
2. Ter o [ARM GNU Toolchain](https://developer.arm.com/Tools%20and%20Software/GNU%20Toolchain) instalado;
3. Ter o [Visual Studio Code](https://code.visualstudio.com/download) instalado;
4. Ter este repositório clonado na sua máquina;
5. Ter as seguintes extensões instaladas no seu VS Code para o correto funcionamento:
- [C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools);
- [CMake](https://marketplace.visualstudio.com/items?itemName=twxs.cmake);
- [CMake Tools](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools);
- [Raspberry Pi Pico](https://marketplace.visualstudio.com/items?itemName=raspberry-pi.raspberry-pi-pico);

##  5. Como executar o projeto e simular:
1. Clonar o repositório: https://github.com/Astorolus-11/embarcatech-semaforo;
2. Abrir a pasta clonada através do import project:

   ![image](https://github.com/user-attachments/assets/9ea528e1-0253-4cf8-b6c6-8532be0fc1b4)

3. Abrir o arquivo diagram.json:

   ![image](https://github.com/user-attachments/assets/028cb510-04e5-4d61-9484-523f9c3b5579)

4. Para executar na placa clique em Run que está localizada no rodapé do vscode (A placa precisa já está conectada e com o bootsel ativado):

   ![image](https://github.com/user-attachments/assets/36b14dce-1309-4f0c-a7f3-3cd7edb2b336)

  # Pronto! já está tudo pronto para simular o semáforo!



