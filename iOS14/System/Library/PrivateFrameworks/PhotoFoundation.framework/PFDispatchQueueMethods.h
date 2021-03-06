/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@protocol PFDispatchQueueMethods
@required
-(void)suspend;
-(id)dispatchCancellableAfterInterval:(double)arg1 block:(/*^block*/id)arg2;
-(id)dispatchCancellableAfterDelay:(unsigned long long)arg1 block:(/*^block*/id)arg2;
-(void)dispatchAsync:(/*^block*/id)arg1;
-(void)dispatchAsyncWithQOS:(unsigned)arg1 block:(/*^block*/id)arg2;
-(void)dispatchAsyncWithCurrentQOS:(/*^block*/id)arg1;
-(void)dispatchBarrierAsyncWithCurrentQOS:(/*^block*/id)arg1;
-(void)setSpecific:(void*)arg1 forKey:(void*)arg2;
-(void)dispatchAfterDelay:(unsigned long long)arg1 block:(/*^block*/id)arg2;
-(BOOL)assertOnQueue;
-(id)dispatchCancellable:(/*^block*/id)arg1;
-(void)dispatchBarrierAsyncWithQOS:(unsigned)arg1 block:(/*^block*/id)arg2;
-(void)dispatchAfterInterval:(double)arg1 block:(/*^block*/id)arg2;
-(void)dispatchAfter:(unsigned long long)arg1 block:(/*^block*/id)arg2;
-(void)dispatchGroup:(id)arg1 notify:(/*^block*/id)arg2;
-(void)dispatchGroup:(id)arg1 async:(/*^block*/id)arg2;
-(void)dispatchBarrierAsync:(/*^block*/id)arg1;
-(void)dispatchSync:(/*^block*/id)arg1;
-(id)dispatchCancellableGroup:(id)arg1 notify:(/*^block*/id)arg2;
-(BOOL)assertNotOnQueue;
-(unsigned)qualityOfService;
-(void)dispatchBarrierSync:(/*^block*/id)arg1;
-(void*)getSpecific:(void*)arg1;
-(BOOL)assertQueueBarrier;
-(id)extensionMatching:(/*^block*/id)arg1;
-(void)resume;
-(const char*)label;

@end

