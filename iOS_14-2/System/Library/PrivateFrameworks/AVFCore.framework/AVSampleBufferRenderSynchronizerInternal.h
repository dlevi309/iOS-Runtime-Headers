/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol OS_dispatch_queue;
#import <AVFCore/AVFCore-Structs.h>
@class AVWeakReference, NSObject, NSMutableArray, NSString, AVSampleBufferDisplayLayer;

@interface AVSampleBufferRenderSynchronizerInternal : NSObject {

	AVWeakReference* weakObserver;
	OpaqueCMTimebaseRef readOnlyTimebase;
	NSObject*<OS_dispatch_queue> rateQueue;
	float rate;
	SCD_Struct_AV6 mostRecentlySetTime;
	NSObject*<OS_dispatch_queue> rendererListQueue;
	NSMutableArray* renderers;
	NSMutableArray* timedRenderRemovals;
	NSObject*<OS_dispatch_queue> figSynchronizerAccessQueue;
	OpaqueFigSampleBufferRenderSynchronizerRef figSynchronizer;
	NSString* STSLabel;
	AVSampleBufferDisplayLayer* layerTrackedBySTS;

}
@end

