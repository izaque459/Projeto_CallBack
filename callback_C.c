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
//tipo para armazenar funcoa callback
typedef void (*TipoCallback)(int);

int main()
{
	TipoCallback callback = funcao_callback;
	
	executar_callback(funcao_callback);
	callback(90);
	
	return 0;
}