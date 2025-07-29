#include <functional>
#include <iostream>

void funcao_callback(int valor)
{
	std::cout<<"Callback chamado com valor "<<valor<<std::endl;
}

void executar_callback(const std::function<void(int)>& callback)
{
	callback(23);
}

//tipo definido para armazenar funcao
using TipoCallback =std::function<void(int)>;

int main()
{

	TipoCallback callback = funcao_callback;
	
	executar_callback(funcao_callback);

	//usando funcao lambda
	executar_callback([](int valor){	
		std::cout<<"Lambda callback chamado com valor "<<valor<<std::endl;
	});
	

	return 0;
}