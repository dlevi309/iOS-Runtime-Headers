/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface HDBackgroundTaskScheduler : NSObject {

	NSMutableDictionary* _clients;
	NSMutableDictionary* _tasksQueuedForDelivery;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _clientQueue;

}
-(void)unregisterClientWithName:(id)arg1 ;
-(id)init;
-(id)taskWithName:(id)arg1 forClientNamed:(id)arg2 ;
-(void)_queue_deliverJob:(id)arg1 withName:(const char*)arg2 ;
-(void)_queue_addTask:(id)arg1 withName:(id)arg2 forClientNamed:(id)arg3 ;
-(void)_queue_registerClientWithName:(id)arg1 taskHandler:(/*^block*/id)arg2 ;
-(id)_queue_taskWithName:(id)arg1 forClientNamed:(id)arg2 ;
-(void)_queue_removeTaskWithName:(id)arg1 forClientNamed:(id)arg2 ;
-(void)addTask:(id)arg1 withName:(id)arg2 forClientNamed:(id)arg3 ;
-(void)registerClientWithName:(id)arg1 taskHandler:(/*^block*/id)arg2 ;
-(void)removeTaskWithName:(id)arg1 forClientNamed:(id)arg2 ;
@end

