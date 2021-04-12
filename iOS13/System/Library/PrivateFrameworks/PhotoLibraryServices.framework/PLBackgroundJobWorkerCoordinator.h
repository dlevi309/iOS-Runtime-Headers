/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id<PLBackgroundJobWorkerCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<PLBackgroundJobWorkerCoordinatorDelegate>)arg1 ;
-(void)stopAllBackgorundJobs;
-(void)submitBundleForProcessing:(id)arg1 priority:(unsigned long long)arg2 ;
-(BOOL)hasPendingJobsForBundle:(id)arg1 priority:(unsigned long long)arg2 ;
-(id)initWithWorkerClassesAsStrings:(id)arg1 ;
-(id)_workersForBundle:(id)arg1 ;
-(void)_processNextWorker;
-(void)_handleAllWorkersCompleted;
@end

