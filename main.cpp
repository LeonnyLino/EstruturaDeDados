#include <iostream>
#define tam 10

using namespace std;

struct Carro{
	string cor, chassi, placa, modelo, marca;
	int ano;
	bool existe = false;
};

bool Cadastrar(Carro carro[], Carro novoCarro){
	
	for(int i = 0; i < tam; i++){
		if(carro[i].existe == false){
			carro[i] = novoCarro;
			return true;
		}
	}
	return false;
}

Carro AlterarCarro (*Carro carro[], *Carro alteraCarro){
	
}


int main(int argc, char** argv) {
	Carro carro;
	Carro c[tam];
	int op;
	do{
		cout << "Escolha a opção desejada:" << endl
		 << "1 - Cadastrar" << endl
		 << "2 - Alterar" << endl
		 << "3 - Listar" << endl
		 << "4 - Deletar" << endl
		 << "5 - Sair" << endl;
		cin >> op;
		
		switch (op){
			case 1:
				cout << "Cadastrando Carro:" << endl
					 << "Marca: ";
				cin >> carro.marca;
				cout << "Modelo: ";
				cin >> carro.modelo;
				cout << "Placa: ";
				cin >> carro.placa;
				cout << "Chassi: ";
				cin >> carro.chassi;
				cout << "Cor: ";
				cin >> carro.cor;
				cout << "Ano: ";
				cin >> carro.ano;
				carro.existe = true;
				bool verifica = Cadastrar(c, carro);
				if (varifica == true){
					cout << "Carro cadastrado com sucesso!" << endl;
				}else {
					cout << "Carro não cadastrado!" << endl;
				}
				break;
			
		}
		
			case 2:
				cout << "Alterar: " << endl
					 << "Para Alterar digite o Chassi "
	}while(op = 5)
				
	
	
	 cout << carro[0].cor << endl;
	
		
		
	system("pause");
	return 0;
}
