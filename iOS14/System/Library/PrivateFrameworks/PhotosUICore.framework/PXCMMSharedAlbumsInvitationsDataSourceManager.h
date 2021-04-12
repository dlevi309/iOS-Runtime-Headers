/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXCMMInvitationsDataSourceManager.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, PXCMMSharedAlbumsInvitationsDataSourceState, NSMutableOrderedSet, PXCMMSharedAlbumsInvitationsDataSource, NSString;

@interface PXCMMSharedAlbumsInvitationsDataSourceManager : PXCMMInvitationsDataSourceManager <PXPhotoLibraryUIChangeObserver> {

	NSObject*<OS_dispatch_queue> _workerQueue;
	BOOL _isLoading;
	BOOL _hasCreatedInitialDataSource;
	PXCMMSharedAlbumsInvitationsDataSourceState* __state;
	NSMutableOrderedSet* __remainingSharedAlbumObjectIDsToFetch;

}

@property (nonatomic,readonly) PXCMMSharedAlbumsInvitationsDataSource * dataSource; 
@property (nonatomic,retain) PXCMMSharedAlbumsInvitationsDataSourceState * _state;               //@synthesize _state=__state - In the implementation block
@property (retain) NSMutableOrderedSet * _remainingSharedAlbumObjectIDsToFetch;                  //@synthesize _remainingSharedAlbumObjectIDsToFetch=__remainingSharedAlbumObjectIDsToFetch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mockDataSourceManagerFromCMMDebugSharedAlbums;
-(id)createInitialDataSource;
-(PXCMMSharedAlbumsInvitationsDataSourceState *)_state;
-(id)sharedAlbums;
-(id)initWithAssetCollectionsFetchResult:(id)arg1 ;
-(id)_createSuggestionsDataSourceFromCurrentState;
-(void)_workerQueue_fetchRemainingSharedAlbumsInBatches;
-(void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3 ;
-(void)set_state:(PXCMMSharedAlbumsInvitationsDataSourceState *)arg1 ;
-(NSMutableOrderedSet *)_remainingSharedAlbumObjectIDsToFetch;
-(void)set_remainingSharedAlbumObjectIDsToFetch:(NSMutableOrderedSet *)arg1 ;
-(id)prepareForPhotoLibraryChange:(id)arg1 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2 ;
-(void)startLoadingIfNeeded;
-(void)dealloc;
@end

