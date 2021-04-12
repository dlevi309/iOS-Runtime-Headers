/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVWeakReferencingDelegateStorage, NSObject, AVVideoOutputSettings;

@interface AVPlayerItemVideoOutputInternal : NSObject {

	OpaqueCMTimebaseRef timebase;
	double currentRate;
	OpaqueFigVisualContextRef vc;
	AVWeakReference* playerItemWeakReference;
	AVWeakReferencingDelegateStorage* delegateStorage;
	OpaqueVTPixelBufferConformerRef pixelBufferConformer;
	NSObject*<OS_dispatch_queue> stateQueue;
	NSObject*<OS_dispatch_source> delegateWakeupSource;
	double advanceWakeUpInterval;
	BOOL advanceWakeUpIntervalIsValid;
	SCD_Struct_AV7 wakeUpImageTime;
	BOOL immediateWakeUp;
	long long clientStateOnRequestedMediaDataChangeNotification;
	BOOL suppressesPlayerRendering;
	BOOL shouldTagBuffersWithInfo;
	AVVideoOutputSettings* videoSettings;

}
@end

