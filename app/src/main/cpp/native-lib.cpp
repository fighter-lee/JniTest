#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_top_fighter_1lee_jnitest_JniUtils_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
