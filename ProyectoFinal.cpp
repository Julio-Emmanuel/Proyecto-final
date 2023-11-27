#include <iostream>
using namespace std;

int main() {
    int opcion;
    int dinero = 0; //variable para el dinero del usuario
    int novia = 0; //variable para final alternativo con novia
    cout<<"bienvenido a mi juego de decisiones en c++"<<endl;
    
        do{
            cout<<"Ya casi es hora de que vayas a la escuela, ¿qué deseas hacer?"<<endl;
            cout << "\n--- Menú Principal ---" << endl;
            cout << "1. ir a la escuela" << endl;
            cout << "2. tomar dinero y luego ir a la escuela" << endl;
            cout << "3. Cambiarte de ropa" << endl;
            cout << "4. Esperar un rato más" << endl;
            cout << "5. cerrar el juego" << endl;
            cout << "\nElige una opción: ";
            cin>>opcion;
        if (opcion == 5)
        {
            return 0;
        }
        if(opcion == 4)
        {
            cout<<"ya esperaste un poco, ahora ¿qué quieres hacer?"<<endl;
            opcion = 9;
        }
        if(opcion == 3)
        {
            cout<<"ya te cambiaste de ropa, ahora ¿qué quieres hacer?"<<endl;
            opcion = 9;
        }
            if (opcion == 2)
            {
                dinero = 9999;
                cout<<"felicidades ahora tienes dinero infinito, ahora puedes comenzar a jugar"<<endl;
                opcion = 1;
            }
            }while(opcion<1 || opcion >5);   
           
            if(opcion==1){
                

            

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
            }    
                switch(opcion){
                    case 1:
                        cout<<"felicidades adrentro habia $50 ahora ya tienes dienero"<<endl;
                        dinero += 50;
                        cout<<"fueron añadidos 50 pesos a tu economia"<<endl;
                        break;
                    case 2:
                        cout<<"le avisaste a la chica que se le cayó su monedero y ella está muy agradecida contigo"<<endl<<"felicidades ahora tienes novia y parece que son tal para cual"<<endl;
                        novia = 1;
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
                    cout << "2. lo siento pero prefiero estudiar solo " << endl;
                    cout << "3. ignorarlo " << endl;
                    cout << "\nElige una opción: ";
                    cin>>opcion;
                }while(opcion<1||opcion>3);
                switch (opcion)
                {
                case 1:
                    cout<<"tu y tu amigo emmanuel estudiaron mucho, seguro los dos pasaran sus examenes y siguen siendo muy buenos amigos"<<endl;
                    break;
                case 2:
                    cout<<"tu amigo te dice que no hay problema el va a la biblioteca a estudiar"<<endl;
                    break;
                case 3:
                cout<<"qué te pasa, se supone que eran buenos amigos, ¿por qué fuiste tan grosero?"<<endl;
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
                    cout << "3. dejar dinero en el examen -$5000" << endl;
                    cout << "\nElige una opción: ";
                    cin>>opcion;
                    if (opcion < 1 || opcion > 3){
                        cout<<"ingresa un numero del 1 al 3"<<endl;
                    }
                }while(opcion<1||opcion>3);
                switch (opcion)
                {
                case 1:
                    cout<<"lo hiciste muy bien el profesor candelario está orgulloso de ti y te invito a comer una picza otro día bien hecho"<<endl;
                    break;
                case 2: 
                    cout<<"el profesor que descubrió copiando, tendrás que hacer el extra, a la proxima no hagas trampa"<<endl;
                    break;
                case 3:
                    cout<<"sacaste el mejor promedio de tu generación, nadie mas pudo alcanzar tu nota, todos se preguntan ¿como lo habrás hecho? "<<endl;
                    dinero -= 5000;
                    break;

                }

                do{//desicion 5 final
                    cout<<"tu ultimo dia de clases terminó, ¿cómo terminaras este hermoso semestre?"<<endl;
                    cout << "\n--- Economía ---" << endl;
                    cout << "Dinero: " << dinero << endl; 
                    cout << "\n--- Menú de Interacción ---" << endl;
                    cout << "1. regresar a casa tranquilo " << endl;
                    cout << "2. salir con tu novia" << endl;
                    cout << "3. salir de fiesta con tus amigos" << endl;
                    cout << "\nElige una opción: ";
                    cin>>opcion;
                    if (opcion < 1 || opcion > 3){
                        cout<<"ingresa un numero del 1 al 3"<<endl;
                    }
                    if(opcion == 2)
                    {
                        if (novia == 0)
                        {
                            cout<<" no tienes novia bro, eres ingeniero en computación, buen inteto"<<endl;
                            opcion = 9;
                        }
                        
                    }
                }while(opcion<1||opcion>3);
                switch (opcion)
                {
                case 1:
                    cout<<"regresas a casa tranquilo y nostalgico, vas a extrañar todo lo que viviste en tu carrera, fue una buena etapa"<<endl<<"GOOD ENDING, CRONGRATULATIONS" <<endl;
                    break;
                case 2:
                    if(novia == 1)
                    {
                        cout<<"tu y tu novia son muy felices que bueno que la vida los juntó,son tal para cual"<<endl;

                    }
                    break;
                case 3:
                    cout<<"pero que buen día, algunos de tus amigos reprobaron otros panzaron, pero este momento vale la pena para ustedes, que buena fiesta"<<endl;

                
                }
                cout<<endl<<endl<<"Este es el final del juego, ojalá te haya gustado"<<endl;
                  
                  
    return 0;
}
    