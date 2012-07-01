/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_toxiclab_droidg2_main */

#ifndef _Included_org_toxiclab_droidg2_main
#define _Included_org_toxiclab_droidg2_main
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_toxiclab_droidg2_main
 * Method:    start_sharelin
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_toxiclab_droidg2_main_start_1sharelin
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_toxiclab_droidg2_main
 * Method:    createSearch
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_toxiclab_droidg2_main_createSearch
  (JNIEnv *, jobject, jstring, jstring, jstring, jstring, jstring);

/*
 * Class:     org_toxiclab_droidg2_main
 * Method:    showSearch
 * Signature: ()[Lorg/toxiclab/droidg2/toxiclab_search;
 */
JNIEXPORT jobjectArray JNICALL Java_org_toxiclab_droidg2_main_showSearch
  (JNIEnv *, jobject);

/*
 * Class:     org_toxiclab_droidg2_main
 * Method:    showSearchResult
 * Signature: (ILjava/lang/String;Z)[Lorg/toxiclab/droidg2/toxiclab_searchResult;
 */
JNIEXPORT jobjectArray JNICALL Java_org_toxiclab_droidg2_main_showSearchResult
  (JNIEnv *, jobject, jint, jstring, jboolean);

/*
 * Class:     org_toxiclab_droidg2_main
 * Method:    showHubs
 * Signature: ()[Lorg/toxiclab/droidg2/toxiclab_hub;
 */
JNIEXPORT jobjectArray JNICALL Java_org_toxiclab_droidg2_main_showHubs
  (JNIEnv *, jobject);

/*
 * Class:     org_toxiclab_droidg2_main
 * Method:    showHandshake
 * Signature: ()[Lorg/toxiclab/droidg2/toxiclab_hub;
 */
JNIEXPORT jobjectArray JNICALL Java_org_toxiclab_droidg2_main_showHandshake
  (JNIEnv *, jobject);

/*
 * Class:     org_toxiclab_droidg2_main
 * Method:    showDownload
 * Signature: (I)Lorg/toxiclab/droidg2/toxiclab_downloadResult;
 */
JNIEXPORT jobject JNICALL Java_org_toxiclab_droidg2_main_showDownload
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_toxiclab_droidg2_main
 * Method:    showAllDownload
 * Signature: (Ljava/lang/String;Z)[Lorg/toxiclab/droidg2/toxiclab_download;
 */
JNIEXPORT jobjectArray JNICALL Java_org_toxiclab_droidg2_main_showAllDownload
  (JNIEnv *, jobject, jstring, jboolean);

/*
 * Class:     org_toxiclab_droidg2_main
 * Method:    createDownload
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_org_toxiclab_droidg2_main_createDownload
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_toxiclab_droidg2_main
 * Method:    showIncoming
 * Signature: ()[Lorg/toxiclab/droidg2/jni/toxiclab_incoming;
 */
JNIEXPORT jobjectArray JNICALL Java_org_toxiclab_droidg2_main_showIncoming
  (JNIEnv *, jobject);

/*
 * Class:     org_toxiclab_droidg2_main
 * Method:    pauseDownload
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_toxiclab_droidg2_main_pauseDownload
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_toxiclab_droidg2_main
 * Method:    resumeDownload
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_toxiclab_droidg2_main_resumeDownload
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_toxiclab_droidg2_main
 * Method:    deleteDownload
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_toxiclab_droidg2_main_deleteDownload
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_toxiclab_droidg2_main
 * Method:    pauseSearch
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_toxiclab_droidg2_main_pauseSearch
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_toxiclab_droidg2_main
 * Method:    deleteSearch
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_toxiclab_droidg2_main_deleteSearch
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_toxiclab_droidg2_main
 * Method:    resumeSearch
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_toxiclab_droidg2_main_resumeSearch
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_toxiclab_droidg2_main
 * Method:    killCore
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_toxiclab_droidg2_main_killCore
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif

#ifdef DEFINE_GLOBALS
#define GLOBAL
#else
#define GLOBAL extern
#endif

GLOBAL const char* root_directory;

#endif
