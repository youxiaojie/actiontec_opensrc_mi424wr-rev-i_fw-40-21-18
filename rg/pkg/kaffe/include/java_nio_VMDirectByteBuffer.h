/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>

#ifndef _Included_java_nio_VMDirectByteBuffer
#define _Included_java_nio_VMDirectByteBuffer

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jobject JNICALL Java_java_nio_VMDirectByteBuffer_allocate(JNIEnv*, jclass, jint);
JNIEXPORT void JNICALL Java_java_nio_VMDirectByteBuffer_free(JNIEnv*, jclass, jobject);
JNIEXPORT jbyte JNICALL Java_java_nio_VMDirectByteBuffer_get__Lgnu_classpath_Pointer_2I(JNIEnv*, jclass, jobject, jint);
JNIEXPORT void JNICALL Java_java_nio_VMDirectByteBuffer_get__Lgnu_classpath_Pointer_2I_3BII(JNIEnv*, jclass, jobject, jint, jbyteArray, jint, jint);
JNIEXPORT void JNICALL Java_java_nio_VMDirectByteBuffer_put__Lgnu_classpath_Pointer_2IB(JNIEnv*, jclass, jobject, jint, jbyte);
JNIEXPORT void JNICALL Java_java_nio_VMDirectByteBuffer_put__Lgnu_classpath_Pointer_2I_3BII(JNIEnv*, jclass, jobject, jint, jbyteArray, jint, jint);
JNIEXPORT jobject JNICALL Java_java_nio_VMDirectByteBuffer_adjustAddress(JNIEnv*, jclass, jobject, jint);
JNIEXPORT void JNICALL Java_java_nio_VMDirectByteBuffer_shiftDown(JNIEnv*, jclass, jobject, jint, jint, jint);

#ifdef __cplusplus
}
#endif

#endif
