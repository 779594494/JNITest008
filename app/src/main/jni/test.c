//
// Created by ASUS-PC on 2016/6/13.
//

#include "com_example_asus_pc_jnitest_JNIS.h"

JNIEXPORT jstring JNICALL Java_com_example_asus_1pc_jnitest_JNIS_helloJNI
        (JNIEnv * env, jobject jobj){
    return (*env)->NewStringUTF(env, "Hello from C");
}