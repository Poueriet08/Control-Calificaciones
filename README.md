# Control-Calificaciones
# Sistema de Control de Calificaciones

* **Nombre:** Kenayri Luna Poueriet Santana
* **Matrícula:** [2026-1975]
* **Asignatura:** Lógica de Programación

## Descripción del Programa
Programa de consola desarrollado en C++ para el centro educativo "La Nueva Escuela" que permite registrar y calcular el promedio de calificaciones de un grupo de estudiantes, validando los datos ingresados y generando un resumen estadístico final.

## Datos de Entrada, Proceso y Salida
* **Entrada:** Cantidad de estudiantes (mayor a 0), nombre de cada estudiante, 4 calificaciones por estudiante (entre 0 y 100) y confirmación para procesar otro grupo (`s/n`).
* **Proceso:** Validación de rangos, cálculo del promedio individual de cada estudiante, clasificación (Aprobado si es >= 70, Reprobado en caso contrario), conteo de aprobados/reprobados, cálculo del promedio general del grupo e identificación del promedio más alto.
* **Salida:** Promedio y estado individual de cada estudiante, además del resumen del grupo (total de aprobados, reprobados, promedio general y mejor estudiante).

## Explicación de los Bucles Utilizados
* **Bucle `while` principal:** Se utilizó para repetir todo el sistema si el usuario desea procesar un nuevo grupo al finalizar (`s/n`).
* **Bucles `do-while`:** Se emplearon para validar las entradas del usuario (que la cantidad de estudiantes sea mayor a 0 y que cada calificación esté entre 0 y 100), garantizando que el bloque se ejecute al menos una vez y repita la solicitud si el dato es inválido.
* **Bucles `for`:** Se usaron para recorrer de forma controlada la cantidad exacta de estudiantes del grupo y las 4 calificaciones fijas de cada uno.

## Capturas de Ejecución

### Prueba 1: Validación de datos inválidos
![Validación de errores](captura1.png)

### Prueba 2: Registro y cálculo de promedios
![Registro de notas](captura2.png)

### Prueba 3: Resumen final del grupo
![Resumen del grupo](captura3.png)
