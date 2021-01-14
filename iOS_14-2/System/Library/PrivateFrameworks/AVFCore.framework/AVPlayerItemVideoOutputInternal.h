/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <AVFCore/AVFCore-Structs.h>
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
	SCD_Struct_AV6 wakeUpImageTime;
	BOOL immediateWakeUp;
	long long clientStateOnRequestedMediaDataChangeNotification;
	BOOL suppressesPlayerRendering;
	BOOL shouldTagBuffersWithInfo;
	AVVideoOutputSettings* videoSettings;

}
@end

