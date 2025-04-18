#include <opencv2/opencv.hpp>
#include <iostream>
#define N 3 //Numero de canales

cv::Mat* extraerCanal(cv::Mat img){
    cv::Mat* RGB = new cv::Mat[N];
    cv::split(img, RGB);

    return RGB;
}
int main() {
    // Ruta de la imagen
    std::string imagePath = "dado.png";  // Cambia esta ruta por la ubicación de tu imagen
    cv::Mat image = cv::imread(imagePath, cv::IMREAD_COLOR);
    cv::Mat* BGR = extraerCanal(image);

    const char* nombreCanales[N]={"Azul","Verde","Rojo"};

    for(int i=0;i<N;i++){
        cv::imshow(nombreCanales[i],BGR[i]);
        cv::resizeWindow(nombreCanales[i], 350, 350);
    }
    cv::waitKey(0);
    delete[] BGR;  // Libera la memoria que fue asignada con new

    cv::destroyAllWindows();  // Cierra todas las ventanas

    return 0;
}
