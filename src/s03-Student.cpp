#include "s03-Student.h"

#include <iostream>
#include <string>

auto Student::to_string() const -> std::string
{
    auto out = std::ostringstream{};

    out << this->imie << " " << this->nazwisko << "\n";

    return out.str();
}

Student::Student(std::string imie, std::string nazwisko)
{
    this->imie     = imie;
    this->nazwisko = nazwisko;
}

auto main() -> int
{
    auto s = Student{"test", "testowy"};

    std::cout << s.to_string();
}
