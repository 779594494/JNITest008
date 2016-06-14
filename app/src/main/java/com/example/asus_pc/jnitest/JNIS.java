package com.example.asus_pc.jnitest;

/**
 * Created by ASUS-PC on 2016/6/13.
 */
public class JNIS {
    static {
        System.loadLibrary("HelloJni");
    }
    public native String helloJNI();
}
