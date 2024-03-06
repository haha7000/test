#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
    Mat logo = imread("/Users/gimdonghun/Downloads/logo.png");
    Mat image = imread("/Users/gimdonghun/Downloads/차선.jpeg");
    
    Mat logo_th, masks[5], background, foreground, dst;
    //cvtColor(logo, logo, COLOR_BGR2GRAY);
    threshold(logo, logo_th, 70, 255, THRESH_BINARY);
    split(logo_th, masks);
    
    bitwise_or(masks[0], masks[2], masks[3]);
    bitwise_or(masks[2], masks[3], masks[4]);
    bitwise_not(masks[3], masks[4]);
    
    Point center1 = image.size()/2;
    Point center2 = logo.size()/2;
    Point start = center1 - center2;
    Rect roi(start, logo.size());
    
    imshow("logo", logo_th);
    imshow("image", image);
    imshow("masks3", masks[2]);
    imshow("masks4", masks[4]);
    waitKey(0);
    return 0;
}
