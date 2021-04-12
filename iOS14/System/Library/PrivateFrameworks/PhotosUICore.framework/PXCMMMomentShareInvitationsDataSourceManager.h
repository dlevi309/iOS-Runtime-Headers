/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXCMMInvitationsDataSourceManager.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@protocol OS_dispatch_queue;
@class PHPhotoLibrary, NSObject, PXCMMMomentShareInvitationsDataSourceState, NSMutableOrderedSet, PXCMMMomentShareInvitationsDataSource, NSString;

@interface PXCMMMomentShareInvitationsDataSourceManager : PXCMMInvitationsDataSourceManager <PXPhotoLibraryUIChangeObserver> {

	PHPhotoLibrary* _photoLibrary;
	NSObject*<OS_dispatch_queue> _workerQueue;
	BOOL _isLoading;
	BOOL _hasCreatedInitialDataSource;
	PXCMMMomentShareInvitationsDataSourceState* _state;
	NSMutableOrderedSet* _remainingMomentShareObjectIDsToFetch;

}

@property (nonatomic,readonly) PXCMMMomentShareInvitationsDataSource * dataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dataSourceManager;
+(id)mostRecentCreationDate;
+(id)emptyDataSourceManager;
+(id)_dataSourceManagerWithPredicate:(id)arg1 ;
-(id)createInitialDataSource;
-(id)init;
-(id)prepareForPhotoLibraryChange:(id)arg1 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2 ;
-(id)_initWithFetchResult:(id)arg1 ;
-(id)momentShares;
-(void)_startLoadingIfNeeded;
-(void)_workerQueue_fetchRemainingMomentSharesInBatchesWithMomentShares:(id)arg1 ;
-(void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3 changedObjects:(id)arg4 ;
-(void)dealloc;
@end

