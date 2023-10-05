class point():
    def __init__ (self, n, x, y):
        self._n = n
        self._x = x
        self._y = y

    def coordenadas(self, x, y):
        self._x = x
        self._y = y

    def mostrarCoordenada(self):
        print(f'\nO ponto {self._n} nas coordenadas: ({self._x}, {self._y})')

class circulo(point):
    def __init__ (self, n, x, y, raio):
        super().__init__(n, x, y)
        self.raio = raio
        
    def coordenadas(self, x, y, raio):
        super().coordenadas(x, y)
        self.raio = raio

    def mostrarCoordenada(self):
        print(f'\nO circulo {self._n} nas coordenadas ({self._x}, {self._y})')
        print(f'E o raio é {self.raio}')

    def calcularAreaCiruclo(self):
        raio = 2
        formulaArea = raio * raio * 3.14
        return print(f'\nA área do circulo é: {formulaArea}')
    
    def calcularComprimentoCircunferencia(self):
        raio = 5
        formulaCircu = 2 * 3.14 * raio
        return print(f'\nO comprimento da circunferencia do circulo é: {formulaCircu}')
    
class quadrado(point):
    def __init__(self, n, x, y, x2, y2):
        super().__init__(n, x, y)
        self._x2 = x2
        self._y2 = y2

    def mostrarCoordenada(self):
        print(f'\nO quadrado {self._n} e as coordenadas do vértice 1 ({self._x}, {self._y})')
        print(f'\nO quadrado {self._n} e as coordenadas do vértice 2 ({self._x2}, {self._y2})')

    def calcularAreaQuadrado(self):
        lado = 4
        formulaArea = lado * lado
        return print(f'\nA área do quadrado é: {formulaArea}')
    
    def calcularPerimetroQuadrado(self):
        lado = 5
        formulaPerimetro = 4 * lado
        return print(f'\nO perimetro do quadrado é: {formulaPerimetro}')
    
class retangulo(quadrado):
    def __init__(self, n, x, y, x2, y2):
        super().__init__(n, x, y, x2, y2)

    def mostrarCoordenada(self):
        print(f'\nO retangulo {self._n} e as coordenadas do vértice 1 ({self._x}, {self._y})')
        print(f'\nO retangulo {self._n} e as coordenadas do vértice 2 ({self._x2}, {self._y2})')
    
    def calcularAreaRetangulo(self):
        base = 4
        altura = 3
        formulaRetangulo = base * altura
        return print(f'\nA área do retangulo é: {formulaRetangulo}')
    
    def calcularPerimetroRetangulo(self):
        base = 2
        altura = 5
        formulaPerimetro = 2 * (base + altura)
        return print(f'\nO perimetro do retangulo é: {formulaPerimetro}')