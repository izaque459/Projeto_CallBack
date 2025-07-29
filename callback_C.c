#include <stdio.h>

//funcao para ser usada como callback
void funcao_callback(int valor)
{
	printf("Callback chamado com valor %d\n",valor);
}


void executar_callback(void (*callback)(int))
{
	callback(23);
}

void executar_callback_value(void (*callback)(int),int valor)
{
	callback(valor);
}

//tipo para armazenar funcao
typedef void (*TipoCallback)(int);

int main()
{
	TipoCallback callback = funcao_callback;
	
	executar_callback(funcao_callback);
	executar_callback_value(callback,90);
	
	return 0;
}