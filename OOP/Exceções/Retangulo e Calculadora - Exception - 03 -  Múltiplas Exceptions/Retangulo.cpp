#include "Retangulo.h"
#include <exception>

Retangulo::Retangulo(int x, int y, int largura, int altura)
{

	if (x < 0)
		throw std::exception("X nao pode ser menor que zero.");

	if (y < 0)
		throw std::exception("Y nao pode ser menor que zero.");

	if (largura < 0)
		throw std::exception("Largura nao pode ser menor que zero.");

	if (altura < 0)
		throw std::exception("Largura nao pode ser menor que zero.");


	m_x = x;
	m_y = y;
	m_largura = largura;
	m_altura = altura;
}


