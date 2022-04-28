#include <iostream>

void per(int** chislo, int chislo2, int chislo3);
void vtor(int** chislo, int chislo2, int chislo3);

void per(int** chislo, int chislo2, int chislo3){
    std::cout << std::endl << std::endl;
    for (int i = 0; i < chislo2; i++){
        std::cout << " ";
        for (int j = 0; j < chislo3; j++){
            std::cout << chislo[i][j] << " ";
        }
        std::cout << " " << std::endl;
    }
}

void vtor(int** num, int num2, int num3){
    srand(time(0));
    for (int i = 0; i < num2; i++){
        for (int j = 0; j < num3; j++){
            num[i][j] = 10 + rand() % 41;
        }
    }
}

int main(){
    setlocale(LC_ALL, "rus");
    int m,n;
    std::cout << "Введите размерность двумерного массива m и n\n";
    std::cin >> m;
    std::cin >> n;
    int** ch = new int* [m];
    for (int i = 0; i < m; i++){
        ch[i] = new int[n];
    }
    vtor(ch, m, n);
    per(ch, m, n);
    for (int i = 0; i < n; i++){
        delete[] ch[i];
    }
    delete[] ch;
    return 0;
}

