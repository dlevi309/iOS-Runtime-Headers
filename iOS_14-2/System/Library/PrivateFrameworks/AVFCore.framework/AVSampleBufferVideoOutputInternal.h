/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol OS_dispatch_queue;
#import <AVFCore/AVFCore-Structs.h>
@class AVWeakReference, NSObject, AVWeakReferencingDelegateStorage;

@interface AVSampleBufferVideoOutputInternal : NSObject {

	AVWeakReference* weakReference;
	OpaqueFigVisualContextRef vc;
	OpaqueVTPixelBufferConformerRef pixelBufferConformer;
	NSObject*<OS_dispatch_queue> stateQueue;
	AVWeakReferencingDelegateStorage* delegateStorage;
	SCD_Struct_AV6 lastImageTime;

}
@end

