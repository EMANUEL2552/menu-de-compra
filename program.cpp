#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using std::string;
using namespace std;



struct Produto {
    string nome;
    double preco;
};

vector<Produto> carrinho;

void adicionarProduto() {
    Produto produto;
    cout << "Digite o nome do produto: ";
    cin >> produto.nome;
    cout << "Digite o preco do produto: ";
    cin >> produto.preco;
    carrinho.push_back(produto);
    cout << "Produto adicionado ao carrinho!" << endl << endl;
}

void calcularTotal()
{
    double total = 0;
    for (int i = 0; i < carrinho.size(); i++)
    {
        total += carrinho[i].preco;
    }
    cout << "Valor total da compra: R$ " << total << endl;

}

void exibirRelatorio()
{
    cout << "####################" << endl;
    cout << "relatorio de compra " << endl;
    cout << "####################" << endl;
    for (int i = 0; i < carrinho.size(); i++)
    {
        cout << carrinho[i].nome << "- R$ " << carrinho[i].preco << endl;
        

    }

    calcularTotal();
}

void exibirMenu()
{
    cout << "Selecione uma opcao:\n" << endl;
    cout << "1 - adicionar produto ao carrinho :" << endl;
    cout << "2 - Exibir relatório de compra:" << endl;
    cout << "3 - sair :" << endl;
    int opcao;
    cin >> opcao;
    switch (opcao)
    {
     case 1:
            adicionarProduto();
            break;
     case 2:
         exibirRelatorio();
         break;
     case 3:
         cout << "Saindo..." << endl;
         return;
     default:
         cout << "opção invalida !" << endl;

    
        
    }
    exibirMenu();
}

int main()
{
    exibirMenu();
    

    return 0;

}


