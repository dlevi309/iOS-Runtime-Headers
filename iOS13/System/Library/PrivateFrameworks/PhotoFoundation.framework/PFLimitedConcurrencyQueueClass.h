/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)resume;
-(void)suspend;
-(id)_extensionsForTargetingQueue;
-(void)dispatchSync:(/*^block*/id)arg1 ;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(void)dispatchBarrierSync:(/*^block*/id)arg1 ;
-(void)dispatchBarrierAsync:(/*^block*/id)arg1 ;
-(void)dispatchAsyncWithQOS:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(void)dispatchBarrierAsyncWithQOS:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(void)dispatchAfter:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)dispatchGroup:(id)arg1 async:(/*^block*/id)arg2 ;
-(void)dispatchGroup:(id)arg1 notify:(/*^block*/id)arg2 ;
-(unsigned long long)concurrencyLimit;
-(void)_setupConcurrencyLimit:(unsigned long long)arg1 ;
-(id)_allocateOneSlotQueue;
-(void)_allocateAllSlotQueues;
-(id)checkoutAvailableSlot;
-(void)slotQueueMightBeUnused:(id)arg1 ;
-(void)enqueueDelayedDrop;
-(void)dropOneSlotQueue;
@end

