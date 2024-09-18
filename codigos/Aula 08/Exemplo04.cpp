//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Exemplo 04: Exemplo de passagem por refer�ncia com argumento ponteiro
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Prot�tipos das fun��es
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void elevaCubo(int *nPtr);

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Fun��o Principal
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main() {

    cout << "\n";
    cout << "Exemplo de Passagem por Refer�ncia com ponteiro\n\n";

    //declara e inicializa a vari�vel
    int numero = 5;

    //Exibe seu valor original
    cout << "* Valor original: " << numero << "\n";

    //chama a fun��o que eleva ao cubo, passando o argumento por refer�ncia
    elevaCubo(&numero);

    //Exibe seu valor modificado
    cout << "* Valor modificado: " << numero << "\n\n";

    //Fim do programa
    return 0;

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Defini��o das fun��es
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Calcula o cubo de um argumento inteiro, modificando o valor original
void elevaCubo(int *nPtr) {

    *nPtr = *nPrt * *nPtr * *nPtr;

}

