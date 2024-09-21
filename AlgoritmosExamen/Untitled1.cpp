#include Uso del espacio de nombres std;

int main(int argc, char *argv[]) { int número; do{ cout<<"INGRESE UN NÚMERO: "; cin>>número;

}while((numero<1) || (numero>10));

for(int i=1; i<=10; i++){
	cout<<numero<<" * "<<i<<" = "<<numero * i<<endl;
}
return 0;
}
