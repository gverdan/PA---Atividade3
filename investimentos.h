#include <iostream>
#include <cmath>
using namespace std;

struct tInvestimento {
  double montanteInvestido; // Montante Investido.
  double taxaDejuros; // Taxa de Juros ao Ano.
  int periodo; // Periodo do Investimento em anos.

};

// Conversão da taxa de juros de ao ano para ao mês.
double conversaoDeTaxajs(double taxa){
    return  ((taxa/100) / 12) * 100;
}

// Conversão da taxa de juros de ao ano para ao mês.
double conversaoDeTaxajc(double taxa){
    double conversao;
    conversao = ((pow((1+(taxa/100)),(1.0/12)))-1) * 100;
    return conversao;
}

// Montante ao final do período aplicado considerando juros simples.
double montanteFinaljs(double capital, double taxa, int tempo){
    double montante, juros;
    juros = 1 + ((taxa/100) * tempo);
    montante = capital * juros;
    return montante;
}

// Montante ao final do período considerando juros compostos.
double montanteFinaljc(double capital, double taxa, int tempo){
    double montante, juros;
    juros = pow((1 + (taxa/100)),tempo);
    montante = capital * juros;
    return montante;
}

