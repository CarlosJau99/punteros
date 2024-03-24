#include<iostream>
using namespace std;
main (){
	int total = 0,*p_notas;
	p_notas = new int[total];
	char res;
	
	do{
		cout<<"Ingrese notas"<<total<<":";
		cin>>p_notas[total];
		total++;
		cout<<"¿Desea ingresar otro valor? (s/n):";
		cin>>res;
		
	}while(res=='s'|| res=='s');
	
cout<<"--------Mostrar---Notas-----"<<endl;
for (int i=0;i<total;i++){
	cout<<"nota ("<<i<<"):"<<*p_notas<<endl;
}	
	delete[]p_notas;
	
	
	
	system("pause");
}

