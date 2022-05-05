#include "iostream"

#include "string"

#include "time.h"

using namespace std;

int main() {
  srand(time(0));
  int n;
  string test;
  const string n1[8] = {
    "count",
    "comprehend",
    "dismiss",
    "consider",
    "depend",
    "bright",
    "immobile",
    "lenght"
  };
  const string n2[8] = {
    "countable",
    "comprehensible",
    "dismissive",
    "considerate",
    "dependent",
    "brighten",
    "immobilise",
    "lenghten"
  };
  const string n3[8] = {
    "исчисляемый",
    "понятный",
    "пренебрежительный",
    "внимательный",
    "зависимый",
    "осветляющий",
    "обездвиживающий",
    "удлиняющий"
  };
  const string n4[8] = {
    "считать",
    "понимать",
    "отклонять",
    "учитывать",
    "зависеть",
    "яркий",
    "неподвижный",
    "длина"
  }; 
  int masN5[8] = {0,0,0,0,0,0,0,0};
  std :: cout << "Напиши 0 когда захочешь закончить тренировку..." << std :: endl;
  for (;test != "0";) {
    n = rand() % 8;
    std::cout << "Форма " << n1[n]  <<"(" << n4[n] <<")"<< ": ";
    std::cin >> test;
    if (test == n2[n]) {
      std::cout << "Правильно!" << std::endl;
      std::cout << "Перевод слова " << n2[n] << " - " << n3[n] << std::endl;
    } else {
      std::cout << "Неправильно!" << std::endl <<
        "Ответ был: " << n2[n] << std::endl;
      std::cout << "Перевод слова " << n2[n] << " - " << n3[n] << std::endl;
    }
    masN5[n]++;
  }
  std :: cout << "Вы повторили:" << std :: endl;
  for (int i = 0; i < 8; i++){
  std :: cout << n1[i] << " - " << n2[i] << " " << masN5 [i] << " раз" << std :: endl;
  } 
}
