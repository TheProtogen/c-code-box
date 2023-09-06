//Coisas básicas de input/output
#include <iostream>
//Coisas relacionadas á matemática
#include <cmath>

using namespace std;

int main() {
    double a, b;
    int escolha;
    
    //Pega as variáveis pelo input do usuário
    cout << "Coloque dois números para serem calculados" << endl;
    cout << "Primeiro número: " << endl;
    cin >> a;
    cout << "Segundo número: " << endl; 
    cin >> b;
    
    //Usuário escolhe uma opção por aqui, que será filtrado logo depois com o switch case
    cout << "Escolha a opção desejada: " << endl;
    cout << "(1) a + b" << endl;
    cout << "(2) a - b" << endl;
    cout << "(3) a / b" << endl;
    cout << "(4) a * b" << endl;
    cout << "(5) a ^ b" << endl << endl;

    cin >> escolha;
    
    //Switch case para atribuir "escolha" á uma ação
    switch (escolha) {
        
        case 1:
        cout << "Resultado : " << a+b;
        break;
        
        case 2:
        cout << "Resultado : " << a-b;
        break;
        
        case 3:
        cout << "Resultado : " << a/b;
        break;
        
        case 4:
        cout << "Resultado : " << a*b;
        break;

        case 5:
        cout << "Resultado : " << pow(a,b);
        break;
        
        default:
        cout << "Oopsie, algo deu errado :/" << endl;
    }
    
}