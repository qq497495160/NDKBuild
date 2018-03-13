package com.example.client007.ndkbuild;


public class JniKet {


    public static native  String testJni();
    public static native  int getValue();

    static {
        System.loadLibrary("JniDemo");
    }
}


