#include <iostream>
#include <string>
#include "complexo.h"

using namespace std;

int main()
{
	// Exemplos Aleatórios de Testes para correção
	float sucesso = 0;		 // Contador de testes bem sucedidos
	float total_testes = 10; // Total de testes aplicado. Número fictício
	Complexo i1(1., 2.);
	Complexo i2;
	Complexo resposta = i2;

	if ((i1 + i2) == i2)
	{
		cout << "Soma bem sucedida" << endl;
		sucesso++;
	}
	if ((i1 - i2) != i2)
	{
		cout << "Subtração bem sucedida" << endl;
		sucesso++;
	}
	if ((i1 * i2) == i2)
	{
		cout << "Multiplicação bem sucedida" << endl;
		sucesso++;
	}
	if ((i1 / i2) != i2)
	{
		cout << "Divisão bem sucedida" << endl;
		sucesso++;
	}

	cout << "Nota final = " << 10 * sucesso / total_testes << endl;
	/*
	 * Daqui em diante, irei fazer diversos outros testes. Cada teste bem sucedido incrementará "contador" em "1" unidade. No final, a nota será data como a divisão de "testes bem sucedidos" por "quantidade de testes" * 10,
	 */

	// Testando métodos
	cout << "novo complexo sem parametro:" << endl;
	Complexo a;
	cout << "a = ";
	a.imprimir();

	cout << "novo complexo com parametro:" << endl;
	Complexo b(1, 2);
	cout << "b = ";
	b.imprimir();

	cout << "novo complexo com outro complexo como parametro:" << endl;
	Complexo c(b);
	cout << "c = ";
	c.imprimir();

	cout << "soma:" << endl;
	Complexo d = b + c;
	cout << "d = ";
	d.imprimir();

	cout << "subtração:" << endl;
	Complexo e = c - d;
	cout << "e = ";
	e.imprimir();

	cout << "multiplicação:" << endl;
	Complexo f = e * d;
	cout << "f = ";
	f.imprimir();

	cout << "divisão:" << endl;
	Complexo g = f / d;
	cout << "g = ";
	g.imprimir();

	cout << "potencia:" << endl;
	Complexo h = b.pow(2);
	cout << "h = ";
	h.imprimir();

	cout << "igualdade:" << endl;
	cout << (b == c) << endl;

	cout << "diferença:" << endl;
	cout << (b != c) << endl;

	cout << "diferença" << endl;
	cout << (b != d) << endl;

	// Testes complexos

	Complexo l(1., 2.);
	Complexo m(3., 4.);
	Complexo n(5., 6.);
	Complexo j(7., 8.);
	Complexo k(9., 10.);

	if ((Complexo(2., 0.) * l - m * n) / (j * j * k * k) == (Complexo(2., 0.) * l - m * n) / (j.pow(2) * k.pow(2)))
	{
		cout << "Teste bem sucedido" << endl;
	}

	Complexo o = m.pow(-2);
	o.imprimir();

	return 0;
}
