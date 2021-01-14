/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDCloudSyncManagerTaskQueueDelegate;
#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSMutableArray, HDCloudSyncManagerTask;

@interface HDCloudSyncManagerTaskQueue : NSObject {

	os_unfair_lock_s _lock;
	NSMutableArray* _pendingTasks;
	long long _pendingTasksBeingSorted;
	BOOL _isComputingActiveTask;
	BOOL _isStartingNextTask;
	HDCloudSyncManagerTask* _activeTask;
	id<HDCloudSyncManagerTaskQueueDelegate> _delegate;

}

@property (__weak) id<HDCloudSyncManagerTaskQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) long long pendingTaskCount; 
@property (readonly) BOOL hasActiveTask; 
@property (readonly) HDCloudSyncManagerTask * activeTask; 
-(void)addTask:(id)arg1 ;
-(id<HDCloudSyncManagerTaskQueueDelegate>)delegate;
-(long long)pendingTaskCount;
-(BOOL)_primitiveConsiderStartingNextTask;
-(BOOL)hasActiveTask;
-(void)setDelegate:(id<HDCloudSyncManagerTaskQueueDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(HDCloudSyncManagerTask *)activeTask;
-(void)_considerStartingNextTask;
@end

