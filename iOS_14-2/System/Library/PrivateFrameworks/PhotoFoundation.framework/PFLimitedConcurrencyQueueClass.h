/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <PhotoFoundation/PFConcurrentQueueClass.h>

@class NSMutableArray, PFSerialQueue;

@interface PFLimitedConcurrencyQueueClass : PFConcurrentQueueClass {

	NSMutableArray* _slotQueues;
	unsigned long long _concurrencyLimit;
	PFSerialQueue* _serializer;
	NSMutableArray* _availableSlots;
	BOOL _usesBarrierBlocks;
	unsigned long long _suspendCount;

}
-(void)suspend;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(void)dispatchAsyncWithQOS:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(unsigned long long)concurrencyLimit;
-(void)_setupConcurrencyLimit:(unsigned long long)arg1 ;
-(id)_allocateOneSlotQueue;
-(void)_allocateAllSlotQueues;
-(id)checkoutAvailableSlot;
-(void)slotQueueMightBeUnused:(id)arg1 ;
-(void)enqueueDelayedDrop;
-(void)dropOneSlotQueue;
-(void)dispatchBarrierAsyncWithQOS:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(void)dispatchAfter:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)dispatchGroup:(id)arg1 notify:(/*^block*/id)arg2 ;
-(void)dispatchGroup:(id)arg1 async:(/*^block*/id)arg2 ;
-(void)dispatchBarrierAsync:(/*^block*/id)arg1 ;
-(void)dispatchSync:(/*^block*/id)arg1 ;
-(void)dispatchBarrierSync:(/*^block*/id)arg1 ;
-(void)resume;
-(id)_extensionsForTargetingQueue;
@end

