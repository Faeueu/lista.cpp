#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main()
{
    int opc = -1;

    do{
        cout << "1 - Imprimir \"Hello, World!\"\n";
        cout << "2 - Digite um numero e o imprima \n";
        cout << "3 - Soma de dois numeros \n";
        cout << "4 - Media bimestral \n";
        cout << "5 - Transformar Metros em Centimetros \n";
        cout << "6 - Raio de uma circunferencia \n";
        cout << "7 - Dobro da Area do quadrado \n";
        cout << "8 - Salario por hrs traalhadas \n";
        cout << "9 - Transformar Fahrenheit em Celsius \n";
        cout << "10 - Transformar celsius em fahrenheit \n";
        cout << "11 - Converter Dolar para Reais \n";
        cout << "12 - Peso ideal pela altura \n";
        cout << "13 - Calcular salario com descontos \n";
        cout << "14 - Tabuada do 1 ao 9 \n";
        cout << "15 - Loja de tintas \n";
        cout << "0 - Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opc;


        if (opc == 1){
            cout << "Hello World" << "\n";
            break;

        }else if (opc == 2){
            int x;
            cout << "Digite um numero para X: ";
            cin >> x;
            cout << x;
            break;

        }else if (opc == 3){
            int Num1;
            int Num2;

            cout << "Digite um valor: ";
            cin >> Num1;

            cout << "Digite outro valor: ";
            cin >> Num2;

            int soma = Num1 + Num2;
            cout << "A soma e: " << soma;
            break;

        }else if (opc ==4){
            float nota1;
            float nota2;
            float nota3;
            float nota4;

            cout << "Digite a primeira nota: ";
            cin >> nota1;
            cout << "Digite a segunda nota: ";
            cin >> nota2;
            cout << "Digite a terceira nota: ";
            cin >> nota3;
            cout << "Digite a quarta nota: ";
            cin >> nota4;

            float media = (nota1+nota2+nota3+nota4) / 4;
            cout << media;
            break;

        }else if (opc ==5){
            double metros;
            cout << "Digite quantidade de metros: ";
            cin >> metros;
            double centimetros = metros * 100;
            cout << metros << "m " << "equivalem a " << centimetros << "cm";
            break;

        }else if (opc ==6){
            double raio;
            cout << "digite o tamanho do raio: ";
            cin >> raio;
            double area = raio * 3.14;
            cout << "A area do circulo e de: " << area;
            break;

        }else if (opc == 7){
            float lado;
            cout << "Digite o comprimento do lado: ";
            cin >> lado;

            float area = lado * lado;
            float dobroArea = area * 2;

            cout << "A area do quadrado e: " << area << "\n";
            cout << "O dobro da area do quadrado e: " << dobroArea << "\n";
            break;

        }else if(opc == 8){
            double horasTrabalhadas;
            double valorHora;

            cout << "Digite a quantidade de horas trabalhadas: ";
            cin >> horasTrabalhadas;
            cout << "Digite o valor da hora de trabalho: ";
            cin >> valorHora;

            double salario = horasTrabalhadas * valorHora;
            cout << "O salario do mes e: " << salario << "\n";
            break;

        }else if(opc == 9){
            double fahrenheit;
            cout << "Digite a temperatura em graus Fahrenheit: ";
            cin >> fahrenheit;

            double celsius = (fahrenheit - 32) / 1.8;
            cout << "A temperatura em graus Celsius e: " << celsius << "\n";
            break;

        }else if (opc == 10){
            double celsius;
            cout << "Digite a temperatura em graus Celsius: ";
            cin >> celsius;

            double fahrenheit = (celsius * 9/5) + 32;
            cout << "A temperatura em graus Fahrenheit e: " << fahrenheit << "\n";
            break;

        }else if (opc == 11){
            double dolar;
            const double taxa = 4.80;

            cout << "Digite o salario em dolares americanos: ";
            cin >> dolar;

            double reais = dolar * taxa;
            cout << "O salario em reais e: " << reais << "\n";
            break;

        }else if (opc == 12){
            double altura;
            char genero;

            cout << "Digite a altura em metros: ";
            cin >> altura;
            cout << "Digite o genero, (M) para masculino, (F) para feminino: ";
            cin >> genero;

            double peso;
            if(genero == 'M'|| genero == 'm'){
                peso = (72.7 * altura) + 58;
            } else if (genero == 'F' || genero == 'f'){
                peso = (62.1 * altura) - 44.7;
            }else{
                cout << "ERRO! TENTE NOVAMENTRE";
                return 1;
            }
            cout << "O peso ideal e: " << peso << " kg\n";
            break;

        }else if(opc == 13){
            double valorPorHora;
            double horasTrabalhadas;

            cout << "Digite o valor ganho por hora: ";
            cin>> valorPorHora;
            cout << "Digite o numero de horas trabalhadas no mes: ";
            cin >> horasTrabalhadas;

            double salarioBruto = valorPorHora * horasTrabalhadas;
            double impostoRenda = 0.11 * salarioBruto;
            double inss = 0.08 * salarioBruto;
            double sindicato = 0.05 * salarioBruto;
            double salarioLiquido = salarioBruto - (impostoRenda + inss + sindicato);

            cout << "Salario Bruto: R$ " << salarioBruto << "\n";
            cout << "Imposto de Renda (11%): R$ " << impostoRenda << "\n";
            cout << "INSS (8%): R$ " << inss << "\n";
            cout << "Sindicato (5%): R$ " << sindicato << "\n";
            cout << "Salario Liquido: R$ " << salarioLiquido << "\n";
            break;

        }else if(opc == 14) {
            int tabuada;

            do {
                cout << "Escolha uma opcao:\n";
                cout << "1 - Tabuada do 1\n";
                cout << "2 - Tabuada do 2\n";
                cout << "3 - Tabuada do 3\n";
                cout << "4 - Tabuada do 4\n";
                cout << "5 - Tabuada do 5\n";
                cout << "6 - Tabuada do 6\n";
                cout << "7 - Tabuada do 7\n";
                cout << "8 - Tabuada do 8\n";
                cout << "9 - Tabuada do 9\n";
                cin >> tabuada;

                switch (tabuada) {
                    case 1:
                        for (int i = 1; i <= 10; ++i) {
                            cout << "1 x " << i << " = " << 1 * i << "\n";
                        }
                        break;

                    case 2:
                        for (int i = 1; i <= 10; ++i) {
                            cout << "2 x " << i << " = " << 2 * i << "\n";
                        }
                        break;
                    case 3:
                        for (int i = 1; i <= 10; ++i) {
                            cout << "3 x " << i << " = " << 3 * i << "\n";
                        }
                        break;
                    case 4:
                        for (int i = 1; i <= 10; ++i) {
                            cout << "4 x " << i << " = " << 4 * i << "\n";
                        }
                        break;
                    case 5:
                        for (int i = 1; i <= 10; ++i) {
                            cout << "5 x " << i << " = " << 5 * i << "\n";
                        }
                        break;
                    case 6:
                        for (int i = 1; i <= 10; ++i) {
                            cout << "6 x " << i << " = " << 6 * i << "\n";
                        }
                        break;
                    case 7:
                        for (int i = 1; i <= 10; ++i) {
                            cout << "7 x " << i << " = " << 7 * i << "\n";
                        }
                        break;
                    case 8:
                        for (int i = 1; i <= 10; ++i) {
                            cout << "8 x " << i << " = " << 8 * i << "\n";
                        }
                        break;
                    case 9:
                        for (int i = 1; i <= 10; ++i) {
                            cout << "9 x " << i << " = " << 9 * i << "\n";
                        }
                        break;

                    default:
                        cout << "Opcao invalida";
                }
                return 1;
            }
            while (tabuada != 10);

        }else if(opc == 15){
            const double COBERTURA = 3.0;
            const double TAMANHO = 18.0;
            const double PRECO = 80.0;

            double areaPintura;
            cout << "Digite o tamanho da area a ser pintada em metros quadrados: ";
            cin >> areaPintura;

            double litros = round(areaPintura / COBERTURA);
            int latas = static_cast<int>(round(litros / TAMANHO));
            double precoTotal = latas * PRECO;

            cout << "Quantidade de latas necessarias: " << latas << "\n";
            cout << "Preco total: R$ " << precoTotal << "\n";
            break;

        }else if(opc == 0){
            cout << "FECHAR PROGRAMA";
            break;
        } else{
            cout << "OPCAO INVALIDA";
        }

    } while (opc != 0);

    return 0;
}
