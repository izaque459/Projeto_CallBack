#include <functional>
#include <iostream>


class ClasseA
{
	public:
		void callback(int valor)
		{
			std::cout<< "Sou membro callback chamando valor "<< valor << std::endl;
		}
		
};

void executar_callback(const std::function<void(int)>& callback)
{
	callback(23);
}

int main()
{
	ClasseA obj;
	
	executar_callback(std::bind(&ClasseA::callback,&obj,std::placeholders::_1));
	
	return 0;
}