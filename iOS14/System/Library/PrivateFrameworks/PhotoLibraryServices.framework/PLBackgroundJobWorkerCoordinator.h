/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLBackgroundJobWorkerCoordinatorDelegate;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSArray, NSMutableArray, PLBackgroundJobWorkerPriorityTuple;

@interface PLBackgroundJobWorkerCoordinator : NSObject {

	NSArray* _workerClassesAsStrings;
	NSMutableArray* _pendingWorkers;
	PLBackgroundJobWorkerPriorityTuple* _currentWorker;
	os_unfair_lock_s _lock;
	id<PLBackgroundJobWorkerCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PLBackgroundJobWorkerCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)submitBundleForProcessing:(id)arg1 priority:(unsigned long long)arg2 ;
-(id)init;
-(id<PLBackgroundJobWorkerCoordinatorDelegate>)delegate;
-(void)stopAllBackgorundJobs;
-(id)_workersForBundle:(id)arg1 ;
-(void)setDelegate:(id<PLBackgroundJobWorkerCoordinatorDelegate>)arg1 ;
-(void)_processNextWorker;
-(BOOL)hasPendingJobsForBundle:(id)arg1 priority:(unsigned long long)arg2 ;
-(void)_handleAllWorkersCompleted;
-(void)_submitBundleForProcessing:(id)arg1 priority:(unsigned long long)arg2 ignorePriority:(BOOL)arg3 ;
-(id)initWithWorkerClassesAsStrings:(id)arg1 ;
-(void)submitBundleForProcessingOnAllWorkerPriorities:(id)arg1 ;
@end

