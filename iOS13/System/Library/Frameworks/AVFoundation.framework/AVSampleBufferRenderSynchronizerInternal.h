/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSObject, NSMutableArray;

@interface AVSampleBufferRenderSynchronizerInternal : NSObject {

	AVWeakReference* weakObserver;
	OpaqueCMTimebaseRef readOnlyTimebase;
	NSObject*<OS_dispatch_queue> rateQueue;
	float rate;
	SCD_Struct_AV7 mostRecentlySetTime;
	NSObject*<OS_dispatch_queue> rendererListQueue;
	NSMutableArray* renderers;
	NSMutableArray* timedRenderRemovals;
	NSObject*<OS_dispatch_queue> figSynchronizerAccessQueue;
	OpaqueFigSampleBufferRenderSynchronizerRef figSynchronizer;

}
@end

