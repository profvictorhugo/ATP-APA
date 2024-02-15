## Exemplos de algoritmos para as classes de complexidade assintótica

### Tempo constante O(n)
##
Algoritmo:
tempoConstante.c

Após compilar, execute-o:

```./tempoConstante```

### Tempo quadrático O(n<sup>2</sup>)
##
Algoritmo:
tempoQuadratico.c

Após compilar, execute-o passando uma das entradas:

#### > para testar um conjunto com 5 elementos:
```./tempoQuadratico 5, 5, 4, 3, 2, 1```

#### > para testar um conjunto com 1.000 elementos:
```./tempoQuadratico < numeros1000.txt```

#### > para testar um conjunto com 100.000 elementos:
```./tempoQuadratico < numeros100000.txt```

#### > para testar um conjunto com 1.000.000 elementos:
```./tempoQuadratico < numeros1000000.txt```

#### Para comparação, execute com a mesma entrada o programa tempoLinearLogaritmico.c

##
### Tempo exponencial O(2<sup>n</sup>)
##
Algoritmo:
tempoExponencial.c

### > para testar com n=5:
``` ./tempoExponencial 5 ```

### Tempo cúbico O(n<sup>3</sup>)
##
Algoritmo:
tempoCubico.c

Após compilar, execute-o passando uma das entradas:

#### > para testar a multiplicação de duas matrizes aleatórias de ordem 5 (i.e., 5x5):
```./tempoCubico 5```

#### > para testar a multiplicação de duas matrizes aleatórias de ordem 50 (i.e., 5x5):
```./tempoCubico 50```


### Tempo logarítmico O(log n)
##
Algoritmo:
tempoLogaritmico.c

Após compilar, execute-o:

```./tempoLogaritmico 100```