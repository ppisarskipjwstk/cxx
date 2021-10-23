#include <sstream>
#include <string>

struct Student{

	std::string imie;
	std::string nazwisko;
	int semestr;
	Student(std::string, std::string);
	auto to_string() const -> std::string;
};
