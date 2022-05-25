
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_photonvision_raspi_LibCameraJNI */

#ifndef _Included_org_photonvision_raspi_LibCameraJNI
#define _Included_org_photonvision_raspi_LibCameraJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_photonvision_raspi_LibCameraJNI
 * Method:    getSensorModelRaw
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_org_photonvision_raspi_LibCameraJNI_getSensorModelRaw(JNIEnv *, jclass);

/*
 * Class:     org_photonvision_raspi_LibCameraJNI
 * Method:    isVCSMSupported
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL
Java_org_photonvision_raspi_LibCameraJNI_isSupported(JNIEnv *, jclass);

/*
 * Class:     org_photonvision_raspi_LibCameraJNI
 * Method:    createCamera
 * Signature: (III)Z
 */
JNIEXPORT jlong JNICALL Java_org_photonvision_raspi_LibCameraJNI_createCamera(
    JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     org_photonvision_raspi_LibCameraJNI
 * Method:    destroyCamera
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL
Java_org_photonvision_raspi_LibCameraJNI_destroyCamera(JNIEnv *, jclass);

/*
 * Class:     org_photonvision_raspi_LibCameraJNI
 * Method:    setThresholds
 * Signature: (DDDDDD)V
 */
JNIEXPORT jboolean JNICALL Java_org_photonvision_raspi_LibCameraJNI_setThresholds(
    JNIEnv *, jclass, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

/*
 * Class:     org_photonvision_raspi_LibCameraJNI
 * Method:    setExposure
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL
Java_org_photonvision_raspi_LibCameraJNI_setExposure(JNIEnv *, jclass, jint);

/*
 * Class:     org_photonvision_raspi_LibCameraJNI
 * Method:    setBrightness
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL
Java_org_photonvision_raspi_LibCameraJNI_setBrightness(JNIEnv *, jclass, jdouble);

/*
 * Class:     org_photonvision_raspi_LibCameraJNI
 * Method:    setGain
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL
Java_org_photonvision_raspi_LibCameraJNI_setAnalogGain(JNIEnv *, jclass, jdouble);
JNIEXPORT jboolean JNICALL
Java_org_photonvision_raspi_LibCameraJNI_setDigitalGain(JNIEnv *, jclass, jdouble);

JNIEXPORT jboolean JNICALL Java_org_photonvision_raspi_LibCameraJNI_setAwbGain(
    JNIEnv *, jclass, jdouble red, jdouble blue);

/*
 * Class:     org_photonvision_raspi_LibCameraJNI
 * Method:    setRotation
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL
Java_org_photonvision_raspi_LibCameraJNI_setRotation(JNIEnv *, jclass, jint);

/*
 * Class:     org_photonvision_raspi_LibCameraJNI
 * Method:    getFrameLatency
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL
Java_org_photonvision_raspi_LibCameraJNI_getFrameLatency(JNIEnv *, jclass);

/*
 * Class:     org_photonvision_raspi_LibCameraJNI
 * Method:    grabFrame
 * Signature: (Z)J
 */
JNIEXPORT jboolean JNICALL
Java_org_photonvision_raspi_LibCameraJNI_awaitNewFrame(JNIEnv *, jclass);

JNIEXPORT jlong JNICALL
Java_org_photonvision_raspi_LibCameraJNI_getColorFrame(JNIEnv *, jclass);

JNIEXPORT jlong JNICALL
Java_org_photonvision_raspi_LibCameraJNI_getGPUoutput(JNIEnv *, jclass);

// True if greyscale, else binary threshold output
JNIEXPORT jboolean JNICALL
Java_org_photonvision_raspi_LibCameraJNI_setShouldGreyscale(JNIEnv *, jclass, jboolean);

#ifdef __cplusplus
}
#endif
#endif
