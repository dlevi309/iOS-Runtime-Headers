/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface PLConcurrentQueue : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSMutableArray* _internalQueue_pendingBlocks;
	long long _internalQueue_usedWidth;
	NSObject*<OS_dispatch_queue> _targetQueue;
	long long _width;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> targetQueue;              //@synthesize targetQueue=_targetQueue - In the implementation block
@property (nonatomic,readonly) long long width;                                       //@synthesize width=_width - In the implementation block
-(long long)width;
-(NSObject*<OS_dispatch_queue>)targetQueue;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(id)init;
-(id)initWithTargetQueue:(id)arg1 width:(long long)arg2 ;
-(void)_internalQueue_tryDispatchingNextPendingBlock;
@end

