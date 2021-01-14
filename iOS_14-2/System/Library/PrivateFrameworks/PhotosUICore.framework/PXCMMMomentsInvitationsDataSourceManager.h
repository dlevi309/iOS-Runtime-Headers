/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXCMMInvitationsDataSourceManager.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, PXCMMMomentsInvitationsDataSourceState, NSMutableOrderedSet, NSString;

@interface PXCMMMomentsInvitationsDataSourceManager : PXCMMInvitationsDataSourceManager <PXPhotoLibraryUIChangeObserver> {

	NSObject*<OS_dispatch_queue> _workerQueue;
	BOOL _isLoading;
	BOOL _hasCreatedInitialDataSource;
	PXCMMMomentsInvitationsDataSourceState* __state;
	NSMutableOrderedSet* __remainingAssetCollectionObjectIDsToFetch;

}

@property (nonatomic,retain) PXCMMMomentsInvitationsDataSourceState * _state;                    //@synthesize _state=__state - In the implementation block
@property (retain) NSMutableOrderedSet * _remainingAssetCollectionObjectIDsToFetch;              //@synthesize _remainingAssetCollectionObjectIDsToFetch=__remainingAssetCollectionObjectIDsToFetch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(id)mockDataSourceManagerFromRecentLargeMoments;
-(id)createInitialDataSource;
-(PXCMMMomentsInvitationsDataSourceState *)_state;
-(id)init;
-(id)initWithAssetCollectionsFetchResult:(id)arg1 ;
-(void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3 ;
-(void)set_state:(PXCMMMomentsInvitationsDataSourceState *)arg1 ;
-(id)prepareForPhotoLibraryChange:(id)arg1 ;
-(id)assetCollections;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2 ;
-(void)startLoadingIfNeeded;
-(id)_createInvitationsDataSourceFromCurrentState;
-(void)_workerQueue_fetchRemainingAssetCollectionsInBatches;
-(NSMutableOrderedSet *)_remainingAssetCollectionObjectIDsToFetch;
-(void)set_remainingAssetCollectionObjectIDsToFetch:(NSMutableOrderedSet *)arg1 ;
-(void)dealloc;
@end

