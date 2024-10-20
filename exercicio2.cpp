/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

// Função que verifica a existência da letra 'a' e conta suas ocorrências
void checkLetterA(const string& input) {
    int count = 0; // Contador para as ocorrências da letra 'a'

    // Itera sobre cada caractere na string
    for (char ch : input) {
        if (ch == 'a' || ch == 'A') { // Verifica se o caractere é 'a' ou 'A'
            count++; // Incrementa o contador
        }
    }

    // Exibe o resultado
    if (count > 0) {
        cout << "A letra 'a' (maiúscula ou minúscula) aparece " << count << " vez(es) na string." << endl;
    } else {
        cout << "A letra 'a' não está presente na string." << endl;
    }
}

int main() {
    string input;

    // Solicita ao usuário que insira uma string
    cout << "Informe uma string: ";
    getline(cin, input); // Lê a linha inteira para capturar espaços

    // Chama a função para verificar a letra 'a'
    checkLetterA(input);

    return 0;
}