package com.example.asus_pc.javacallc;

/**
 * Created by ASUS-PC on 2016/6/14.
 */
public class JNI {
    static{
        System.loadLibrary("Jni");
    }

    public native int sum(int x,int y);
    public native String sayHello(String s);
    public native int[] increseArrayEles(int[]intArray);
}
