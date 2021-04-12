/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_handleBundleComplete:(id)arg1 ;
-(BOOL)hasPendingJobsOnBundles:(id)arg1 priority:(unsigned long long)arg2 ;
-(void)stopBackgroundJobsOnAllBundles;
-(void)_handleAllBundlesCompleted;
-(void)setDelegate:(id<PLBackgroundJobLibraryCoordinatorDelegate>)arg1 ;
-(void)startBackgroundJobsOnBundles:(id)arg1 priority:(unsigned long long)arg2 ;
-(void)_submitNextQueuedBundle;
-(id)initWithWorkerCoordinator:(id)arg1 ;
-(void)workerCoordinatorDidFinishAllSubmittedJobsOnBundle:(id)arg1 ;
@end

