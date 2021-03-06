/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSString, NSArray;

@interface HDAsynchronousTaskTree : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _queue_pendingTasks;
	NSMutableArray* _queue_pendingSubtasks;
	NSMutableArray* _queue_taskErrors;
	AB _canceled;
	AB _rejectAddTask;
	BOOL _queue_started;
	BOOL _queue_finished;
	/*^block*/id _queue_completion;
	NSObject*<OS_dispatch_queue> _default_task_queue;
	NSString* _groupDescription;

}

@property (nonatomic,copy,readonly) NSString * groupDescription;              //@synthesize groupDescription=_groupDescription - In the implementation block
@property (nonatomic,readonly) NSArray * allErrors; 
-(void)addTask:(/*^block*/id)arg1 ;
-(void)begin;
-(NSArray *)allErrors;
-(NSString *)groupDescription;
-(id)description;
-(void)cancel;
-(id)initWithDescription:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addTaskOnQueue:(id)arg1 task:(/*^block*/id)arg2 ;
-(void)addTaskOnQueue:(id)arg1 timeout:(double)arg2 task:(/*^block*/id)arg3 ;
-(void)addCheckpointTaskOnQueue:(id)arg1 task:(/*^block*/id)arg2 ;
-(void)_queue_beginNextTask;
-(void)_queue_insertPendingSubtasks;
-(void)_queue_runPendingCheckpointTasks:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_reportResult:(long long)arg1 ;
-(void)_queue_completeCurrentTaskWithResult:(long long)arg1 error:(id)arg2 ;
-(void)addTaskWithTimeout:(double)arg1 task:(/*^block*/id)arg2 ;
-(void)addCheckpointTask:(/*^block*/id)arg1 ;
@end

