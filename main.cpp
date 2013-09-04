#include <iostream>

using namespace std;

class Gato
{
    private:
        int edad;

    public:
        Gato();
        void ColocarEdad(int);
        void MostrarEdad();

};

Gato::Gato()
{
    edad = 0;
}

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
    gato.MostrarEdad();
    gato.ColocarEdad(5);
    cout << "Edad: ";
    gato.MostrarEdad();
    return 0;
}

