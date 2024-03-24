#include<iostream>
using namespace std;
main (){
	int fil =0,col=0,**pm_notas;
	cout<<"ingrese la cantidad de estudiantes:";
	cin>>fil;
	cout<<"ingrese la cantidad de notas para estudiante:";
	cin>>col;
	
	pm_notas=new int *[fil];
	for(int i=0;i<fil;i++){
		pm_notas[i]=new int[col];
	}
	for(int i=0;i<fil;i++){
		
		for(int ii=0;ii<col;ii++){
			cout<<"Estudiante"<<i<<",nota:"<<ii<<":";
			cin>>*(*(pm_notas+i)+ii);
		}
		cout<<"--------------------"<<endl;
	}
	
	
	
	
	
	
	
	system("pause");
}
