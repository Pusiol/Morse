# Morse
Biblioteca de código morse em C

  Este é uma pequena biblioteca multiplataforma para codificar
código morse. Da forma como está, ela pisca a cor de fundo
do terminal no windows. As funções são bastante otimizadas
pensando numa aplicação embarcada.
  Para usar outra plataforma, basta entrar em morse.h e trocar
as macros DELAY, LIGA e DESLIGA pelas respectivas abstrações
de seu microcontrolador favorito.
