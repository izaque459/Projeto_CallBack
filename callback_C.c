#include <stdio.h>

void funcao_callback(int valor)
{
	printf("Callback chamado com valor %d\n",valor);
}


void executar_callback(void (*callback)(int))
{
	callback(23);
}

int main()
{
	executar_callback(funcao_callback);
	return 0;
}