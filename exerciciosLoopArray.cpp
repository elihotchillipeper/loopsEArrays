#include <iostream>
using namespace std;

int exe01(){

    //Declare um array de inteiros com 5 elementos e preencha-o com valores de sua escolha. Em seguida, utilize um loop for para imprimir cada elemento do array no terminal.

    int array[5] = {1, 2, 3, 4, 5};

    for(int i = 0; i < 5; i++){
        cout << array[i] <<std::endl;
    }

    return 0;
}


int exe02(){

    //Declare um array de caracteres com 6 elementos e preencha-o com letras do alfabeto. Utilize um loop while para imprimir cada elemento do array no terminal.

    char array[6] = {'e', 'l', 'i', 's', 'a', '!'};

    for(int i = 0; i < 6; i++){
        cout << array[i] <<std::endl;
    }

    return 0;
}


int exe03(){

    //Declare um array de inteiros com 7 elementos e preencha-o com números de sua escolha. Em seguida, utilize um loop for para imprimir apenas os números pares do array.

    int array[7] = {1, 2, 3, 4, 5, 6, 7};

    for(int i = 1; i < 7; i++){
        cout << array[i] <<std::endl;
        i++;
    }

    return 0;
}


int exe04(){

    //Declare um array de floats com 8 elementos e preencha-o com valores decimais. Utilize um loop while para imprimir apenas os valores maiores que 5 do array.

    float array[8] = {1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5};
    int i = 0;

    while (array[i] < 5)
    {
        cout << array[i] <<endl;
        i++;
    }

    return 0;
}


int exe05(){

    //Declare um array de inteiros vazio com espaço para 10 elementos. Peça ao usuário para inserir valores para cada elemento do array.
    //Em seguida, utilize um loop for para imprimir os valores do array no terminal.

    int array[10];

    cout << "Digite 10 números inteiros para o array: ";
    cin >> array[0] >> array[1] >> array[2] >> array[3] >> array[4] >> array[5] >> array[6] >> array[7] >> array[8] >> array[9];

    for(int i = 0; i < 10; i++){
        cout << array[i] <<endl;
    }

    return 0;
}


int exe06(){

    //Declare um array de caracteres com 5 elementos e preencha-o com caracteres de sua escolha. Utilize uma função para imprimir o tamanho total do array no terminal.

    char array[] = {'a', 'b', 'c', 'd', 'e'};
    int tamanho = sizeof(array) / sizeof(array[0]);
    cout << tamanho << endl;

    return 0;
}



int exe07(){

    /*Dado o array de inteiros: {3, 7, 9, 12, 4, 6, 8, 10}, imprima no terminal:
        -O terceiro elemento do array.
        -A soma do sexto elemento com o oitavo elemento.
        -A diferença entre o segundo elemento e o primeiro.
        -O quarto elemento se for maior que 6.
        -O último elemento se o primeiro for par.
        -O primeiro elemento se a soma do quarto com o oitavo for maior que 22.*/








    return 0;
}


int exe08(){

    //Crie um programa que declare um array de floats com 10 elementos. Solicite ao usuário que insira um valor para cada elemento do array.
    //Em seguida, calcule e imprima a média dos valores fornecidos pelo usuário.

    float array[10];

    cout << "Digite 10 número (inteiros ou não): ";
    cin >> array[0] >> array[1] >> array[2] >> array[3] >> array[4] >> array[5] >> array[6] >> array[7] >> array[8] >> array[9];

    float soma = 0.0;
    for (int i = 0; i < 10; i++) {
        soma += array[i];
    }

    float media = soma / 10;
    cout << "A média é: " << media <<endl;


    return 0;
}


int exe09(){

    //Declare um array de inteiros com 10 elementos e preencha-o com números de sua escolha. Utilize um loop for para calcular e imprimir a soma de todos os elementos do array.

    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};

    float soma = 0.0;
    for(int i = 0; i < 10; i++){
        soma += array[i];
    }

    cout << "A soma é: " << soma <<endl;

    return 0;
}


int exe10(){

    //Declare um array de inteiros com 8 elementos e preencha-o com valores de sua escolha. Utilize um loop for para imprimir apenas os números que são múltiplos de 3 e maiores que 10 do array.

    int array[8] = {10, 20, 30, 40, 50, 60, 70 ,80};
    int divisao =  15 %3 == 0 ;

    for(int i = 0; i < 8; i++){
         divisao 
        cout << array[i] <<endl;
    }

    return 0;
}











int main(){
    //exe01();
    //exe02();
    //exe03();
    //exe04();
    //exe05();
    //exe06();
    //exe07();
    //exe08();
    //exe09();
    exe10();


}