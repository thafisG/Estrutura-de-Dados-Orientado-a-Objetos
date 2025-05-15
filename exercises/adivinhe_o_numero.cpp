#include <iostream>
using namespace std;

int main() {
    const int numeroSecreto = 7;
    int tentativa;

    cout << "***************************************" << endl;
    cout << "* Boas vindas ao Jogo da Adivinhação! *" << endl;
    cout << "***************************************" << endl;
    cout << "Tente adivinhar o número entre 1 e 15." << endl;

    for (int i = 1; i <= 3; i++) {
        cout << "Tentativa " << i << ": ";
        cin >> tentativa;

        if (tentativa == numeroSecreto) {
            cout << "Parabéns! Você acertou na tentativa " << i << "!" << endl;
            return 0;
        } else if (tentativa < numeroSecreto) {
            cout << "Você escolheu o número: " << tentativa << endl;
            cout << "O número é maior!" << endl;
        } else {
            cout << "Você escolheu o número " << tentativa << endl;
            cout << "O número é menor!" << endl;
        }
    }

    cout << "Que pena! Você errou. O número era " << numeroSecreto << "." << endl;

    return 0;
}
