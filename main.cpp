#include <iostream>
#include "investimentos.h"

using namespace std;

int main() 
{
  tInvestimento i;
  double capital, taxaDejuros;
  int tempo;

  cout << "\nInforme o capital a ser investido = R$ ";
  cin >> i.montanteInvestido;
  cout << "Informe a taxa de juros % Ao ano = ";
  cin >> i.taxaDejuros;
  cout << "Informe o periodo do investimento (em anos) = ";
  cin >> i.periodo;

  cout << "\nMontante = R$ " << i.montanteInvestido;
  cout << "\nTaxa de juros = " << i.taxaDejuros;
  cout << "\nPeriodo = " << i.periodo;

 cout << "\n\nMontante (final de " << i.periodo << " anos) com juros simples = R$ " << montanteFinaljs(i.montanteInvestido,i.taxaDejuros,i.periodo);

 cout << "\nMontante (final de " << i.periodo << " anos) com juros compostos = R$ " << montanteFinaljc(i.montanteInvestido,i.taxaDejuros,i.periodo);

 cout << "\nConversao de taxa js: (" << i.taxaDejuros << "%a.a.) para (" << conversaoDeTaxajs(i.taxaDejuros) << "%a.m.)";

 cout << "\nConversao de taxa jc: (" << i.taxaDejuros << "%a.a.) para (" << conversaoDeTaxajc(i.taxaDejuros) << "%a.m.)\n";
    
 return 0;
}