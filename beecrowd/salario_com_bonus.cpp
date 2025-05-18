#include <iostream>
#include <iomanip> 
#include <string>
using namespace std;

int main() {
 
    string nome_vendedor;
    cin >> nome_vendedor;
    
    double salario_fixo, total_vendas;
    cin >> salario_fixo;
    cin >> total_vendas;
    
    double total = salario_fixo + (total_vendas * 0.15);
    
    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << total << endl;
    
    return 0;
}
