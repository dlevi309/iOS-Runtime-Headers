/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <PhotoFoundation/PFDispatchQueue.h>
#import <libobjc.A.dylib/PFDispatchQueueMethods.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface PFDispatchQueueBaseClass : PFDispatchQueue <PFDispatchQueueMethods> {

	NSObject*<OS_dispatch_queue> _queue;

}
-(id)description;
-(void)resume;
-(unsigned)qualityOfService;
-(id)initWithQueue:(id)arg1 ;
-(void)suspend;
-(const char*)label;
-(void)setTargetQueue:(id)arg1 ;
-(id)_extensionManager;
-(void)dispatchAfterDelay:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)dispatchAfterInterval:(double)arg1 block:(/*^block*/id)arg2 ;
-(id)dispatchCancellable:(/*^block*/id)arg1 ;
-(id)dispatchCancellableAfterDelay:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(id)dispatchCancellableAfterInterval:(double)arg1 block:(/*^block*/id)arg2 ;
-(id)dispatchCancellableGroup:(id)arg1 notify:(/*^block*/id)arg2 ;
-(id)_extensionsForTargetingQueue;
-(id)extensionMatching:(/*^block*/id)arg1 ;
-(void)dispatchSync:(/*^block*/id)arg1 ;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(void)dispatchBarrierSync:(/*^block*/id)arg1 ;
-(void)dispatchBarrierAsync:(/*^block*/id)arg1 ;
-(void)dispatchAfter:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)dispatchGroup:(id)arg1 async:(/*^block*/id)arg2 ;
-(void)dispatchGroup:(id)arg1 notify:(/*^block*/id)arg2 ;
-(void)setSpecific:(void*)arg1 forKey:(void*)arg2 ;
-(void*)getSpecific:(void*)arg1 ;
-(id)_dispatchQueueForSetTargetQueue;
-(BOOL)assertOnQueue;
-(BOOL)assertQueueBarrier;
-(BOOL)assertNotOnQueue;
@end

