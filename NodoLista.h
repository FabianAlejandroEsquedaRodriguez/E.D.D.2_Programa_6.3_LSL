#ifndef NODOLISTA_H
#define NODOLISTA_H

/* Prototipo de la plantilla de la clase Lista. Así, en la clase
NodoLista se podrá hacer referencia a ella. */
template <class T>
class Lista;

template <class T>
class NodoLista 
{
    private: 
        NodoLista<T> * Liga;//Puntero siguiente
        T Info;
    public:
        NodoLista(); 
        T RegresaInfo(); 
        NodoLista<T>* RegresaLiga();
        friend class Lista<T>;
};

/* Declaración del método constructor por omisión. Inicializa con el
➥valor NULL al puntero al siguiente nodo. */
template <class T>
NodoLista<T>::NodoLista()
{
    Liga= NULL;
}

/* Método que permite, a usuarios ajenos a la clase, conocer el valor del atributo Info. */
template <class T>
T NodoLista<T>::RegresaInfo()
{
    return Info;
}

template <class T>
NodoLista<T>* NodoLista<T>::RegresaLiga()
{    
    return Liga;
}

#endif