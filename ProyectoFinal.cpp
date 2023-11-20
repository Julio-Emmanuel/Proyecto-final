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
                cout<<"le avisaste a la chica que se le cayó su monedero y ella está muy agradecida contigo"<<endl<<"felicidades ahora tienes novia y parece que son tal para cual"<<endl;
                break;
            case 3:
    
                cout<<"pobre chica, no te hubiera costado nada avisarle, sigues caminando";
                break;

    
            
        }         

        
            
            

                

        
        do{//desicion 2
            cout<< "acabas de entrar a tu clase de algebra y la profesora les dice que tiene hambre, así que les da la clase, ¿a donde queires ir ahora?";
            cout << "\n--- Economía ---" << endl;
            cout << "Dinero: " << dinero << endl; 
            cout << "\n--- Menú de Interacción ---" << endl;
            cout << "1. ir con tus amigos al billar -40 pesos" << endl;
            cout << "2. ir a comer algo -50 pesos" << endl;
            cout << "3. salir a dar una vuelta por la fes " << endl;
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
            if (opcion == 2)
            {
               if (dinero < 50)
               {
                    cout<<"no tienes suficiente dinero para comprar comida escoge otra opción"<<endl;
                    opcion = 9;
               }
               
            }
            


        }while(opcion<1||opcion>3);    
        switch (opcion)
        {
        case 1:
            cout<<"fuiste con tus amigos al billar y te divertiste mucho definitivamente esto es algo que extrañaras del semestre, ojalá la vida fuera así siempre"<<endl;
            dinero -= 40;
            break;
        case 2:
            cout<<"que bueno que fuiste a comer algo, ya tenias mucha hambre seguro que así resolveras mejor tu proximo examen"<<endl;
            dinero -= 50;
            break;
        case 3:
            cout<<"tienes hambre y estas aburrido, tal vez pudiste invertir mejor tu tiempo"<<endl;
            break;
            
        }
        do{//desicion 3
            cout<<" vas caminando en la explanada de la fes y tu amigo Emmanuel te pide ayuda para estudiar para uno de sus examenes"<<endl;
            cout << "\n--- Economía ---" << endl;
            cout << "Dinero: " << dinero << endl; 
            cout << "\n--- Menú de Interacción ---" << endl;
            cout << "1. ayudarlo" << endl;
            cout << "2. " << endl;
            cout << "3. ignorarlo " << endl;
            cout << "\nElige una opción: ";
        }while(opcion<1||opcion>3);
        switch (opcion)
        {
        case 1:
            cout<<"tu y tu amigo emmanuel estudiaron mucho, seguro los dos pasaran sus examenes y siguen siendo muy buenos amigos"<<endl;
        
            break;
        

        }
        do{//decision 4

        
            cout<<"ya es hora del examen final con el profesor Jorge Candelario va a estar difisilisimo, preparate"<<endl;
         cout<<"¡oh no! el examen es programr toda la base de datos de la nasa en una cuartilla ¿qué vas a hacer?"<<endl;
            cout << "\n--- Economía ---" << endl;
            cout << "Dinero: " << dinero << endl; 
            cout << "\n--- Menú de Interacción ---" << endl;
            cout << "1. contestarlo " << endl;
            cout << "2. copiarle a Emmanuel que está al lado tuyo" << endl;
            cout << "3. " << endl;
            cout << "\nElige una opción: ";
            if (opcion < 1 || opcion > 3){
                cout<<"ingresa un numero del 1 al 3"<<endl;
            }
        }while(opcion<1||opcion>3);
        switch (opcion)
        {
        case 1:
            cout<<"lo hiciste muy bien el profesor candelario está orgulloso de ti y te invito a comer una picza otro día bien hecho"<<endl;
            break;
        
        default:
            break;
        }

       
        
            
    }
    return 0;
}
    