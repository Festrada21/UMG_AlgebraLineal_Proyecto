#include<iostream>
using namespace std;


int main(){
	int opcion;
	do{
		system("cls");
		cout<<"�Que operaci�n desea realizar?"<<endl;
		cout<<"1. Suma de Vectores"<<endl;
		cout<<"2. Resta de Vectores"<<endl;
		cout<<"3. Producto Escalar"<<endl;
		cout<<"4. Producto Cruz"<<endl;
		cout<<"5. Producto Punto"<<endl;
		cout<<"6. Salir del Sistema"<<endl;
		cin>>opcion;	
	
		if(opcion == 1){
			cout<<"-- Suma de Vectores --"<<endl;
			//Entradas
			//Valores para el vector A
			int a1, a2, b1, b2;
			cout<<"Ingrese el valor del vector A1: "<<endl;
			cin>>a1;
			cout<<"Ingrese el valor del vector A2: "<<endl;
			cin>>a2;
		
			//Valores para el vector B
			cout<<endl;
			cout<<"Ingrese el valor del vector B1: "<<endl;
			cin>>b1;
			cout<<"Ingrese el valor del vector B2: "<<endl;
			cin>>b2;
		
			//Proceso
			int suma_col1 = ((a1)+(b1));
			int suma_col2 = ((a2)+(b2));
		
			//Salida
			cout<<endl<<endl;
			cout<<"Vector A = " <<" ( "<< a1 << " , " << a2 << " ) "<<endl;
			cout<<"Vector B = " <<" ( "<< b1 << " , " << b2 << " ) "<<endl;
			cout<<"El suma de los vectores A+B es = " <<" ( " << suma_col1 << " , "	 << suma_col2 << " ) ";	
		}
		
		else if(opcion == 2){
			
			cout<<"-- Resta de Vectores --"<<endl;
			//Entradas
			//Valores para el vector A
			int a1, a2, b1, b2;
			cout<<"Ingrese el valor del vector A1: "<<endl;
			cin>>a1;
			cout<<"Ingrese el valor del vector A2: "<<endl;
			cin>>a2;
		
			//Valores para el vector B
			cout<<endl;
			cout<<"Ingrese el valor del vector B1: "<<endl;
			cin>>b1;
			cout<<"Ingrese el valor del vector B2: "<<endl;
			cin>>b2;
		
			//Proceso
			int resta_col1 = ((a1)-(b1));
			int resta_col2 = ((a2)-(b2));
		
			//Salida
			cout<<endl<<endl;
			cout<<"Vector A = " <<" ( "<< a1 << " , " << a2 << " ) "<<endl;
			cout<<"Vector B = " <<" ( "<< b1 << " , " << b2 << " ) "<<endl;
			cout<<"El resta de los vectores A-B es = " <<" ( " << resta_col1 << " , "	 << resta_col2 << " ) ";	
		}
		
		else if(opcion == 3){
			
			cout<<"-- Producto Escalar --"<<endl;
			//Entradas
			//Valor de k
			int k;
			cout<<"Ingrese el valor de k"<<endl;
			cin>>k;
			
			//Valores para el vector V
			int v1, v2;
			cout<<"Ingrese el valor del vector V1: "<<endl;
			cin>>v1;
			cout<<"Ingrese el valor del vector V2: "<<endl;
			cin>>v2;
			
			//Proceso
			int multi_col1 = ((k)*(v1));
			int multi_col2 = ((k)*(v2));
			
			//Salida
			cout<<endl<<endl;
			cout<<"Vector V = " <<" ( "<< v1 << " , " << v2 << " ) "<<endl;
			cout<<"El producto escalar del vector Vk es = " <<" ( " << multi_col1 << " , "	 << multi_col2 << " ) ";
			
		}
		
		else if(opcion == 4){
			cout<<"Producto Cruz en R2/1 o R3/2?"<<endl;
			int pc;
			cin>>pc;
			switch(pc){
				case 1:
				
					cout<<"-- Producto Cruz en R2 --"<<endl;
					//Entradas
					//Valores para el vector A
					int a1, a2, a3, b1, b2, b3;
					cout<<"Ingrese el valor del vector A1: "<<endl;
					cin>>a1;
					cout<<"Ingrese el valor del vector A2: "<<endl;
					cin>>a2;
		
					//Valores para el vector B
					cout<<endl;
					cout<<"Ingrese el valor del vector B1: "<<endl;
					cin>>b1;
					cout<<"Ingrese el valor del vector B2: "<<endl;
					cin>>b2;
		
					//Proceso:Paso 1, Ordenar entre parentesis
					cout<<endl<<endl;
					cout<<"AxB = ["<<" ( "<<a1<<" )"<<" ( "<<b2<<" )"<<" - "<<" ( "<<a2<<" )"<<" ( "<<b1<<" )"<<" ]"<<endl;
					cout<<"AxB = ["<<" ( "<<a1*b2<<" )"<<" - "<<"( "<<a2*b1<<" )"<<" ]"<<endl;
					//Salida
					cout<<"AxB = "<<(a1*b2)-(a2*b1)<<" K"<<endl;
					break;
				
				case 2:
				
					cout<<"-- Producto Cruz en R3 --"<<endl;
					//Entradas
					//Valores para el vector A
					//int a1, a2, a3, b1, b2, b3;
					cout<<"Ingrese el valor del vector A1: "<<endl;
					cin>>a1;
					cout<<"Ingrese el valor del vector A2: "<<endl;
					cin>>a2;
					cout<<"Ingrese el valor del vector A3: "<<endl;
					cin>>a3;
								
					//Valores para el vector B
					cout<<endl;
					cout<<"Ingrese el valor del vector B1: "<<endl;
					cin>>b1;
					cout<<"Ingrese el valor del vector B2: "<<endl;
					cin>>b2;
					cout<<"Ingrese el valor del vector B3: "<<endl;
					cin>>b3;

					//Muestra valores del Vector A
					cout<<"Vector A = "<<a1<<"i " <<a2<<"j " <<a3<<"k"<<endl;
			
					//Muestra valores del Vector B
					cout<<"Vector B = "<<b1<<"i " <<b2<<"j " <<b3<<"k"<<endl;
			
					//PROCESO: Primer paso: Ordenar por i, j, k
					cout<<endl<<endl;
					cout<<"AxB = " "| +i"<<" | -j"<<" | +k"<<endl;
					cout<<"     "<<" |  "<<a1<<" |  "<<a2<<" | "<<a3<<endl;
					cout<<"     "<<" |  "<<b1<<" |  "<<b2<<" | "<<b3<<endl;
					//Segundo paso: ordenar por dobles datos
					cout<<endl<<endl;
					cout<<"AxB ="<<" |   +i "<<"  |   -j "<<"  |   +k"<<endl;
					cout<<"     "<<" |  "<<a2<<"   "<<a3<<" |  "<<a1<<"   "<<a3<<" |  "<<a1<<"   "<<a2<<endl;
					cout<<"     "<<" |  "<<b2<<"   "<<b3<<" |  "<<b1<<"   "<<b3<<" |  "<<b1<<"   "<<b2<<endl;
					//Tercer paso: formar ecuacion
					cout<<endl<<endl;
					cout<<"AxB ="<<" ["<<"( "<<"("<<a2<<")"<<"("<<b3<<")"<<" - "<<"("<<a3<<")"<<"("<<b2<<")"<<" )"<<" i"<<" -"<<" ("<<" ("<<a1<<")"<<" ("<<b3<<")"<<" - "<<"("<<a3<<")"<<" ("<<b1<<")"<<" )"<<" j"<<" +"<<" ("<<" ("<<a1<<")"<<" ("<<b2<<")"<<" - "<<"("<<a2<<")"<<" ("<<b1<<")"<<" )"<<" k"<<" ]"<<endl;
					cout<<endl<<endl;
					cout<<"    = ["<<" + ( "<<a2*b3<<" )"<<" - "<<" ( "<<a3*b2<<" )"<< " i"<<" - "<<"( "<<a1*b3<<" )"<<" - "<<" ( "<<a3*b1<<" )"<< " j"<<" + "<<"( "<<a1*b2<<" )"<<" - "<<" ( "<<a2*b1<<" )"<< " k"<<" ]";
					//Cuarto paso: Resultado final
					cout<<endl<<endl;
					cout<<" AxB = "<<+(a2*b3)-(a3*b2)<<"i "<<-(a1*b3)-(a3*b1)<<"j "<<+(a1*b2)-(a2*b1)<<"k";
					break;
					
				default:
					cout<<"Opcion invalida"<<endl;
					
			}			
			
		}
		
		else if(opcion == 5){
			
			cout<<"�Producto Punto en R2/1 o R3/2?"<<endl;
			int pp;
			cin>>pp;
			switch(pp){
				case 1:
				
					cout<<"-- Producto Punto en R2 --"<<endl;
					//Entradas
					//Valores para el vector A
					int a1, a2, a3, b1, b2, b3, c1, c2, c3;
					cout<<"Ingrese el valor del vector A1: "<<endl;
					cin>>a1;
					cout<<"Ingrese el valor del vector A2: "<<endl;
					cin>>a2;
		
					//Valores para el vector B
					cout<<endl;
					cout<<"Ingrese el valor del vector B1: "<<endl;
					cin>>b1;
					cout<<"Ingrese el valor del vector B2: "<<endl;
					cin>>b2;
		
					//Proceso:Paso 1, Ordenar entre parentesis
					cout<<endl<<endl;
					cout<<"AxB = "<<" ( "<<a1<<" )"<<" . "<<"( "<<b1<<" )"<<" + "<<" ( "<<a2<<" )"<<" . "<<"( "<<b2<<" )"<<endl;
					cout<<"AxB = "<<" ( "<<a1*b1<<" )"<<" + "<<"( "<<a2*b2<<" )"<<endl;
					//Salida
					cout<<"AxB = "<<(a1*b1)+(a2*b2)<<" K"<<endl;
					break;
				
				case 2:
				
					cout<<"-- Producto Punto en R3 --"<<endl;
					//Entradas
					//Valores para el vector A
					//int a1, a2, a3, b1, b2, b3, c1, c2, c3;
					cout<<"Ingrese el valor del vector A1: "<<endl;
					cin>>a1;
					cout<<"Ingrese el valor del vector A2: "<<endl;
					cin>>a2;
					cout<<"Ingrese el valor del vector A3: "<<endl;
					cin>>a3;
								
					//Valores para el vector B
					cout<<endl;
					cout<<"Ingrese el valor del vector B1: "<<endl;
					cin>>b1;
					cout<<"Ingrese el valor del vector B2: "<<endl;
					cin>>b2;
					cout<<"Ingrese el valor del vector B3: "<<endl;
					cin>>b3;
			
					//Valores para el vector C
					cout<<endl;
					cout<<"Ingrese el valor del vector C1: "<<endl;
					cin>>c1;
					cout<<"Ingrese el valor del vector C2: "<<endl;
					cin>>c2;
					cout<<"Ingrese el valor del vector C3: "<<endl;
					cin>>c3;
		
					//Proceso:Paso 1, Ordenar filas
					cout<<endl<<endl;
					cout<<"| "<<a1<<"  "<<a2<<"  "<<a3<<" |"<<endl;
					cout<<"| "<<b1<<"  "<<b2<<"  "<<b3<<" |"<<endl;
					cout<<"| "<<c1<<"  "<<c2<<"  "<<c3<<" |"<<endl;
					cout<<"| "<<a1<<"  "<<a2<<"  "<<a3<<" |"<<endl;
					cout<<"| "<<b1<<"  "<<b2<<"  "<<b3<<" |"<<endl;
					//Paso 2, ordenar ecuacion
					cout<<endl<<endl;
					cout<<"( "<<a1*b2*c3<<" "<<b1*c2*a3<<" "<<c1*a2*b3<<" )"<<" - "<<"( "<<a3*b2*c1<<" "<<b3*c2*a1<<" "<<c3*a2*b1<<" )"<<endl;
					cout<<"( "<<(a1*b2*c3)<<" "<<(b1*c2*a3)<<" "<<(c1*a2*b3)<<" )"<<" - "<<"( "<<(a3*b2*c1)<<" "<<(b3*c2*a1)<<" "<<(c3*a2*b1)<<" )"<<endl;
					int l1, l2, l3, r1, r2, r3;
					/*l1 = a1*b2*c3;
					l2 = b1*c2*a3;
					l3 = c1*a2*b3;
					r1 = a3*b2*c1;
					r2 = b3*c2*a1;
					r3 = c3*a2*b1;
					cout<<(l1 l2 l3)-(r1 r2 r3)<<" k";*/
					
					break;
					
				default:
					cout<<"Opcion invalida"<<endl;
			}					
		}else if(opcion == 6){
            cout<<"Saliendo del programa. �Hasta Pronto!"<<endl;
        } else {
            cout<<"Opcion no valida. Por favor, elija una opci�n valida."<<endl;
        }
        
    system("pause");    
		
	} while(opcion != 6);
	
	return 0;
	
}
