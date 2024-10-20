/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
 using namespace std;
 
int main()
{
    //      A
    cout<<"Sequência a)"<<endl;
    cout<<"1, 3, 5, 7, __"<<endl;
    int a=1;
    int s=4; 
    for(int i=0;i<s;i++){
         a += 2; //Inicia no 1, e acrecenta 2 a cada proximo numero
    }
    cout<<"O proximo número é:"<< a<<endl<<endl;
    
    
    //       B
    cout <<"Sequência b)"<<endl;
    cout << "b) 2, 4, 8, 16, 32, 64, ____" << endl;
    int b = 2;
    int p = 7;
    for (int i = 1; i < p; i++) {
        b *= 2; // Multiplica por 2 para encontrar o proximo número(potencia de 2)
    }
    cout << "Próximo elemento: " << b << endl << endl;
    
    //      C
    cout <<"Sequência c)"<<endl;
    cout <<"0, 1, 4, 9, 16, 25, 36, ____"<<endl;
    int c = 0;
    int q= 7;
    for (int i = 0; i < q; i++) {
        c = (i + 1) * (i + 1); // Calcula o quadrado do próximo número
    }
    cout << "Próximo elemento: " << c << endl << endl;
    
    
    //      D
    cout <<"Sequência d)"<<endl;
    cout << " 4, 16, 36, 64, ____" << endl;
    int d = 2;
    for (int i = 0; i < 4; i++) {
        d += 2; // Incrementa 2 para encontrar o próximo número par
        d = d * d; // Calcula o quadrado do número par
    }
    cout << "Próximo elemento: " << d << endl << endl;

    //      E
    cout <<"Sequência e)"<<endl;
    cout << " 1, 1, 2, 3, 5, 8, ____" << endl;
    int e1 = 1, e2 = 1, next;
    for (int i = 2; i < 7; i++) {
        next = e1 + e2; // Soma os dois últimos elementos
        e1 = e2; // Atualiza e1 para o próximo
        e2 = next; // Atualiza e2 para o próximo
    }
    cout << "Próximo elemento: " << next << endl << endl;

    //          F
    cout <<"Sequência f)"<<endl;
    cout << "f) 2, 10, 12, 16, 17, 18, 19, ____" << endl;
    int f = 19; // Começando pelo último número
    f += 1; // Incrementa 1 para encontrar o próximo
    cout << "Próximo elemento: " << f << endl;
    return 0;
}