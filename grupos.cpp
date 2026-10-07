#include <iostream>
#define FILAS 8688
#define COLUMNAS 5792
#define REJILLAS 3
int main()
{
    int n, m;
    float calificacion[ALUMNOS][GRUPOS];
    float suma = 0.0 , varianza = 0.0;
    do{
    	std::cout<<"Cuantos grupos (entre 1 y " << GRUPOS << ")? ";
    	std::cin >> m;
	}while(m < 0 || m > GRUPOS);
    
    for(int j=0; j<m; j++){
		suma = 0.0; 
		varianza = 0.0;
	    std::cout<<"Cuantas calificaciones del grupo " << j+1 <<"? ";
	    std::cin >> n;
	    for (int i=0; i< n; i+=1){
	        std::cout<<"Calificacion " << i + 1 << ": ";
	        std::cin >> calificacion[i][j];
	        suma += calificacion[i][j];
	    }
	    
	    float promedio = suma / n;
	    std::cout << "El promedio es: " << promedio << "\n";
	    
	    suma = 0.0;
	    for (int i=0; i< n; i+=1){
	        suma += (promedio - calificacion[i][j]) * (promedio - calificacion[i][j]);
	    }
	    std::cout << "La varianza es: " << suma / n << "\n";
	}
    return 0;
}
