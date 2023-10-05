from my_libraries.formas import *


def workspace():
    #Ponto
    pontin = point(1, 2, 3)
    pontin.mostrarCoordenada()

    #Circulo
    print('='*30)
    circolozinho = circulo(1, 2, 3, 4)
    circolozinho.mostrarCoordenada()
    circolozinho.calcularAreaCiruclo()
    circolozinho.calcularComprimentoCircunferencia()

    #Quadrado
    print('='*30)
    quadradinho = quadrado(1, 2, 3, 4, 5)
    quadradinho.mostrarCoordenada()
    quadradinho.calcularAreaQuadrado()
    quadradinho.calcularPerimetroQuadrado()

    #Retangulo
    print('='*30)
    retangulinho = retangulo(1, 6, 7, 8, 9)
    retangulinho.mostrarCoordenada()
    retangulinho.calcularAreaRetangulo()
    retangulinho.calcularPerimetroRetangulo()

workspace()