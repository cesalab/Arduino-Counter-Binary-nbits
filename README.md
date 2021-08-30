	Contador binario de n bits v0.1, se limita a ingresar: n bits, asi
como la señal que aplicara como ENCENDIDO y APAGADO.

	Se emplean dos contadores, uno para el contador principal, indicado
en valor decimal, el cual pasara a binario y sera asignado a los pines 
de salida de arduino. El segundo contador es para generar el num_module
y num_comparator, el cual genera los valores a usar para saber si se le 
debe asignar un 0 o 1 a cada pin de salida. Empleamos la formula:

		count % num_module > num_comparator


Salida Monitor Serial

Iniciando...
count 0 % 2 > 0 OUT: B0 = 0
count 0 % 4 > 1 OUT: B1 = 0
count 0 % 8 > 3 OUT: B2 = 0
count 0 % 16 > 7 OUT: B3 = 0
count 0 % 32 > 15 OUT: B4 = 0
 -------------- 
count 1 % 2 > 0 OUT: B0 = 1
count 1 % 4 > 1 OUT: B1 = 0
count 1 % 8 > 3 OUT: B2 = 0
count 1 % 16 > 7 OUT: B3 = 0
count 1 % 32 > 15 OUT: B4 = 0
 -------------- 
count 2 % 2 > 0 OUT: B0 = 0
count 2 % 4 > 1 OUT: B1 = 1
count 2 % 8 > 3 OUT: B2 = 0
count 2 % 16 > 7 OUT: B3 = 0
count 2 % 32 > 15 OUT: B4 = 0
 -------------- 
count 3 % 2 > 0 OUT: B0 = 1
count 3 % 4 > 1 OUT: B1 = 1
count 3 % 8 > 3 OUT: B2 = 0
count 3 % 16 > 7 OUT: B3 = 0
count 3 % 32 > 15 OUT: B4 = 0
 -------------- 
count 4 % 2 > 0 OUT: B0 = 0
count 4 % 4 > 1 OUT: B1 = 0
count 4 % 8 > 3 OUT: B2 = 1
count 4 % 16 > 7 OUT: B3 = 0
count 4 % 32 > 15 OUT: B4 = 0
 -------------- 
count 5 % 2 > 0 OUT: B0 = 1
count 5 % 4 > 1 OUT: B1 = 0
count 5 % 8 > 3 OUT: B2 = 1
count 5 % 16 > 7 OUT: B3 = 0
count 5 % 32 > 15 OUT: B4 = 0
 -------------- 
count 6 % 2 > 0 OUT: B0 = 0
count 6 % 4 > 1 OUT: B1 = 1
count 6 % 8 > 3 OUT: B2 = 1
count 6 % 16 > 7 OUT: B3 = 0
count 6 % 32 > 15 OUT: B4 = 0
 -------------- 
count 7 % 2 > 0 OUT: B0 = 1
count 7 % 4 > 1 OUT: B1 = 1
count 7 % 8 > 3 OUT: B2 = 1
count 7 % 16 > 7 OUT: B3 = 0
count 7 % 32 > 15 OUT: B4 = 0
 -------------- 

