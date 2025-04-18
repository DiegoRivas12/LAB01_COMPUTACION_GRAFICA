# MANEJO DE IMAGEN CON OpenCV (RGB)

Este proyecto utiliza la librería **OpenCV** en **C++** para realizar operaciones básicas sobre imágenes en formato **RGB**. El código permite leer una imagen en formato **RGB**, extraer y mostrar cada uno de los **canales** de la imagen (Rojo, Verde y Azul) por separado. Además, almacena los valores de cada canal en una **matriz** separada y verifica que los valores estén en el rango **0-255**.

## Prerequisitos

Para ejecutar este proyecto, necesitarás los siguientes requisitos previos:

1. **C++**: Este proyecto está implementado en **C++**, así que debes tener un compilador C++ instalado (como **g++** en Linux o **MinGW** en Windows).
   
2. **CMake**: Este proyecto utiliza **CMake** como sistema de construcción para compilar el código. Debes tener **CMake** instalado. Si no lo tienes, puedes instalarlo desde [aquí](https://cmake.org/install/).

3. **OpenCV**: Necesitarás tener la librería **OpenCV** instalada. Puedes instalarla siguiendo la documentación oficial de OpenCV para tu sistema operativo:
   - En **Linux (Ubuntu)**: `sudo apt-get install libopencv-dev`
   - En **Windows**: Descarga e instala desde [OpenCV](https://opencv.org/releases/).
   - En **macOS**: `brew install opencv`

4. **Dependencias**:
   - **CMake**: Para generar los archivos de construcción de OpenCV.
   - **OpenCV**: Para manipular las imágenes y extraer los canales.

## Funcionalidad

1. **Leer una imagen en formato RGB**:
   - Utilizamos OpenCV para cargar una imagen en formato **BGR** (por defecto en OpenCV) y la convertimos en formato **RGB**.
   
2. **Extraer y mostrar los canales (Rojo, Verde y Azul)**:
   - Extraemos los tres canales (Azul, Verde y Rojo) de la imagen y mostramos cada uno por separado en su propia ventana.
   
3. **Almacenar los valores de cada canal en una matriz**:
   - Cada canal es almacenado en una **matriz separada** para permitir el análisis y procesamiento individual.
   
4. **Verificación de los valores de los canales**:
   - Se verifica que los valores de cada píxel en los canales estén dentro del rango **0-255** (el rango esperado para imágenes de 8 bits por canal).

## Explicación de lo que se añadió:
1. **Imagen de ejemplo**: La línea de código:
   ```markdown
   ![Funcionamiento]( https://github.com/DiegoRivas12/LAB01_COMPUTACION_GRAFICA.git/funcionamiento.png)
  

