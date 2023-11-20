#include <iostream>
using namespace std;

int main() {
    int opcion;
    int dinero = 0; //variable para el dinero del usuario
    char eleccion;

    cout<<"bienvenido a mi juego de decisiones en c++"<<endl;
    cout << "\n--- Menú Principal ---" << endl;
    cout << "1. iniciar a jugar" << endl;
    cout << "2. dinero infinito" << endl;
    cout << "3. easter egg" << endl;
    cout << "4. ir al final" << endl;
    cout << "5. cerrar el juego" << endl;
    cout << "\nElige una opción: ";
    cin>>opcion;
    if (opcion == 2)
    {
        dinero = 9999;
        cout<<"felicidades ahora tienes dinero infinito, ahora puedes comenzar a jugar"<<endl;
        opcion = 1;
    }
    
    switch(opcion){
        case 1:

    

        do{//primera decision
            cout << "estamos en fes aragón estas a una semana de terminar el semestre y tienes muchos trabajos, examenes y peroyectos pesados." << endl<< "estas llegando a tu escuela y ves que se le cae el monedero a una persona delante tuyo."<< endl<< "¿qué quieres hacer?"<<endl;
            cout << "\n--- Economía ---" << endl;
            cout << "Dinero: " << dinero << endl; 
            cout << "\n--- Menú de Interaccíon ---" << endl;
            cout << "1. robar el monedero" << endl;
            cout << "2. avisarle" << endl;
            cout << "3. seguir como si nada" << endl;
            cout << "\nElige una opción: ";
            cin>>opcion;
            if (opcion < 1 || opcion > 3){
                cout<<"ingresa un numero del 1 al 3"<<endl;
            }
        }while(opcion<1||opcion>3);
        switch(opcion){
            case 1:
            cout<<"felicidades adrentro habia $50 ahora ya tienes dienero"<<endl;
            dinero += 50;
            cout<<"fueron añadidos 50 pesos a tu economia"<<endl;
            break;
            case 2:
            
        }         

        
            
            

                

        
        do{//desicion 2
            cout<< "acabas de entrar a tu clase de algebra y la profesora les dice que tiene hambre, así que les da la clase, ¿a donde queires ir ahora?";
            cout << "\n--- Economía ---" << endl;
            cout << "Dinero: " << dinero << endl; 
            cout << "\n--- Menú de Interacción ---" << endl;
            cout << "1. ir con tus amigos al billar -40 pesos" << endl;
            cout << "2. ir a comer algo -50 pesos" << endl;
            cout << "3.  " << endl;
            cout << "\nElige una opción: ";
            cin>>opcion;
            if (opcion < 1 || opcion > 3){
                cout<<"ingresa un numero del 1 al 3"<<endl;
            }
            if(opcion == 1)
            {
                if (dinero <40)
                {
                    cout<<"no tines dinero para ir al billar"<<endl;
                    opcion=9;
                }
                    
            }

        }while(opcion<1||opcion>3);    
        switch (opcion)
        {
        case 1:
            cout<<"fuiste con tus amigos al billar y te divertiste mucho definitivamente esto es algo que extrañaras del semestre, ojalá la vida fuera así siempre"<<endl;
            dinero -= 40;
            break;
            
        }
        do{//desicion 3
            cout<<"tu amigo Emmanuel te pide ayuda para estudiar para uno de sus examenes"<<endl;
            cout << "\n--- Economía ---" << endl;
            cout << "Dinero: " << dinero << endl; 
            cout << "\n--- Menú de Interacción ---" << endl;
            cout << "1. ayudarlo" << endl;
            cout << "2. " << endl;
            cout << "3. ignorarlo " << endl;
            cout << "\nElige una opción: ";
        }while(opcion<1||opcion>3);

        

       
        
            
    }
    return 0;
}
    