/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;
//  Ligação do Primeiro Interruptor:
// Ligue o primeiro interruptor e deixe-o ligado por cerca de 5 a 10 minutos. Isso permitirá que a lâmpada aqueça.
// Após o tempo passar, desligue o primeiro interruptor.
// Em seguida, ligue o segundo interruptor.
//Agora, você pode ir até as lâmpadas.
// desse modo: quente e desligada=interruptor1 \ acesa=interruptor2 \ desligada e fria=interroptor3
int main() {
    string lampadaQuente, lampadaAcesa, lampadaDesligada;

    cout << "Digite qual lâmpada está quente e desligada (A, B ou C): ";
    cin >> lampadaQuente;

    cout << "Digite qual lâmpada está acesa (A, B ou C): ";
    cin >> lampadaAcesa;

    cout << "Digite qual lâmpada está desligada (A, B ou C): ";
    cin >> lampadaDesligada;

    // Identificando qual interruptor controla cada lâmpada
    if (lampadaQuente == "A") {
        cout << "Interruptor 1 controla a Lâmpada A (quente e desligada).\n";
    } else if (lampadaQuente == "B") {
        cout << "Interruptor 1 controla a Lâmpada B (quente e desligada).\n";
    } else if (lampadaQuente == "C") {
        cout << "Interruptor 1 controla a Lâmpada C (quente e desligada).\n";
    }

    if (lampadaAcesa == "A") {
        cout << "Interruptor 2 controla a Lâmpada A (acesa).\n";
    } else if (lampadaAcesa == "B") {
        cout << "Interruptor 2 controla a Lâmpada B (acesa).\n";
    } else if (lampadaAcesa == "C") {
        cout << "Interruptor 2 controla a Lâmpada C (acesa).\n";
    }

    if (lampadaDesligada == "A") {
        cout << "Interruptor 3 controla a Lâmpada A (desligada).\n";
    } else if (lampadaDesligada == "B") {
        cout << "Interruptor 3 controla a Lâmpada B (desligada).\n";
    } else if (lampadaDesligada == "C") {
        cout << "Interruptor 3 controla a Lâmpada C (desligada).\n";
    }

    return 0;
}