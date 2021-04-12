/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


@protocol OS_dispatch_queue;
#import <AVFCapture/AVFCapture-Structs.h>
@class AVWeakReference, NSObject;

@interface AVFlashlightInternal : NSObject {

	AVWeakReference* weakReference;
	OpaqueFigFlashlightRef flashlight;
	BOOL available;
	BOOL overheated;
	float flashlightLevel;
	OpaqueFigSimpleMutexRef lock;
	NSObject*<OS_dispatch_queue> serverReconnectQueue;

}
@end

