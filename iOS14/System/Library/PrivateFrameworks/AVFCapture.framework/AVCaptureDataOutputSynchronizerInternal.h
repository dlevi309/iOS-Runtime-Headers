/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference, NSArray;

@interface AVCaptureDataOutputSynchronizerInternal : NSObject {

	AVCaptureDataOutputDelegateCallbackHelper* delegateCallbackHelper;
	AVWeakReference* weakReference;
	NSArray* dataOutputs;
	OpaqueFigSimpleMutexRef dataOutputsStorageMutex;
	NSArray* dataOutputsStorage;
	int masterSynchronizedDataQueueMaxDepth;
	BOOL synchronizingVideoAndDepth;
	BOOL synchronizingVideoAndVisionData;

}
@end

