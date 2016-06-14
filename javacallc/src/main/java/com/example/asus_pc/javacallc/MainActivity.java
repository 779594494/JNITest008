package com.example.asus_pc.javacallc;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        //测试1
        JNI jni = new JNI();
        int result = jni.sum(3, 4);

        Log.e("TAG", "result:" + result);

        //测试2
        String msg = jni.sayHello("ni hao");

        Log.e("TAG", msg);

    }
}
