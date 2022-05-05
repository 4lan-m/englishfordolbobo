#include "iostream"
#include "string"
#include "time.h"
using namespace std;

int main (){
srand(time(0));
int n;
string test;
const string n1[8] = {"count","comprehend","dismiss","consider","depend","bright","immobile","lenght"};
const string n2[8] = {"countable","comprehensible","dismissive","considerate","dependent","brighten","immobilise","lenghten"};
const string n3[8] = {"исчисляемый", "понятный", "пренебрежительный", "внимательный", "зависимый", "осветляющий", "обездвиживающий", "удлиняющий"};
for (;;){
n = rand () % 8;
std :: cout << "Форма " << n1[n] << ": ";
std :: cin >> test;
if (test == n2[n]){
	std :: cout << "Правильно!" << std :: endl;
	std :: cout << "Перевод слова " << n2[n] << " - " << n3[n] << std :: endl;
}else{
	std :: cout << "Неправильно!" << std :: endl << 
		"Ответ был: " << n2[n] << std :: endl;
	std :: cout << "Перевод слова " << n2[n] << " - " << n3[n] << std :: endl;
}
}
}
