#include <iostream>
#include <TestJni.h>

using namespace std;

JNIEXPORT jstring JNICALL Java_TestJni_getName(JNIEnv* env, jclass javaClass){
  
  
  return env->NewStringUTF("hey");
  
}
