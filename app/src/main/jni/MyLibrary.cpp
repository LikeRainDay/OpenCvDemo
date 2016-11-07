//
// Created by HouShuai on 2016/11/7.
//

#include "com_example_houshuai_opencvdemo_MyNdk.h"
JNIEXPORT jstring JNICALL Java_com_example_houshuai_opencvdemo_MyNdk_getString
  (JNIEnv * env, jobject obj){
return (*env).NewStringUTF("This is mylibrary !!!");
}