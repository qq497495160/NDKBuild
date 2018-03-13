//
// Created by tech57 on 2017/12/7.
//
#include  "com_example_client007_ndkbuild_JniKet.h"

JNIEXPORT jstring JNICALL Java_com_example_client007_ndkbuild_JniKet_testJni
  (JNIEnv *env, jclass jc){

     return (*env)->NewStringUTF(env,"fuck your father,langfei laozi's time");
  }
JNIEXPORT jint JNICALL Java_com_example_client007_ndkbuild_JniKet_getValue
    (JNIEnv *env, jclass js ){


    return addValue(10, 8);
  }