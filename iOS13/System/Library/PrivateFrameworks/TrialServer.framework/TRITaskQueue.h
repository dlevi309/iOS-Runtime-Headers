/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <libobjc.A.dylib/TRITaskQueuing.h>

@protocol TRITaskPersisting;
@class NSOperationQueue, NSMutableDictionary, TRIClient, NSDate;

@interface TRITaskQueue : NSObject <TRITaskQueuing> {

	BOOL _stopRequested;
	id<TRITaskPersisting> _taskStore;
	NSOperationQueue* _queue;
	NSMutableDictionary* _queuedTasks;
	NSMutableDictionary* _xpcActivities;
	TRIClient* _client;
	NSDate* _nextScheduledTaskStartTime;

}

@property (readonly) TRIClient * client;              //@synthesize client=_client - In the implementation block
+(id)sharedInstance;
+(id)instanceWithClient:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(void)stop;
-(BOOL)shouldContinue;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(TRIClient *)client;
-(BOOL)addTask:(id)arg1 ;
-(BOOL)cancelTask:(id)arg1 ;
-(BOOL)stopRequested;
-(BOOL)cancelTasksWithTag:(id)arg1 ;
-(id)initWithTaskStore:(id)arg1 queue:(id)arg2 client:(id)arg3 ;
-(id)topoSortedTasks:(id)arg1 ;
-(BOOL)queueTasks:(id)arg1 ;
-(BOOL)queueScheduledTasks:(id)arg1 ;
-(BOOL)removeTaskWithId:(id)arg1 ;
-(void)finishedTask:(id)arg1 withId:(id)arg2 status:(int)arg3 ;
-(id)createOperationWithTask:(id)arg1 withId:(id)arg2 dependencies:(id)arg3 taskMap:(id)arg4 ;
-(BOOL)_addTask:(id)arg1 taskIds:(id)arg2 ;
-(id)_addTask:(id)arg1 withDependencies:(id)arg2 ;
-(BOOL)_queueScheduledTasks:(id)arg1 nextTaskStartTime:(id*)arg2 ;
-(void)registerXPCActivityForDate:(id)arg1 ;
-(id)immediateExecutionTasksForDate:(id)arg1 nextStartTime:(id*)arg2 tasks:(id)arg3 ;
-(BOOL)resumeWithXPCActivityDescriptor:(id)arg1 executeWhenSuspended:(/*^block*/id)arg2 ;
-(BOOL)updateActivity:(id)arg1 withStartDate:(id)arg2 ;
-(BOOL)runActivity:(id)arg1 ;
-(BOOL)containsTaskId:(id)arg1 ;
-(BOOL)queueAllScheduledTasks;
@end

