/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLBackgroundJobWorkerCoordinatorDelegate.h>

@protocol PLBackgroundJobLibraryCoordinatorDelegate;
@class NSMutableArray, PLPhotoLibraryBundlePriorityTuple, PLBackgroundJobWorkerCoordinator, NSString;

@interface PLBackgroundJobLibraryCoordinator : NSObject <PLBackgroundJobWorkerCoordinatorDelegate> {

	NSMutableArray* _pendingPhotoLibraryBundles;
	PLPhotoLibraryBundlePriorityTuple* _currentPhotoLibraryBundle;
	PLBackgroundJobWorkerCoordinator* _workerCoordinator;
	os_unfair_lock_s _lock;
	id<PLBackgroundJobLibraryCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PLBackgroundJobLibraryCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PLBackgroundJobLibraryCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<PLBackgroundJobLibraryCoordinatorDelegate>)arg1 ;
-(BOOL)hasPendingJobsOnBundles:(id)arg1 priority:(unsigned long long)arg2 ;
-(void)stopBackgroundJobsOnAllBundles;
-(void)startBackgroundJobsOnBundles:(id)arg1 priority:(unsigned long long)arg2 ;
-(void)workerCoordinatorDidFinishAllSubmittedJobsOnBundle:(id)arg1 ;
-(id)initWithWorkerCoordinator:(id)arg1 ;
-(void)_submitNextQueuedBundle;
-(void)_handleBundleComplete:(id)arg1 ;
-(void)_handleAllBundlesCompleted;
@end

