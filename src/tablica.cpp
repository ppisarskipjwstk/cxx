#include <iostream>
#include <array>

auto f(int a[], int n) -> void
{
    for (int i = 0; i < n; i++) {
        a[i] = i * 100;
    }
}


auto main() -> int
{
std::array<int,10> example = { 42 , 9 , -1 , 18 , 59 , 3 , 101 , 31 , 72 , 12 };
std::cout << example[0] << "\n";

    int tab[100];
    int ile;

    std::cout << "Podaj n: ";
    std::cin >> ile;

    f(tab, ile);

    for (int i = 0; i < ile; i++) {
        std::cout << tab[i] << "\n";
    }

    return 0;
}
