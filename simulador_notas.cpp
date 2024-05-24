// Simulador de saída de notas de Caixa Eletronico
#include <iostream>
#include <array>
using namespace std;

//Função de separação das notas por valor
array<int,5> contaNotas(int saque) {
    array<int,5> notasSeparadas;
    notasSeparadas[0] = (saque/50);
    notasSeparadas[1] = ((saque%50)/20);
    notasSeparadas[2] = (((saque%50)%20)/10);
    notasSeparadas[3] = ((((saque%50)%20)%10)/5);
    notasSeparadas[4] = (((((saque%50)%20)%10)%5)/2);
    return notasSeparadas;
}
//Função para realizar o saque
void sacar(){
    int saque;
    array<int,5> qtdNotas;
    //Le valor a ser sacado do Caixa Eletronico
    cout << "Digite o valor a ser sacado: ";
    cin >> saque;
    cout << "quantidade de notas:" << endl;
    //Executa função para separar quantidade de notas por seu valor
    qtdNotas = contaNotas(saque);
    //Simula saída de notas do Caixa Eletrônico
    cout << "50: ";
    cout << qtdNotas[0];
    cout << "\n";
    cout << "20: ";
    cout << qtdNotas[1];
    cout << "\n";
    cout << "10: ";
    cout << qtdNotas[2];
    cout << "\n";
    cout << "5: ";
    cout << qtdNotas[3];
    cout << "\n";
    cout << "2: ";
    cout << qtdNotas[4];
    cout << "\n";
}


//Fluxo principal do codigo
int main() {
    //Declara variaveis
    int menu;

    cout << "----------------------------" << endl;
    cout << "1. sacar. " << endl;
    cout << "2 para sair." << endl;
    cout << "----------------------------" << endl;
    cout << "escolha uma opção:"; cin >> menu;
    cout << "----------------------------" << endl;
    
    //executa a opção de escolha ente sacar ou encerrar o programa
    if (menu == 1){
        sacar();
    } else if (menu == 2){
        cout << "encerrando o programa." << endl;
        return 0;
    } else {
        cout << "opção invalida." << endl;
    }
    //Final do main
    return 0;
}
