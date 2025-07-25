# Projeto_CallBack

Projeto sobre o conceito de callback em C e C++


## O que é

Um callback é uma função que é passada como argumento
para outra função, permitindo que a segunda função 
execute a primeira em um momento específico.Útil
para lidar com eventos assíncronos, como:
	
	1.	Respostas de rede;
	2. 	Interações com usuário;
	3.  Término de operações demoradas.
	
	
## Descrição

Em C:
	1.  Ponteiros de função são usados para implementar
		callbacks;
	2.  Uma função é definida e seu endereço é passado como
		argumento.
		
Em C++:
	1.  Funções lambdaou ponteiros de função podem ser usados
		como callbacks;
	2.  Em C++11 introduziu std::funtcion, que é uma classe que 
		pode armazenar qualquer tipo de função chamável;
	3.  Membros podem ser usados como callback frequentemente
		com std::bind ou funções lambdas.