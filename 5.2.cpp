#include <iostream>

void Chet_Nech(int* twelv, int size);

void Chet_Nech(int* twelv, int size) {
    int a;
    for (int i = 0; i < size; i++) {
        if ((twelv[i] % 2 == 0) && (twelv[i + 1] % 2 != 0)) {
            a = twelv[i];
            twelv[i] = twelv[i + 1];
            twelv[i + 1] = a;
        }
        i++;
    }
    for (int i = 0; i < size; i++){
        std::cout << twelv[i];
    }
}

int main(){
    int size = 12;
    int* twelv = new int[size];
    int n = 0;
    for (int i = 0; i < size; i++) {
        twelv[i] = n;
        std::cout << twelv[i];
        n++;
    }
    std::cout << std::endl;
    Chet_Nech(twelv, size);
}

