
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


const int MAX = 2;
int lista[MAX]{};
int nElementos = 0;
int busca;
int listaBuscar[MAX]{};
int nElementosBuscar = 0;

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
	nElementos = 0;
	cout << "Lista inicializada \n";

}

void exibirQuantidadeElementos() {

	cout << "Quantidade de elementos: " << nElementos << endl;

}

void exibirElementos()
{
	if (nElementos == 0)
	{
		cout << " A lista esta vazia \n";
	}
	else {
		cout << "Elementos: \n";
		for (int n = 0; n < nElementos; n++) {
			cout << lista[n] << endl;
		}
	}
}

void inserirElemento()
{
	if (nElementos < MAX) {
		cout << "Digite o elemento: ";
		cin >> lista[nElementos];
		nElementos++;
	}
	else {
		cout << "Lista cheia \n";
	}

}

// deve ser implementada como resposta ao exercicio
void buscarElemento()
{
	cout << "Digite o elemento que deseja buscar: ";
	cin >> busca;
	if (nElementos == 0) {
		cout << "A lista esta vazia. Nao ha elementos. \n";
		return;
	}
	for (int i = 0; i < nElementos; i++) {
		if (lista[i]==busca) {
			listaBuscar[nElementosBuscar] = i;
			nElementosBuscar++;
		}
		if (i == nElementos-1 && nElementosBuscar==0){
			cout << "Esse elemento nao existe na lista. \n";
			return;
		}
		if (i == nElementos - 1 && nElementosBuscar > 0) {
			cout << "Esse elemento existe na(s) posicao(s): ";
			for (int n = 0; n < nElementosBuscar; n++) {
				cout << listaBuscar[n] << " ";
			}
		}
	}
}