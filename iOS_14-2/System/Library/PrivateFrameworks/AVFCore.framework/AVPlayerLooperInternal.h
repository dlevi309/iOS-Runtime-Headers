/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol OS_dispatch_queue, AVCallbackCancellation;
#import <AVFCore/AVFCore-Structs.h>
@class AVQueuePlayer, AVPlayerItem, NSMutableArray, NSObject, NSError, AVWeakReference;

@interface AVPlayerLooperInternal : NSObject {

	AVQueuePlayer* loopingPlayer;
	AVPlayerItem* loopingItem;
	NSMutableArray* loopingItemCopies;
	SCD_Struct_AV7 loopRange;
	long long loopCount;
	NSObject*<OS_dispatch_queue> ivarAccessQueue;
	long long playerOriginalActionAtItemEnd;
	SCD_Struct_AV6 forwardPlaybackStartTime;
	AVPlayerItem* lastEnqueuedLoopingItem;
	BOOL waitingForLastLoopingCopyToFinish;
	long long status;
	NSError* error;
	id<AVCallbackCancellation> playerCurrentItemKVOInvoker;
	NSMutableArray* loopingItemStatusKVOInvokers;
	AVWeakReference* weakReference;
	BOOL listeningForItemFailedToPlayToEndTime;

}
@end

