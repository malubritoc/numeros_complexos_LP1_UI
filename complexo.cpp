#include "complexo.h"

Complexo::~Complexo()
{
	// Se usou alocação dinâmica, desalocar aqui.
}

// Não mudar
Complexo::Complexo()
{
	a = 0.;
	b = 0.;
}

// Não mudar
void Complexo::imprimir()
{
	// Imprime na tela "a+bi" (sem aspas) e sem espaços.
	cout << a << "+" << b << "i" << endl;
}

// Para Fazer
Complexo::Complexo(Complexo const &i_)
{
	a = i_.a;
	b = i_.b;
}

// Para Fazer
Complexo::Complexo(float a_, float b_)
{
	a = a_;
	b = b_;
}

// Para Fazer
// Método de Potência de um número imaginário elevado a um número inteiro "i_"
Complexo Complexo::pow(int i_)
{
	// Se i_ for zero, retornar 1
	if (i_ == 0)
	{
		return Complexo(1, 0);
	}

	// Se i_ for positivo, retornar (a+bi)^i_
	Complexo novo_complexo = *this;

	for (int i = 1; i < i_; i++)
	{

		novo_complexo = novo_complexo * *this;
	}

	return Complexo(novo_complexo);

	// para i_ negativo > não vão ter testes.
}

// Para Fazer
Complexo Complexo::operator+(Complexo const &i_)
{
	float a_ = a + i_.a;
	float b_ = b + i_.b;
	return Complexo(a_, b_);
}

// Para Fazer
Complexo Complexo::operator-(Complexo const &i_)
{
	float a_ = a - i_.a;
	float b_ = b - i_.b;
	return Complexo(a_, b_);
}

// Para Fazer
Complexo Complexo::operator*(Complexo const &i_)
{
	//(a1 + b1i)(a2 + b2i) = a1a2 + a1b2i + b1ia2 + b1ib2i² = a1a2 - b1b2 + (a1b2 + b1a2)i
	float a_ = a * i_.a - b * i_.b;
	float b_ = (a * i_.b + b * i_.a);
	return Complexo(a_, b_);
}

// Para Fazer
Complexo Complexo::operator/(Complexo const &i_)
{
	//(a1 + b1i)/(a2 + b2i) = (a1 + b1i)(a2 - b2i)/(a2² + b2²) = (a1a2 + b1b2)/(a2² + b2²) + (b1a2 - a1b2)i)/(a2² + b2²)
	float a_ = (a * i_.a + b * i_.b) / (i_.a * i_.a + i_.b * i_.b);
	float b_ = (b * i_.a - a * i_.b) / (i_.a * i_.a + i_.b * i_.b);
	return Complexo(a_, b_);
}

// Para Fazer
Complexo &Complexo::operator=(Complexo const &i_)
{
	a = i_.a;
	b = i_.b;
	return *this;
}

// Para Fazer
bool Complexo::operator==(Complexo const &i_)
{
	if (a != i_.a)
		return false;
	if (b != i_.b)
		return false;
	return true;
}

// Para Fazer
bool Complexo::operator!=(Complexo const &i_)
{
	if (a != i_.a)
		return true;
	if (b != i_.b)
		return true;
	return false;
}
