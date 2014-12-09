#include <string.h>
#include <jni.h>

jstring
Java_test_ndk_androidstudio_kibotu_net_ndkwithandroidstudiotest_NDKTest_stringFromJNI(JNIEnv* env, jobject thiz)
{
    return (*env)->NewStringUTF(env, "hello ingo :D!");
}