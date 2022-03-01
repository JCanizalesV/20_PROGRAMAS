/*
MENU DE TAREAS (20 PROGRAMAS EN C++)
*/

#include<iostream>
#include<cstdlib>
#include<cstring>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include <cmath>
#include<string.h>



using namespace std;

void gotoxy(short x, short y) {
COORD pos = {x, y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main ()
{
	
	int menu;
	
	while ( menu != 21)
	{
		
			cout << "Ejercicio numero 1" << endl; 
			cout << "Ejercicio numero 2" << endl; 
			cout << "Ejercicio numero 3" << endl; 
			cout << "Ejercicio numero 4" << endl;
			cout << "Ejercicio numero 5" << endl; 
			cout << "Ejercicio numero 6" << endl; 
			cout << "Ejercicio numero 7" << endl; 
			cout << "Ejercicio numero 8" << endl; 
			cout << "Ejercicio numero 9" << endl; 
			cout << "Ejercicio numero 10" << endl; 
			cout << "Ejercicio numero 11" << endl; 
 			cout << "Ejercicio numero 12" << endl; 
			cout << "Ejercicio numero 13" << endl; 
			cout << "Ejercicio numero 14" << endl; 
			cout << "Ejercicio numero 15" << endl; 
			cout << "Ejercicio numero 16" << endl; 
			cout << "Ejercicio numero 17" << endl; 
			cout << "Ejercicio numero 18" << endl;
			cout << "Ejercicio numero 19" << endl; 
			cout << "Ejercicio numero 20" << endl; 

			cout << "\nESCRIBA EL NUMERO 21 PARA SALIR DEL PROGRAMA" << endl;
			cout << "\nESCRIBA EL EJERCICIO QUE DESEA VISUALISAR:     ";
			cin >> menu;
			
			switch (menu)
			{
				
				case 1:
					/*
					Ejercicio #1
					Suma, Resta, Multiplicación y División de dos números
					*/
					
					system ("cls");
					int numero1,numero2, SUM, RES, MULTI, DIV;
	
					cout<< "ESCRIBA EL PRIMER NUMERO PARA CALCULAR SU RESULTADO:     "; cin>>numero1;
					cout<< "ESCRIBA EL SEGUNDO NUMERO PARA CALCULAR SU RESULTADO:    "; cin>>numero2;
					
					SUM = numero1 + numero2;
					RES= numero1 - numero2;
					MULTI= numero1 * numero2;
					DIV = numero1 / numero2;
					
					cout <<"\nEL RESULTADO DE LA SUMA ES:             " <<SUM;
					cout <<"\nEL RESULTADO DE LA RESTA ES:            " <<RES;
					cout <<"\nEL RESULTADO DE LA MULTIPLICACION ES:   " <<MULTI;
					cout <<"\nEL RESULTADO DE LA DIVISION ES:         " <<DIV<<"\n";
					
					cout << endl;
					system ("pause");
					system ("cls");					
				break;
				
				
				
				case 2:
					
					/*
					Ejercicio #2
					Determinar si un número es par o impar
					*/
					
					system ("cls");
					
					int num, resultado;

					cout<< "INGRESE EL NUMERO      ";	cin>>num;
					
					resultado=num%2;
					
					if(resultado==0){
						cout<<"\nEL NUMERO INGRESADO ES PAR" <<endl;
					}
					else{
						cout<<"\nEL NUMERO INGRESADO ES IMPAR" <<endl;
					}
					
					cout << endl;
					system ("pause");
					system ("cls");
					
				break;
				
								
				case 3:
				
				/*
				Ejercicio #3
				Convertir de kilómetros a millas, metros a pulgadas, de libras a kilos y viceversa
				*/
								
					system ("cls");
					
					int  opcion;
					double kilometros, millas, metros, pulgadas, libras, kilos;
					
					
					while ( opcion != 10 )
					{
						
				
					
					cout <<"ESCOJA LA CONVERSION QUE DESEA REALIZAR \n" <<endl;
					cout <<"1. Convertir kilometros a millas" <<endl;
					cout <<"2. Convertir metros a pulgadas" <<endl;
					cout <<"3. Convertir libras a kilos" <<endl;
					cout <<"4. Convertir millas a kilometros" <<endl;
					cout <<"5. Convertir pulgadas a metros" <<endl;
					cout <<"6. Convertir kilos a libras\n" <<endl;
					cout << "\nESCRIBA LA CONVERSION QUE DESEA REALIZAR:     ";
					cin >> opcion;
					
					
					switch (opcion){
						
						case 1:
							
							system ("cls");
							
							cout <<"\nKILOMETROS A MILLAS \n" <<endl;
							cout <<"Ingresa la cantidad de Kilometros que desea convertir:     "; cin >> kilometros;
							millas = kilometros * 0.621371;
							cout <<"" <<endl;
							cout << kilometros << " kilometros equivalen a " << millas << " millas" << endl;
							
							cout << endl;
							system ("pause");
							system ("cls");	
							
						break;
						
						case 2:
							
							system ("cls");
							
							cout <<"\nMETROS A PULGADAS \n" <<endl;
							cout <<"Ingresa la cantidad de Metros que desea convertir:     "; cin >> metros;
							pulgadas = metros * 39.3701;
							cout <<"" <<endl;
							cout << metros << " metros equivalen a " << pulgadas << " pulgadas" << endl;	
							
							cout << endl;
							system ("pause");
							system ("cls");	
							
						break;	
							
						case 3:
							
							system ("cls");
				
							cout <<"\nLIBRAS A KILOS \n" <<endl;
							cout <<"Ingresa la cantidad de Libras que desea convertir:     "; cin >> libras;
							kilos = libras * 0.453592;
							cout <<"" <<endl;
							cout << libras << " lb equivalen a " << kilos << " kg" <<endl;
										
							cout << endl;
							system ("pause");
							system ("cls");	
						break;			
							
						case 4:
						
							system ("cls");
							
							cout <<"\nMILLAS A KILOMETROS \n" <<endl;
							cout <<"Ingresa la cantidad de Millas que desea convertir:    "; cin >> millas;
							kilometros = millas * 1.60934;
							cout <<"" <<endl;
							cout << millas << " millas equivalen a " << kilometros << " km" <<endl;
							
							cout << endl;
							system ("pause");
							system ("cls");				
						break;	
						
						case 5:
							
							system ("cls");
				
							cout <<"\nPULGADAS A METROS \n" <<endl;
							cout <<"Ingresa la cantidad de Pulgadas que desea convertir:     "; cin >> pulgadas;
							metros = pulgadas * 0.0254;
							cout <<"" <<endl;
							cout << pulgadas << " pulgadas equivalen a " << metros << " metros" << endl;	
							
							cout << endl;
							system ("pause");
							system ("cls");	
						break;		
							
						case 6:
							
							system ("cls");
				
							cout <<"\nKILOS A LIBRAS \n" <<endl;
							cout <<"Ingresa la cantidad de Kilos que desea convertir:     "; cin >> kilos;
							libras = kilos * 2.20462;
							cout <<"" <<endl;
							cout << kilos << " kg equivalen a " << libras << " lb" <<endl;
						
							cout << endl;
							system ("pause");
							system ("cls");	
						break;	
						
						default:
							
							system ("cls");
				
							
							cout <<"\nLA OPCION INGRESADA ES INCORRECTA" <<endl;
							cout << endl;
				
							cout << endl;
							system ("pause");
							system ("cls");	
						break;
					
					}	
					
					cout << endl;
					
					system ("cls");
					
				break;
				
				
				case 4:
					
				/*
				Ejercicio #4
				Determinar si una palabra o un número es palíndromo
				*/				
					system ("cls");
					
						char dato[200],resultado[100];
						cout<<"INGRESE EL NUMERO O PALABRA QUE DESEA EVALUAR:     "<<endl;
						gets(dato);
						
						for(int i = (strlen (dato)-1); i >= 0 ; i--){
					  	resultado [strlen (dato) - 1 - i] = dato [i];
						}
					 	resultado [strlen (dato)] = '\0';
 	
						 if(strcmp (dato,resultado) == 0){
						  cout<<"\nESTE NUMERO O PALABRA ES PALINDROMA";
						  
						 }
						 else{
						  cout<<"\nESTE NUMERO O PALABRA NO ES PALINDROMA";
						 }
							
					cout << endl;
					system ("pause");
					system ("cls");
					
				break; 
			
			
			case 5:
				
					system ("cls");
					
						int numero, unidad, decena, centena, millar;
	
						cout <<"INGRESE EL NUMERO QUE DESEA CONVERTIR:       "; cin >> numero;
						
						cout << "\nEL NUMERO ROMANO ES:     ";
						
						unidad = numero % 10;
						numero /= 10;
						
						decena = numero % 10;
						numero /= 10;
						
						centena = numero % 10;
						numero /= 10;
						
						millar = numero % 10;
						numero /= 10;
						
						
						switch (millar)
						{
							case 1: cout << "M"; break;
							case 2: cout << "MM"; break;
							case 3: cout << "MMM"; break;
						}
						
						switch (centena)
						{
							case 1: cout << "C"; break;
							case 2: cout << "CC"; break;
							case 3: cout << "CCC"; break;
							case 4: cout << "CD"; break;
							case 5: cout << "D"; break;
							case 6: cout << "DC"; break;
							case 7: cout << "DCC"; break;
							case 8: cout << "DCCC"; break;
							case 9: cout << "CM"; break;
						}
						
						switch (decena)
						{
							case 1: cout << "X"; break;
							case 2: cout << "XX"; break;
							case 3: cout << "XXX"; break;
							case 4: cout << "XL"; break;
							case 5: cout << "L"; break;
							case 6: cout << "LX"; break;
							case 7: cout << "LXX"; break;
							case 8: cout << "LXXX"; break;
							case 9: cout << "XC"; break;
						}	
						
						switch (unidad)
						{
							case 1: cout << "I"; break;	
							case 2: cout << "II"; break;
							case 3: cout << "III"; break;
							case 4: cout << "IV"; break;
							case 5: cout << "V"; break;
							case 6: cout << "VI"; break;
							case 7: cout << "VII"; break;
							case 8: cout << "VIII"; break;
							case 9: cout << "IX"; break;
						}
										
					cout << endl;
					system ("pause");
					system ("cls");
					
				break; 
				
				
			case 6:
				
					system ("cls");
					int x;
				    cout <<"INGRESE EL NUMERO A CONVERTIR" <<endl;
				    cin >>x;
									    
					if((x<1)||(x>999)) cout<<"INGRESE UN NUMERO DEL 1 AL 999\n";
					else
 
   				 {
       			 if(x>=900)   {cout<<"NOVECIENTOS " ;x=x-900;}
        
				       else if(x>=800)   {cout<<"OCHOCIENTOS " ;x=x-800;}
				       else if(x>=700)   {cout<<"SETECIENTOS " ;x=x-700;}
				       else if(x>=600)   {cout<<"SEISCIENTOS " ;x=x-600;}
				       else if(x>=500)   {cout<<"QUINIENTOS "  ;x=x-500;}
				       else if(x>=400)   {cout<<"CUATROCIENTOS "   ;x=x-400;}
				       else if(x>=300)   {cout<<"TRESCIENTOS " ;x=x-300;}
				       else if(x>=200)   {cout<<"DOSCIENTOS "  ;x=x-200;}
				       else if(x>100)    {cout<<"CIENTO "  ;x=x-100;}
				       else if(x==100)  {cout<<"CIEN"     ;x=x-100;}
       
   			     if(x>90) {cout<<"NOVENTA Y "   ;x=x-90; }
					            if(x==90)   {cout<<"NOVENTA"  ;x=x-90; }  
					            if(x>80) {cout<<"OCHENTA Y "   ;x=x-80; }
					            if(x==80)   {cout<<"OCHENTA"  ;x=x-80; }
					            if(x>70) {cout<<"SETENTA Y "   ;x=x-70; }
					            if(x==70)   {cout<<"SETENTA"  ;x=x-70; }
					            if(x>60) {cout<<"SESENTA Y "   ;x=x-60; }
					            if(x==60)   {cout<<"SESENTA"  ;x=x-60; }
					            if(x>50) {cout<<"CINCUENTA Y " ;x=x-50; }
					            if(x==50)   {cout<<"CINCUENTA"    ;x=x-50; }
					            if(x>40) {cout<<"CUARENTA Y "  ;x=x-40; }
					            if(x==40)   {cout<<"CUARENTA" ;x=x-40; }
					            if(x>30) {cout<<"TREINTA Y "   ;x=x-30; }
					            if(x==30)   {cout<<"TREINTA"  ;x=x-30; }
					            if(x>20) {cout<<"VEINTI"       ;x=x-20; }
					            if(x==20)   {cout<<"VEINTE"       ;x=x-20; }
					            
					        if(x>=16)    {cout<<"DIECI";x=x-10; }
					       else if(x==15)   {cout<<"QUINCE";x=x-15; }
					       else if(x==14)   {cout<<"CATORCE";x=x-14; }
					       else if(x==13)   {cout<<"TRECE";x=x-13; } 
					       else if(x==12)   {cout<<"DOCE";x=x-12; }
					       else if(x==11)   {cout<<"ONCE";x=x-11; }
					       else if(x==10)   {cout<<"DIEZ";x=x-10; }      
						    if(x==9)    {cout<<"NUEVE";x=x-9;  }
					        if(x==8)    {cout<<"OCHO";x=x-8;  }
					        if(x==7)    {cout<<"SIETE";x=x-7;  }
							if(x==6)    {cout<<"SEIS";x=x-6;  }
					       else if(x==5)    {cout<<"CINCO";x=x-5;  }
					       else if(x==4)    {cout<<"CUATRO";x=x-4;  }
					       else if(x==3)    {cout<<"TRES";x=x-3;  }
					       else if(x==2)    {cout<<"DOS";x=x-2;  }
					       else if(x==1)    {cout<<"UNO";x=x-1;  }
					       }
					    cout<<endl;
					
					cout << endl;
					system ("pause");
					system ("cls");
					
				break; 
			
			case 7:
				
					system ("cls");
					
					
					cout << endl;
					system ("pause");
					system ("cls");
					
				break; 
			
			
			
			case 8:
				
					system ("cls");
					
					int tabla; 
	
					do {
						cout << "ESCRIBA LA TABLA QUE QUIERE VISUALIZAR" <<endl; cin >> tabla;
						cout << endl;
					}while ((tabla < 1) || (tabla > 10000000));
					
					for (int i = 1; i <= 10; i++) {
					
						cout << tabla << " x " << i << " = " << tabla * i << endl;
					}
									
					cout << endl;
					system ("pause");
					system ("cls");
					
				break; 
			
			
				case 9:
				
					system ("cls");
					
					int i, j;
	
					for ( i = 1; i <= 10; i++) 
					
					{
					
					cout << "--------TABLA DEL " <<i;  cout << "--------"<<endl;
					cout << endl;
				
						for (j = 1; j <=10; j++)
						cout << i << " x " << j << " = " << i * j << endl;
						cout << endl;
						
						system ("pause");
						cout << endl;
				
					}
					
					cout << endl;
					system ("pause");
					system ("cls");
				break; 
			
				case 10:
				
					system ("cls");
					
						cout << "FORMA GRAFICA MULTIPLICACION MANUAL" <<endl <<endl;
						
						cout << "          45" <<endl;
						cout << "        x 32" << endl;
						cout << "       -------" << endl;
						cout << "         90" <<endl;
						cout << "        135" <<endl;
						cout << "      -------" << endl;
						cout << "       1440" << endl;
						

					
					cout << endl;
					system ("pause");
					system ("cls");
					
				break; 
			
				case 11:
				
					system ("cls");
					
																					
					cout << endl;
					system ("pause");
					system ("cls");
					
				case 12:
				
					system ("cls");
					
																					
					cout << endl;
					system ("pause");
					system ("cls");
					
				break; 
			
				case 13:
				
					system ("cls");
					
					
						int  op;					
					
					while ( op != 11 )
					{
						
				
					
					cout <<"FIGURAS \n" <<endl;
					cout <<"1. Cuadrado" <<endl;
					cout <<"2. Rectangulo" <<endl;
					cout <<"3. Circulo" <<endl;
					cout <<"4. Triangulo" <<endl;
					cout <<"5. Rombo" <<endl;
					cout <<"6. Corazon\n" <<endl;
					cout << "\nESCRIBA LA FIGURA QUE DESEA VISUALIZAR:     ";
					cin >> op;
					
					
					switch (op){
						
						case 1:
							
							system ("cls");
							
							cout <<" ________________" <<endl;
							cout <<"|                |" <<endl;
							cout <<"|                |" <<endl;
							cout <<"|                |" <<endl;
							cout <<"|                |" <<endl;
							cout <<"|                |" <<endl;
							cout <<"|                |" <<endl;
							cout <<"|________________|" <<endl;

							cout << endl;
							system ("pause");
							system ("cls");	
							
						break;
						
						case 2:
							
							system ("cls");
							
							cout <<" ______________________" <<endl;
							cout <<"|                      |" <<endl;
							cout <<"|                      |" <<endl;
							cout <<"|                      |" <<endl;
							cout <<"|                      |" <<endl;
							cout <<"|                      |" <<endl;
							cout <<"|                      |" <<endl;
							cout <<"|______________________|" <<endl;
							
							cout << endl;
							system ("pause");
							system ("cls");	
							
						break;	
							
						case 3:
							
							system ("cls");

						
							cout << "    .adAHHHAbn." <<endl;
							cout << "   dHHHHHHHHHHHb "   <<endl;                  
							cout << "  dHHHHHHHHHHHHHb "    <<endl;             
							cout << "  HHHHHHHHHHHHHHH  "    <<endl;         
							cout << "  VHHHHHHHHHHHHHP   "  <<endl;          
							cout << "   YHHHHHHHHHHHP    "      <<endl; 
							cout << "     ^YUHHHUP^  "     <<endl;
				
							cout << endl;
							system ("pause");
							system ("cls");	
						break;			
							
						case 4:
						
							system ("cls");
							
							cout << "               *" << endl;
							cout << "              ***" << endl;
							cout << "             *****" << endl;
							cout << "            *******" << endl;
							cout << "           *********" << endl;
							cout << "          ***********" << endl;
							cout << "         *************" << endl;		
							
							cout << endl;
							system ("pause");
							system ("cls");				
						break;	
						
						case 5:
							
							system ("cls");
				
							cout << "               *" << endl;
							cout << "              ***" << endl;
							cout << "             *****" << endl;
							cout << "            *******" << endl;
							cout << "           *********" << endl;
							cout << "          ***********" << endl;
							cout << "         *************" << endl;		
							cout << "          ***********" << endl;
							cout << "           *********" << endl;
							cout << "            *******" << endl;
							cout << "             *****" << endl;
							cout << "              ***" << endl;
							cout << "               *" << endl;

	
							cout << endl;
							system ("pause");
							system ("cls");	
						break;		
							
						case 6:
							
							system ("cls");
				
							cout<<"      ……..@*@*" << endl;
							cout<<"     @*……..@* …………………………@*" << endl;
							cout<<"    @*……………@* ………………@*……..@*" << endl;
							cout<<"   @*……………….@*……….@*……………..@*" << endl;
							cout<<"  @*…………………..@*…@*…………………..@*" << endl;
							cout<<"   @*………………………*……………………...@*" << endl;
							cout<<"    @*……………………………………………..@*" << endl;
							cout<<"     @*………………………………………..@*" << endl;
							cout<<"      @*…………………………………..@*" << endl;
							cout<<"        @*………………………….@*" << endl;
							cout<<"         @*……………………@*" << endl;
							cout<<"          @*…………..@*" << endl;
							cout<<"            @*……@*" << endl;
							cout<<"            *..@*" << endl;
									cout << endl;
							system ("pause");
							system ("cls");	
						break;	
						
					default:
							
						return 0;
						break;
							
					}
			}
					
					cout << endl;
					system ("pause");
					system ("cls");
					
					
					
				case 14:
				
				char op1;
				int xy = 50, yx = 12;
				
				 
					while(op1='e')
					{
						system("cls");
						gotoxy(xy,yx);
						printf(".");
						op1=getch();
						
						switch(op1)
						{
							case 'w': yx--; break;
							case 's': yx++; break;
							case 'a': xy--; break;
							case 'd': xy++; break;
						}
					}
				}
				break; 
				
				
			
				case 15:
				
					system ("cls");
					
																					
					cout << endl;
					system ("pause");
					system ("cls");
					
				break;
				
				
				
				
				case 17:
				
					system ("cls");
					
					 int na, nb, nr, mcd, mcm, auxiliar;
					 
					 cout << "PROGRAMA QUE ENCUENTRA EL MCM Y MCD DE DOS NUMEROS\n" <<endl;
					 
					 do{
					 	
					  cout <<"Escriba el primero numero:     "; cin>> na;
					  cout <<"Escriba el segundo numero:     "; cin>> nb;
					  
					 }while(na<0 && nb<0);
					 
					 mcd=na;
					 auxiliar=nb;
					 
					 do{
					 	
					  nr=mcd % auxiliar;
					  mcd = auxiliar;
					  auxiliar = nr;
					  
					 }while(nr!=0);
					 
					 mcm= na*nb /mcd ;
					 cout<<"El MCD DE LOS NUMEROS INGRESADOS ES:     "<< mcd << endl;
					 cout<<"El MCM DE LOS NUMEROS INGRESADOS ES:     "<< mcm << endl;
																					
					cout << endl;
					system ("pause");
					system ("cls");
					
				break; 
				
				case 18:
				
					system ("cls");
					
							

					int horas,sueldo;
					char letra;
					
					cout<<"CALCULAR SUELDO DE TRABAJADORES\n" << endl;
					cout<<"a. OBREROS" << endl;
					cout<<"b. TRANPORTISTAS" << endl; 
					cout<<"c. CARGUEROS" << endl; 
					
					
					
					cout<<"\n¿CUANTAS HORAS TRABAJO?     "; cin>>horas;
					cout<<"ESCRIBA SU PUESTO             "; cin>>letra;
					
					switch(letra){
					case 'a':
					
					sueldo = horas * 3000/38.5;
					cout<<"EL SUELDO DEl OBRERO ES:      "<<sueldo<<" "<<"QUETZALES";break;
					case 'b':
					
					sueldo = horas * 4000/38.5;
					cout<<"EL SUELDO DEL TRANSPORTISTA ES:      "<<sueldo<<" "<<"QUETZALES";break;
					case 'c':
					
					sueldo = horas * 5000/38.5;
					cout<<"EL SUELDO DE LOS CARGUERO ES:      "<<sueldo<<" "<<"QUETZALES";break;
					
					}			
															
					cout << endl;
					system ("pause");
					system ("cls");
					
				break;
				
							
				case 19:
				
					system ("cls");
					
					
																					
					cout << endl;
					system ("pause");
					system ("cls");
					
				break;
				
					case 20:
				
					system ("cls");
					
					
																					
					cout << endl;
					system ("pause");
					system ("cls");
					
				
				case 16:
				
					system ("cls");
					
					float cateto1,cateto2,hipotenusa=0;
 
					  cout << "Escriba el cateto uno:     "; cin >> cateto1;
					  cout << "Escriba el cateto dos:     "; cin >> cateto2;
					  cout << endl;
				 
					  hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));
				 
					  cout << "LA HIPOTENUSA ES:    " << hipotenusa << endl;
				 																									
					cout << endl;
					system ("pause");
					system ("cls");
					
				break; 
				
				
			
					
			}	
		}
	}

	
	



		

