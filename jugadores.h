#ifndef JUGADORES_H_INCLUDED
#define JUGADORES_H_INCLUDED

class jugador {
    private:
        int dni, claustro, idDepJu, numEquipo;
        char nombre[30], apellido[30], email[30], telefono[30];
        fecha fInscripcion;
        float matricula;
        bool estado;

    public:

        void agregarJu(){
            int klaus,_matri,_dni;
            cout<<"Ingrese el DNI del jugador"<<endl;
            cin>>_dni;
            cout<<"Ingrese el Nombre del jugador"<<endl;
            cin>>nombre;
            cout<<"Ingrese el Apellido del jugador"<<endl;
            cin>>apellido;
            cout<<"Ingrese el Email del jugador"<<endl;
            cin>>email;
            cout<<"Ingrese el Telefono del jugador"<<endl;
            cin>>telefono;
            system("cls");
            cout<<"Ingrese el Claustro del jugador"<<endl;
            cin>>klaus;
            setClausJu(klaus);
            cout<<"Ingrese el Deporte del jugador"<<endl;
            cin>>idDepJu;
            cout<<"Ingrese el Nº de equipo del jugador"<<endl;
            cin>>numEquipo;
            cout<<"Ingrese la fecha de inscripcion del jugador"<<endl;
            fInscripcion.cargarF();
            cout<<"Ingrese el valor de la matricula del jugador o 0"<<endl;
            cin>>_matri;
            setMatriJu(_matri);
            cout<<"Ingrese el estado del jugador"<<endl;
            cout<<"1 = activo; 0 = inactivo"<<endl;
            cin>>estado;
        }

        void listarJuDni(int _dni){
        }

        void listarJuTodos(){
        }

        void modFJu(int _dni, fecha newF){
        }

        void bajaJu(int _dni){
        }

        void setDniJu(){
            ///Que no se repita
        }

        void setClausJu(int klaus){
            while (klaus<1 || klaus > 4){
                cout<<"Claustro invalido, ingrese de nuevo"<<endl;
                cin>>klaus;
                system("cls");
            }
            claustro=klaus;
        }

        void setDepJu(){
            ///Que exista
        }

        void setMatriJu(int matri){
            while (matri<0){
                cout<<"Valor de matricula invalido, ingrese de nuevo"<<endl;
                cin>>matri;
                system("cls");
            }
            matricula=matri;
        }
};

#endif // JUGADORES_H_INCLUDED
