package com.example.houshuai.opencvdemo;

/**
 * Created by HouShuai on 2016/11/7.
 */

public class MyNdk {
    static {
        System.loadLibrary("MyLibrary");
    }

    public native String getString();
}
