//
// Created by ASUS-PC on 2016/6/14.

//

#include "com_example_asus_pc_javacallc_JNI.h"
#include "string.h"
char* _JString2CStr(JNIEnv* env, jstring jstr) {
    char* rtn;
    jclass clsstring = (*env)->FindClass(env, "java/lang/String");
    jstring strencode = (*env)->NewStringUTF(env,"GB2312");
    jmethodID mid = (*env)->GetMethodID(env, clsstring, "getBytes", "(Ljava/lang/String;)[B");
    jbyteArray barr = (jbyteArray)(*env)->CallObjectMethod(env, jstr, mid, strencode); // String .getByte("GB2312");
    jsize alen = (*env)->GetArrayLength(env, barr);
    jbyte* ba = (*env)->GetByteArrayElements(env, barr, JNI_FALSE);
    if(alen > 0) {
        rtn = (char*)malloc(alen+1); //"\0"
        memcpy(rtn, ba, alen);
        rtn[alen]=0;
    }
    (*env)->ReleaseByteArrayElements(env, barr, ba,0);
    return rtn;
}

JNIEXPORT jint JNICALL Java_com_example_asus_1pc_javacallc_JNI_sum
        (JNIEnv *env, jobject jobj, jint x, jint y){
    return x+y;
}

 jstring Java_com_example_asus_1pc_javacallc_JNI_sayHello
        (JNIEnv *env, jobject jobj, jstring jstr){

    char *pchar=_JString2CStr(env,jstr);
    char *pchar2="xiaodongdongna";
    char *pResult=strcat(pchar,pchar2);
    return (*env)->NewStringUTF(env,pResult);
}
