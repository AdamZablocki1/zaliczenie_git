#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    int cyfra;
    printf("Zmiana numer 1\nPodaj liczbe\n");
    scanf("%d", &cyfra);
    printf("oto twoja liczba: %d\n", cyfra);
    printf("Zmiana numer 2\n");
    printf("odliczanie do liczby 9\n");
    for (int i = 0; i < 9; i++) {
        printf("%d ", i);
    }
    printf("test");
    return 0;
}
