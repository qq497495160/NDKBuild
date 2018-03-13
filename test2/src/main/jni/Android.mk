LOCAL_PATH := $(call my-dir)  
include $(CLEAR_VARS)  

LOCAL_MODULE := JniDemo
LOCAL_C_INCLUDES := com_example_client007_ndkbuild_JniKet.h
LOCAL_SRC_FILES := TestJni.c

LOCAL_LDLIBS := -llog  
  
include $(BUILD_SHARED_LIBRARY)
