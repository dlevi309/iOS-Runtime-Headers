/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@protocol PFDispatchQueueExtending <NSObject>
@required
-(void)installOnQueue:(id)arg1;
-(id)queue:(id)arg1 willTargetQueue:(id)arg2;
-(id)queue:(id)arg1 receivedDispatchSync:(/*^block*/id)arg2;
-(id)queue:(id)arg1 receivedDispatchBarrierSync:(/*^block*/id)arg2;
-(id)queue:(id)arg1 receivedDispatchAsync:(/*^block*/id)arg2;
-(id)queue:(id)arg1 receivedDispatchBarrierAsync:(/*^block*/id)arg2;
-(id)queue:(id)arg1 receivedDispatchAfter:(/*^block*/id)arg2;
-(id)queue:(id)arg1 receivedDispatchGroup:(id)arg2 async:(/*^block*/id)arg3;
-(id)queue:(id)arg1 receivedDispatchGroup:(id)arg2 notify:(/*^block*/id)arg3;
-(void)queue:(id)arg1 willEnqueueSync:(id)arg2;
-(void)queue:(id)arg1 willEnqueueAsync:(id)arg2 when:(/*^block*/id)arg3;
-(void)queue:(id)arg1 didDequeue:(id)arg2 skipExecution:(/*^block*/id)arg3;
-(void)queue:(id)arg1 willExecute:(id)arg2;
-(void)queue:(id)arg1 didExecute:(id)arg2;
-(void)queue:(id)arg1 skippedExecuting:(id)arg2;
-(void)queueDidSuspend:(id)arg1;
-(void)queueWillResume:(id)arg1;

@end

