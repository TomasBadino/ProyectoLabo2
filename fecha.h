#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED

class fecha{
    private:
    int dia, mes, anio;

    public:

        void cargarF(){
            int _dia,_mes,_anio;
            cout<<"Ingrese el Anio"<<endl;
            cin>>_anio;
            setAnio(_anio);
            cout<<"Ingrese el Mes"<<endl;
            cin>>_mes;
            setMes(_mes);
            cout<<"Ingrese el Dia"<<endl;
            cin>>_dia;
            setDia(_dia,mes);
            system("cls");
        }

        void setDia(int d,int m){
            bool dError=true;
            while(dError){
                if (m==2 && d>29){
                    cout<<"Dia no valido para Febrero, ingrese de nuevo el dia"<<endl;
                    cin>>d;
                }else if((m==4 || m==6 || m==9 || m==11) && d>31){
                    cout<<"Dia no valido, ingrese de nuevo el dia menor o igual a 31"<<endl;
                    cin>>d;
                }else if((m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) && d>30){
                    cout<<"Dia no valido, ingrese de nuevo el dia menor o igual a 30"<<endl;
                    cin>>d;
                }else{
                    dError = false;
                }
                system("cls");
            }
            dia = d;

        }

        void setMes(int m){
            while(m<1 || m>12){
                cout<<"Mes no valido, ingrese de nuevo el mes"<<endl;
                cin>>m;
                system("cls");
            }
            mes = m;

        }

        void setAnio(int a){
            while(a<1920 || a>2300){
                cout<<"Anio no valido, ingrese de nuevo el anio"<<endl;
                cin>>a;
                system("cls");
            }
            anio = a;

        }

        void mostrarF(){
        cout<<"Dia "<<dia<<endl;
        cout<<"Mes "<<mes<<endl;
        cout<<"Anio "<<anio<<endl;
        system("pause");
        system("cls");
        }
};

#endif // FECHA_H_INCLUDED
