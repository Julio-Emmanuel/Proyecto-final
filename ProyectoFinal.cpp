#include <iostream>
using namespace std;

int main() {
    int opcion;
    int dinero = 0; //variable para el dinero del usuario
    char eleccion;
    while(true){
        cout << "estamos en fes aragón estas a una semana de terminar el semestre y tienes muchos trabajos, examenes y peroyectos pesados." << endl<< "estas llegando a tu escuela y ves que se le cae el monedero a una persona delante tuyo."<< endl<< "¿qué quieres hacer?"<<endl;
        cout << "\n--- Economía ---" << endl;
        cout << "Dinero: " << dinero << endl; 
        cout << "\n--- Menú de Acciones ---" << endl;
        cout << "1. robar el monedero" << endl;
        cout << "2. avisarle" << endl;
        cout << "3. seguir como si nada" << endl;
        cout << "4. pensarlo" << endl;
        cout << "5. Presion si quieres dejar de jugar" << endl;
        cout << "\nElige una opción: ";
        cin>>opcion;
        if (opcion < 1 || opcion > 5){
            cout<<"ingresa un numero del 1 al 5"<<endl;
        }
        switch(opcion){
            case 1:
            cout<<"felicidades adrentro habia $50 ahora ya tienes dienero"<<endl;
            dinero += 50;
            cout<<"fueron añadidos 50 pesos a tu economia"<<endl;
           
            while(true){
                cout<< "acabas de entrar a tu clase de algebra y la profesora les dice que tiene hambre, así que les da la clase, ¿a donde queires ir ahora?";
                cout << "\n--- Economía ---" << endl;
                cout << "Dinero: " << dinero << endl; 
                cout << "\n--- Menú de Acciones ---" << endl;
                cout << "1. ir con tus amigos al billar" << endl;
                cout << "2. ir a comer algo" << endl;
                cout << "3. esperar en el salon a la siguiente clase " << endl;
                cout << "4. pensarlo" << endl;
                cout << "5. Presion si quieres dejar de jugar" << endl;
                cout << "\nElige una opción: ";
                cin>>opcion;
                if (opcion < 1 || opcion > 5){
                    cout<<"ingresa un numero del 1 al 5"<<endl;
                }
            }

            

        }
    }
   
    return 0;
}
    