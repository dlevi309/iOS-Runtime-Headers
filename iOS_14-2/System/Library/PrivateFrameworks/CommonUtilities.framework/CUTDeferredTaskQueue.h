/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSNumber;

@interface CUTDeferredTaskQueue : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _originalBlock;
	NSMutableArray* _pendingDispatchBlocks;
	NSNumber* _capacity;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id originalBlock;                                    //@synthesize originalBlock=_originalBlock - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingDispatchBlocks;              //@synthesize pendingDispatchBlocks=_pendingDispatchBlocks - In the implementation block
@property (nonatomic,readonly) NSNumber * capacity;                                 //@synthesize capacity=_capacity - In the implementation block
-(id)initWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(NSNumber *)capacity;
-(NSMutableArray *)pendingDispatchBlocks;
-(id)initWithNumberCapacity:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)initWithCapacity:(long long)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)originalBlock;
-(void)enqueueExecutionWithTarget:(id)arg1 afterDelay:(double)arg2 ;
-(void)cancelPendingExecutions;
@end

