#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "uk_UA");
    int quntityStudents;
    int quntityLessons;
    cout << "Введіть кількість студентів: " << endl;
    cin >> quntityStudents;
    cout << "Введіть кількість предметів: " << endl;
    cin >> quntityLessons;
  double** grades = new double* [quntityStudents];

    for (int i = 0; i < quntityStudents; ++i) {
        grades[i] = new double[quntityLessons];
    }
    for (int i = 0; i < quntityStudents; ++i){
        double sum = 0;
       cout << "Введіть оцінки студента: " << i + 1 << "для" << quntityLessons << "Предметів: " << endl;
        for (int j = 0; j < quntityLessons; j++){
            cin >> grades[i][j];
            sum += grades[i][j];
    }
    double average = sum / quntityLessons;
    cout << "Середня оцінка студента: " << i + 1 << " :" << average << endl;
    }
    for (int i = 0; i < quntityStudents; i++) {
        delete[] grades[i];
    } delete[] grades;

    return 0;
}
