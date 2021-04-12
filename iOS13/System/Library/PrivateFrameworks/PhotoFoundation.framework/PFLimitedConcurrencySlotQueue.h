/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@protocol OS_dispatch_queue;
@class NSObject, PFLimitedConcurrencyQueueClass;

@interface PFLimitedConcurrencySlotQueue : NSObject {

	AQ _blockCount;
	NSObject*<OS_dispatch_queue> _slotQueue;
	PFLimitedConcurrencyQueueClass* _concurrentQueue;
	unsigned long long _slotIndex;

}

@property (__weak,readonly) PFLimitedConcurrencyQueueClass * concurrentQueue;              //@synthesize concurrentQueue=_concurrentQueue - In the implementation block
@property (readonly) unsigned long long slotIndex;                                         //@synthesize slotIndex=_slotIndex - In the implementation block
+(id)currentSlotQueue;
-(void)resume;
-(void)suspend;
-(const char*)label;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(void)dispatchAsyncWithQOS:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithConcurrentQueue:(id)arg1 targetQueue:(id)arg2 slotIndex:(unsigned long long)arg3 ;
-(unsigned long long)incrementSlotUseCount;
-(unsigned long long)decrementSlotUseCount;
-(unsigned long long)slotUseCount;
-(PFLimitedConcurrencyQueueClass *)concurrentQueue;
-(unsigned long long)slotIndex;
@end

