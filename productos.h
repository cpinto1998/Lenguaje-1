#include <iostream>
#include "productos.h"
#include "subtotal.h"

using namespace std;


void agregarProducto(string descripcion, int cantidad, double precio, int impuesto, int total)
{
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
}

void imprimirFactura()
{
    system("cls");
    cout << "*******" << endl;
    cout << "FACTURA" << endl;
    cout << "*******" << endl;
    cout << endl;

    cout << "Productos:" << endl;
    cout << listaProductos;
    Impuesto= subtotal*0.15;
    total=impuesto+subtotal;
    cout << endl;
    cout << "Subtotal: " << subtotal;
    cout << "Impuesto:" << impuesto;
    cout << "Total:" << total;
    cout << endl;
    cout << endl;
    system("pause");
}
