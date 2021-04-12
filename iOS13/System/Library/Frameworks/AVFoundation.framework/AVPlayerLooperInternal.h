/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol OS_dispatch_queue, AVCallbackCancellation;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVQueuePlayer, AVPlayerItem, NSMutableArray, NSObject, NSError, AVWeakReference;

@interface AVPlayerLooperInternal : NSObject {

	AVQueuePlayer* loopingPlayer;
	AVPlayerItem* loopingItem;
	NSMutableArray* loopingItemCopies;
	SCD_Struct_AV8 loopRange;
	long long loopCount;
	NSObject*<OS_dispatch_queue> ivarAccessQueue;
	long long playerOriginalActionAtItemEnd;
	SCD_Struct_AV7 forwardPlaybackStartTime;
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

