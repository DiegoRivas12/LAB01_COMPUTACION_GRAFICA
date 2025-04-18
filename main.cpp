#include <opencv2/opencv.hpp>
#include <iostream>
#define N 3 //Numero de canales
std::string rangoPixel(cv::Mat canal){//Verifica que el piel este en el rango de 0 a 255
    
    for(int row=0;row<canal.rows;row++){
        for(int col=0;col<canal.cols;col++){
            int valorPixel=canal.at<uchar>(row,col);
            if((valorPixel<=255 && valorPixel>=0)==false)
                return "Fuera de rango de 0 a 255";//std::cout<<"Pixel fuera de rango"<<std::endl;
        }
    }
    return "Dentro del rango de 0 a 255";
    
}
cv::Mat* extraerCanal(cv::Mat img){
    cv::Mat* RGB = new cv::Mat[N];
    cv::split(img, RGB);

    return RGB;
}
int main() {
    // Ruta de la imagen
    std::string imagePath = "dado.png"; 
    cv::Mat image = cv::imread(imagePath, cv::IMREAD_COLOR);
    cv::Mat* BGR = extraerCanal(image);

    const char* nombreCanales[N]={"Azul","Verde","Rojo"};
    cv::imshow("Imagen Original",image);
    cv::resizeWindow("Imagen Original", 350, 350);
    for(int i=0;i<N;i++){
        std::cout<<"Canal "<<nombreCanales[i]<<" "<<rangoPixel(BGR[i]);
        std::cout<<std::endl;
        cv::imshow(nombreCanales[i],BGR[i]);
        cv::resizeWindow(nombreCanales[i], 350, 350);
        
    }
    cv::waitKey(0);
    delete[] BGR; 

    cv::destroyAllWindows();  

    return 0;
}
