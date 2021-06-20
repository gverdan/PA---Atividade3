#include <iostream>
#include "investimentos.h"

using namespace std;

int main() {
  tInvestimento i;
  double capital, taxaDejuros;
  int tempo;

  cout << "\nInforme o capital a ser investido = R$ ";
  cin >> i.montanteInvestido;
  cout << "Informe a taxa de juros % Ao ano = ";
  cin >> i.taxaDejuros;
  cout << "Informe o periodo do investimento (em meses) = ";
  cin >> i.periodo;

  cout << "\nMontante = R$ " << i.montanteInvestido;
  cout << "\nTaxa de juros = " << i.taxaDejuros;
  cout << "\nPeriodo = " << i.periodo;

  cout << "\n\nMontante (final de " << i.periodo << " meses)com juros simples = R$ " << montanteFinaljs (i.montanteInvestido,i.taxaDejuros,i.periodo);

  cout << "\nMontante (final de " << i.periodo << " meses) com juros compostos = R$ " << montanteFinaljc(i.montanteInvestido,i.taxaDejuros,i.periodo);

  cout << "\nConversao de taxa Juros Simples: (" << i.taxaDejuros << "% Ao ano) para (" << conversaoDeTaxajs(i.taxaDejuros) << "% Ao mes)";

    cout << "\nConversao de taxa Juros Composto: (" << i.taxaDejuros << "% Ao ano) para (" << conversaoDeTaxajc(i.taxaDejuros) << "% Ao mes.)\n";
    
    return 0;
}