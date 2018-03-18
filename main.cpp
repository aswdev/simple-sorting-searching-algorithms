#include <iostream>
#include <windows.h>

using namespace std;
int wybor();
int * utworz(int * n);
void linearsearch(int * T, int * n);
int binarysearch(int * T, int * n);
void bubblesort(int * T, int * n);

void wyswietl(int * T, int * n);

int main() {
  int choice;
  cout << "Witaj! Podany program zaprezentuje dzialanie kilku algorytmow na sortowanie i wyszukiwanie elementow tablicy." << endl << endl;
  UTWORZ:
    int * n = new int;
    int * T = utworz(n);

  cout << "1-Ponowne pobranie danych" << endl << "2-Wyszukiwanie liniowe" << endl << "3-Wyszukiwanie binarne" << endl << "4-Sortowanie babelkowe" << endl << "5-Wyswietlenie danych" << endl << "More soon" << endl << "7-Koniec programu" << endl;
  do {

    choice = wybor();

    switch (choice) {

    case 1:
      {
        system("cls");
        main();
        break;
      }
    case 2:
      {
        linearsearch(T, n);
        break;
      }
    case 3:
      {
        binarysearch(T, n);
        break;
      }
    case 4:
      {
        bubblesort(T, n);
        break;
      }
    case 5:
      {
        wyswietl(T, n);
        break;
      }

    case 6:
      {
        break;
      }
    case 7:
      {
        delete[] T;
        delete n;
        system("cls");
        return 0;
      }
    }
  }
  while (choice <= 6 && choice > 0);

  return 0;
}
int wybor() {
  int choice;
  cin >> choice;
  while (choice > 7 || choice <= 0) {
    cout << "Brak podanej opcji, sprobuj ponownie" << endl;
    cin >> choice;
  }
  return choice;
}

int * utworz(int * n) {

  cout << "Podaj ilosc elementow: ";
  cin >> * n;

  while ( * n <= 0) {
    cout << "Rozmiar tablicy nie moze byc ujemny lub rowny zero, podaj rozmiar jeszcze raz:";
    cin >> * n;
  }
  int * T = new int[ * n];
  for (int i = 0; i < * n; i++) {
    cout << "Podaj T[" << i << "]=";
    cin >> T[i];
  }
  cout << "SUKCES! Dane zostaly pobrane, wybierz kolejna opcje lub zakoncz program (...):" << endl;
  return T;
}
void linearsearch(int * T, int * n) {
  int s;
  int k = 0;
  cout << "Podaj szukany element: ";
  cin >> s;
  for (int i = 0; i < * n; i++) {
    if (T[i] == s) {
      cout << "Element " << s << " znaleziono na pozycji " << i << endl;
      k++;
      break;
    }
  }
  if (k == 0) {
    cout << "Nie znaleziono elementu" << endl;
  }
  cout << "Wybierz kolejna opcje lub zakoncz program (...):" << endl;

}
int binarysearch(int * T, int * n) {
  int rosnacy = 1, malejacy = 1, k = 0;
  int indeks_poczatkowy = 0;
  int indeks_koncowy = * n - 1;
  int sr, x;
  for (int i = 0; i < * n - 1; i++) {
    if (T[i] <= T[i + 1]) {
      rosnacy++;
    }
  }
  for (int i = 0; i < * n - 1; i++) {
    if (T[i] >= T[i + 1]) {
      malejacy++;
    }
  }
  if (rosnacy == * n || malejacy == * n) {
    cout << "Podaj szukany element: ";
    cin >> x;
    while (indeks_poczatkowy <= indeks_koncowy) {
      sr = (indeks_poczatkowy + indeks_koncowy) / 2;
      if (T[sr] == x) {
        cout << "Element " << x << " znaleziono na pozycji " << sr << endl;
        k++;
        break;
      }
      if (T[sr] < x) {
        indeks_poczatkowy = sr + 1;
      } else {
        indeks_koncowy = sr - 1;
      }
    }
    if (k == 0) {
      cout << "Nie znaleziono elementu" << endl;
    }
  } else {
    cout << "Zanim wykonasz wyszukiwanie binarne, dane musza zostac posortowane!" << endl;
    return 0;
  }
  cout << "Wybierz kolejna opcje lub zakoncz program (...):" << endl;

}
void bubblesort(int * T, int * n) {
  for (int i = 0; i < * n; i++) {
    for (int j = 0; j < * n - 1; j++) {
      if (T[j] > T[j + 1])
        swap(T[j], T[j + 1]);

    }
  }
  cout << "Dane zostaly posortowane! Wybierz kolejna opcje lub zakoncz program (...):" << endl;
}

void wyswietl(int * T, int * n) {
  cout << "DANE:" << endl;
  for (int i = 0; i < * n; i++) {
    cout << "T[" << i << "]=" << T[i] << endl;
  }
  cout << "Wybierz kolejna opcje lub zakoncz program (...):" << endl;
}
