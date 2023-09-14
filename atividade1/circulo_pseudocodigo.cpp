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
    Método CalcularDistancia(){
        retornar DistanciaEntreDoisPontos(self.PontoInicial, self.PontoFinal)
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
circulinho.linhaBorda.Ponto.y <- circulinho.centro.y

area: Real
comprimento: Real

area <- circulinho.calculoAreaCirculo()
comprimento <- circulinho.calculoComprimentoCircunferencia()

Escreva "Área do círculo: ", area
Escreva "Comprimento da circunferência do círculo: ", comprimento
Fim