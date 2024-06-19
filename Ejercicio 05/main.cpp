#include <QCoreApplication>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    // Crear un vector para almacenar los valores
    vector<string> values;

    values.push_back("pan comido");
    values.push_back("andá pa allá");
    values.push_back("venga");
    values.push_back("easy peasy");
    values.push_back("con permiso");

    // Ordenar la lista alfabéticamente
    sort(values.begin(), values.end());

    cout << "Las palabras ordenadas son: " << endl << endl;

    for (const auto& str : values) {
       cout << str << endl;
    }

    return a.exec();
}
