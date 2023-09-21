InicioClasses
class Ponto(x: Real, y: Real){
    Método construtor(x1: Real, y1: Real){
        x <- x1
        y <- y1
    }
}

class linha(PontoInicial: Ponto, PontoFinal: Ponto){
    Método construtor(iPonto: Ponto, fPonto: Ponto){
        PontoInicial <- iPonto
        PontoFinal <- fPonto
    }
    Método CalcularDistancia() {
        declare deltaX: Real
        declare deltaY: Real
        deltaX <- PontoFinal.x - PontoInicial.x
        deltaY <- PontoFinal.y - PontoInicial.y
        retornar RaizQuadrada((deltaX * deltaX) + (deltaY * deltaY))
}
}

class circulo(centro: Ponto, aresta: linha, raio: Real){
    raio: Real
    centro: Ponto
    linhaBorda: linha
    Método construtor(meio: Ponto, r: Real, linhaBorda: linha){
        centro <- meio
        raio <- r
        self.linhaBorda <- linhaBorda
    }
    Método calculoAreaCirculo(){
        retornar 3.14 * raio * raio
    }
    Método calculoComprimentoCircunferencia(){
        retornar 2 * 3.14 * raio
    }
}

class quadrado(ladoQuadrado: Real){
    ladoQuadrado: Real
    Método construtor(quadradoLado: Real){
        ladoQuadrado <- quadradoLado
    }

    Método CalcularAreaQuadrado(){
        retornar ladoQuadrado * ladoQuadrado
    }
    Método CalculoPerimetroQuadrado(){
        retornar 4 * ladoQuadrado
    }
}

class retangulo(base: Real, altura: Real){
    base: Real
    altura: Real
    Método construtor(b: Real, h: Real){
        base <- b
        altura <- h
    }
    Método calcularAreaRetangulo(){
        retornar base * altura
    }
    Método calcularPerimetroRetangulo(){
        retornar 2 * (base + altura)
    }
}
FimClasses

Inicio
declare centrox: Real
declare centroy: Real
declare circulinho: circulo

Escreva "Digite os valores x e y do centro do círculo: "
leia centrox, centroy

Escreva "Digite o raio do círculo: "
leia raio

circulinho.centro.x <- centrox
circulinho.centro.y <- centroy
circulinho.raio <- raio

circulinho.linha.PontoInicial <- circulinho.centro
circulinho.linha.PontoFinal.x <- circulinho.centro.x + circulinho.raio
circulinho.linhaBorda.PontoFinal.y <- circulinho.centro.y

declare area: Real
declare comprimento: Real

area <- circulinho.calculoAreaCirculo()
comprimento <- circulinho.calculoComprimentoCircunferencia()

Escreva "Área do círculo: ", area
Escreva "Comprimento da circunferência do círculo: ", comprimento

// Quadrado

declare ladoQuadrado: Real

Escreva "Digite o valor do lado do quadrado: "
leia ladoQuadrado

declare quadradinho: quadrado
declare areaQuadrado: Real
declare perimetroQuadrado: Real

quadradinho <- quadrado(ladoQuadrado)
areaQuadrado <- quadradinho.CalcularAreaQuadrado()
perimetroQuadrado <- quadradinho.CalculoPerimetroQuadrado()

Escreva "A área do quadrado é ", areaQuadrado
Escreva "O perímetro do quadrado é: ", perimetroQuadrado

// Retangulo

declare base
declare altura

Escreva "Digite o valor da base e da altura do retangulo: "
leia base, altura

declare areaRetangulo: Real
declare perimetroRetangulo: Real
declare retangulozinho: retangulo

retangulozinho <- retangulo(base, altura)
areaRetangulo <- retangulozinho.calcularAreaRetangulo()
perimetroRetangulo <- retangulozinho.calcularPerimetroRetangulo()

Escreva "A área do retangulo é: ", areaRetangulo
Escreva "O perímetro do retangulo é: ", perimetroRetangulo

Fim