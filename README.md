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

## Configuración de Visual Studio Code (c_cpp_properties.json)

Para configurar correctamente **OpenCV** en **Visual Studio Code** con **MinGW** en tu sistema, es necesario modificar el archivo **`c_cpp_properties.json`**. Este archivo configura las rutas de inclusión, el compilador y otras opciones relacionadas con la compilación.

### Pasos para configurar el archivo `c_cpp_properties.json`:

1. Abre tu proyecto en **Visual Studio Code**.
2. Dirígete a la carpeta `.vscode` en tu proyecto (si no existe, crea una).
3. Dentro de esa carpeta, crea o edita el archivo **`c_cpp_properties.json`**.
4. Asegúrate de que las rutas de **OpenCV** en el archivo **`c_cpp_properties.json`** apunten a la ubicación correcta de tu instalación de **OpenCV**.

El archivo **`c_cpp_properties.json`** debe tener una configuración similar a esta:

```json
{
    "configurations": [
        {
            "name": "Win32",
            "includePath": [
                "${workspaceFolder}/**",
                "C:/opt/opencv/build/include",        // Cambia esta ruta según la ubicación de OpenCV en tu sistema
                "C:/opt/opencv/build/include/opencv2"  // Cambia esta ruta según la ubicación de OpenCV en tu sistema
            ],
            "defines": [
                "_DEBUG",
                "UNICODE",
                "_UNICODE"
            ],
            "windowsSdkVersion": "10.0.22621.0",
            "cStandard": "c17",
            "cppStandard": "c++17",
            "compilerPath": "C:/MinGW/bin/gcc.exe"
        }
    ],
    "version": 4
}
```

## Funcionalidad

1. **Leer una imagen en formato RGB**:
   - Utilizamos OpenCV para cargar una imagen en formato **BGR** (por defecto en OpenCV) y la convertimos en formato **RGB**.
   
2. **Extraer y mostrar los canales (Rojo, Verde y Azul)**:
   - Extraemos los tres canales (Azul, Verde y Rojo) de la imagen y mostramos cada uno por separado en su propia ventana.
   
3. **Almacenar los valores de cada canal en una matriz**:
   - Cada canal es almacenado en una **matriz separada** para permitir el análisis y procesamiento individual.
   
4. **Verificación de los valores de los canales**:
   - Se verifica que los valores de cada píxel en los canales estén dentro del rango **0-255** (el rango esperado para imágenes de 8 bits por canal).

## Ejecución

### Pasos para compilar y ejecutar:

1. **Crear el directorio de construcción y configurar con CMake:**

   ```bash
   mkdir build
   cmake -B .\build\
2. **#BUILD IN DEBUG**
   ```bash
   cmake --build .\build\
   .\build\Debug\OpenCVExample.exe

3. **#BUILD IN RELEASE**
   ```bash
   cmake --build .\build\ --config Release
   .\build\Release\OpenCVExample.exe
4. **#MODIFY PROGRAM AND REBUILD**
   ```bash
   cmake --build .\build\
   .\build\Debug\OpenCVExample.exe


## Ejemplo de ejecución:
1. **Imagen de ejemplo**: La línea de código:
   
   ![Funcionamiento](https://github.com/DiegoRivas12/LAB01_COMPUTACION_GRAFICA/raw/main/funcionamiento.png)
  

