#ifndef MENUS_H_INCLUDED
#define MENUS_H_INCLUDED
int menuPrincipal();
int menuJugadores();
int menuDeportes();
int menuConfiguracion();
int menuEquipos();
int menuTiposDeportes();


int menuPrincipal(){
    int o;
    while (true){
        cout<<"MENU PRINCIPAL"<<endl;
        cout<<"------------------\n"<<endl;
        cout<<"1) MENU JUGADORES "<<endl;
        cout<<"2) MENU DEPORTES "<<endl;
        cout<<"3) MENU EQUIPOS"<<endl;
        cout<<"4) MENU TIPOS DE DEPORTE"<<endl;
        cout<<"5) REPORTES"<<endl;
        cout<<"6) CONFIGURACION"<<endl;
        cout<<"--------------------------------"<<endl;
        cout<<"0) FIN DEL PROGRAMA\n"<<endl;
        cout<<"SELECCIONE UNA DE LAS OPCIONES:\n"<<endl;
        cin>>o;
        system("cls");
        return o;
    }

}

int menuJugadores(){
    int o;
    while(true){
        cout<<"MENU JUGADORES"<<endl;
        cout<<"------------------\n"<<endl;
        cout<<"1) AGREGAR JUGADOR"<<endl;
        cout<<"2) LISTAR JUGADOR POR DNI "<<endl;
        cout<<"3) LISTAR TODOS LOS JUGADORES"<<endl;
        cout<<"4) MODIFICAR INSCRIPCION"<<endl;
        cout<<"5) ELIMINAR JUGADOR"<<endl;
        cout<<"--------------------------------"<<endl;
        cout<<"0) VOLVER AL MENU PRINCIPAL\n"<<endl;
        cin>>o;
        system("cls");
        return o;
   }

}

int menuDeportes(){
    int o;
    while(true){
        cout<<"MENU DEPORTES"<<endl;
        cout<<"------------------\n"<<endl;
        cout<<"1) AGREGAR DEPORTE"<<endl;
        cout<<"2) LISTAR DEPORTE POR ID "<<endl;
        cout<<"3) LISTAR TODO"<<endl;
        cout<<"4) MODIFICAR AÑO DE ORIGEN"<<endl;
        cout<<"5) ELIMINAR REGISTRO"<<endl;
        cout<<"--------------------------------"<<endl;
        cout<<"0) VOLVER AL MENU PRINCIPAL\n"<<endl;
        cin>>o;
        system("cls");
        return o;
   }
}

int menuConfiguracion(){
    int o;
    while(true){
        cout<<"MENU DEPORTES"<<endl;
        cout<<"------------------\n"<<endl;
        cout<<"1) COPIA DE SEGURIDAD DEL ARCHIVO DE JUGADORES"<<endl;
        cout<<"2) COPIA DE SEGURIDAD DEL ARCHIVO DE DEPORTES"<<endl;
        cout<<"3) RESTAURAR EL ARCHIVO DE JUGADORES"<<endl;
        cout<<"4) RESTAURAR EL ARCHIVO DE DEPORTES"<<endl;
        cout<<"5) ESTABLECER DATOS DE INICIO"<<endl;
        cout<<"--------------------------------"<<endl;
        cout<<"0) VOLVER AL MENU PRINCIPAL\n"<<endl;
        cin>>o;
        system("cls");
        return o;
   }
}

int menuEquipos(){
    int o;
    while(true){
        cout<<"MENU EQUIPOS"<<endl;
        cout<<"------------------\n"<<endl;
        cout<<"1) AGREGAR EQUIPO"<<endl;
        cout<<"2) LISTAR EQUIPO POR ID "<<endl;
        cout<<"3) LISTAR TODO"<<endl;
        cout<<"4) MODIFICAR NOMBRE"<<endl;
        cout<<"5) ELIMINAR REGISTRO"<<endl;
        cout<<"--------------------------------"<<endl;
        cout<<"0) VOLVER AL MENU PRINCIPAL\n"<<endl;
        cin>>o;
        system("cls");
        return o;
   }
}

int menuTiposDeportes(){
    int o;
    while(true){
        cout<<"MENU TIPO DE DEPORTE"<<endl;
        cout<<"------------------\n"<<endl;
        cout<<"1) AGREGAR TIPO"<<endl;
        cout<<"2) LISTAR TIPO POR ID "<<endl;
        cout<<"3) LISTAR TODO"<<endl;
        cout<<"4) MODIFICAR NIVEL DE DIFICULTAD"<<endl;
        cout<<"5) ELIMINAR REGISTRO"<<endl;
        cout<<"--------------------------------"<<endl;
        cout<<"0) VOLVER AL MENU PRINCIPAL\n"<<endl;
        cin>>o;
        system("cls");
        return o;
   }
}

#endif // MENUS_H_INCLUDED
