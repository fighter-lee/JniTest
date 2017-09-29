package top.fighter_lee.jnitest;

/**
 * Created by fighter_lee on 2017/9/29.
 */

public class JniUtils {

    static {
        System.loadLibrary("native-lib");
    }

    public static native String stringFromJNI();

}
