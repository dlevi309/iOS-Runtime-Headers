/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PFLimitedConcurrencyQueueClass *)concurrentQueue;
-(void)suspend;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(void)dispatchAsyncWithQOS:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(unsigned long long)slotUseCount;
-(id)initWithConcurrentQueue:(id)arg1 targetQueue:(id)arg2 slotIndex:(unsigned long long)arg3 ;
-(unsigned long long)incrementSlotUseCount;
-(unsigned long long)decrementSlotUseCount;
-(void)resume;
-(const char*)label;
-(unsigned long long)slotIndex;
@end

