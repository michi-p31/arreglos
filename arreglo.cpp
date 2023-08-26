#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	int lista[]={1,3,5,7,9,11,13,15,17,19,21,23,25,27,29};
	int inf=0;
	int sup,mitad,dato;
	bool band=false;
	sup=(sizeof(lista)/sizeof(*lista));
	mitad=(inf+sup)/2;
	cout<<"ingrese el valor impar a consultar: ";
	cin>>dato;
	while(inf<=sup){
		if(lista[mitad]==dato){
			band=true;
			break;
		}
		if(lista[mitad]<dato){
			inf=mitad+1;
		}else{
			sup=mitad-1;
		}
		mitad=(inf+sup)/2;
	}
	
	if(band==true){
		cout<<"El valor "<<dato<<" Se encontro en la posicion "<<mitad<<endl;
	}else{
		
		cout<<"El valor "<<dato<<" NO encontro en la posicion ";
	}
	system("pause");
	int respuesta;
    cout<<"Desea consultar otro arreglo? \n1.si \n2.no\n ";
	cin>>respuesta;
    
	if (respuesta==1){
    	
    	int lista[]={2,4,6,8,10,12,14,16,18,20,22,24,26,28,30};
	 int inf=0;
	 int sup,mitad,dato;
	 bool band=false;
	 sup=(sizeof(lista)/sizeof(*lista));
	 mitad=(inf+sup)/2;
	 cout<<"ingrese el valor par a consultar: ";
	 cin>>dato;
	 while(inf<=sup){
		if(lista[mitad]==dato){
			band=true;
			break;
		}
		if(lista[mitad]<dato){
			inf=mitad+1;
		}else{
			sup=mitad-1;
		}
		mitad=(inf+sup)/2;
	}
	
	if(band==true){
		cout<<"El valor "<<dato<<" Se encontro en la posicion "<<mitad<<endl;
	}else{
		
		cout<<"El valor "<<dato<<" NO encontro en la posicion ";
	}
	system("pause");	
    	
	}
      cout<<"Desea consultar otro arreglo? \n1.si \n2.no\n ";
	  cin>>respuesta;
	 if (respuesta==1){
    	
    	int lista[]={10,20,30,40,50,60,70,80,90,100,110,120,130,140,150};
	 int inf=0;
	 int sup,mitad,dato;
	 bool band=false;
	 sup=(sizeof(lista)/sizeof(*lista));
	 mitad=(inf+sup)/2;
	 cout<<"ingrese un valor que incremente 10 en 10 empemzando en 10 a consultar: ";
	 cin>>dato;
	 while(inf<=sup){
		if(lista[mitad]==dato){
			band=true;
			break;
		}
		if(lista[mitad]<dato){
			inf=mitad+1;
		}else{
			sup=mitad-1;
		}
		mitad=(inf+sup)/2;
	}
	
	if(band==true){
		cout<<"El valor "<<dato<<" Se encontro en la posicion "<<mitad<<endl;
	}else{
		
		cout<<"El valor "<<dato<<" NO encontro en la posicion ";
	}
	system("pause");	
    	
	}
	 
	 
	 
	 
return 0;
}
