// Claudio Souza Nunes

#include <iostream>
using namespace std;

// headers
void menu();
void inicializar();
void exibirQuantidadeElementos();
void exibirElementos();
void inserirElemento();
void buscarElemento();
//--------------------------


const int MAX = 5;
int lista[MAX]{};
int nElementos = 0;


int main()
{
	menu();
}

void menu()
{
	int op = 0;
	while (op != 6) {
		system("cls"); // somente no windows
		cout << "Menu Lista Linear";
		cout << endl << endl;
		cout << "1 - Inicializar Lista \n";
		cout << "2 - Exibir quantidade de elementos \n";
		cout << "3 - Exibir elementos \n";
		cout << "4 - Buscar elemento \n";
		cout << "5 - Inserir elemento \n";
		cout << "6 - Sair \n\n";

		cout << "Opcao: ";
		cin >> op;

		switch (op)
		{
		case 1: inicializar();
			break;
		case 2: exibirQuantidadeElementos();
			break;
		case 3: exibirElementos();
			break;
		case 4: buscarElemento();
			break;
		case 5: inserirElemento();
			break;
		case 6:
			return;
		default:
			break;
		}

		system("pause"); // somente no windows
	}
}

void inicializar()
{
	nElementos = 0; //inicia e reseta a lista
	cout << "Lista inicializada \n";

}

void exibirQuantidadeElementos() {

	cout << "Quantidade de elementos: " << nElementos << endl; //mostra o numero de elementos

}

void exibirElementos() //mostra o nome de todos os elementos, nesse caso o loop é para exibir todas as opções
{
	if (nElementos == 0)
	{
		cout << " A lista esta vazia \n";
	}
	else {
		cout << "Elementos: \n";
		for (int n = 0; n < nElementos; n++) { //enquanto N for menor que n elementos, ele continua em loop, e a cada rodada ele aumenta em um
			cout << lista[n] << endl;
		}
	}
}

void inserirElemento() // o segurança na porta do buffet, maiss de 30 NAO PODE
{
	if (nElementos < MAX) { //n elementos começa no 0 e no max 5
		cout << "Digite o elemento: ";
		cin >> lista[nElementos]; // se vc declara uma variável local e uma variável global com a mesma função, ele vai seguir a variável local, pq tem mais peso
		nElementos++;
	}
	else {
		cout << "Lista cheia, nao tem mais espaco na memoria para guardar um elemento";
	}

}

// deve ser implementada como resposta ao exercicio
void buscarElemento()
{
	if (nElementos == 0)
	{
		cout << "A lista esta vazia.\n";
		return;
	}
	
	int valor;
	bool encontrado = false;

	cout << "Digite o elemento que voce quer buscar: ";
	cin >> valor;

	for (int n = 0; n < nElementos; n++)
	{
		if (lista[n] == valor)
		{
			cout << "Elemento encontrado na posicao: " << n + 1 << endl;
			encontrado = true;
			break;
		}
	}
	if (!encontrado)
	{
		cout << "Elemento nao encontrado.\n"; 
	}
}