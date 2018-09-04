#include <com_ram234_ramos_ndkopencvtest1_OpencvNativeClass.h>


JNIEXPORT jint JNICALL Java_com_ram234_ramos_ndkopencvtest1_OpencvNativeClass_convertGray
  (JNIEnv *, jclass, jlong addrRgba, jlong addrGray){
    Mat& mRgb = *(Mat*)addrRgba;
    Mat& mGray = *(Mat*)addrGray;

    int conv;
    jint retVal;
    conv = toGray(mRgb, mGray);

    retVal = (jint)conv;

    return retVal;
  }

   int toGray(Mat img, Mat& gray){
     cvtColor(img, gray, CV_RGBA2GRAY);
     if(gray.rows==img.rows && gray.cols==img.cols)
     return 1;
     return 0;
  }

