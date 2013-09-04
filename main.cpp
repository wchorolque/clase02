#include <iostream>
#include <string.h>

using namespace std;

class Gato
{
    private:
        int edad;

    public:
        void ColocarEdad(int);
        void MostrarEdad();

};

void Gato::ColocarEdad(int e)
{
    edad = e;
}

void Gato::MostrarEdad()
{
    cout << edad << endl;
}

int main()
{
    Gato gato;
    gato.ColocarEdad(5);
    cout << "Edad: ";
    gato.MostrarEdad();
    return 0;
}

