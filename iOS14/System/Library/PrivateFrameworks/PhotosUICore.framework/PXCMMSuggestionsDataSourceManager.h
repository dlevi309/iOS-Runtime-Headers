/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSectionedDataSourceManager.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, PXCMMSuggestionsDataSourceState, NSMutableOrderedSet, PXCMMSuggestionsDataSourceContext, PXCMMSuggestionsDataSource, NSString;

@interface PXCMMSuggestionsDataSourceManager : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver> {

	NSObject*<OS_dispatch_queue> _workerQueue;
	BOOL _isLoading;
	BOOL _hasCreatedInitialDataSource;
	PXCMMSuggestionsDataSourceState* __state;
	NSMutableOrderedSet* __remainingAssetCollectionsObjectIDsToFetch;
	PXCMMSuggestionsDataSourceContext* _context;

}

@property (nonatomic,retain) PXCMMSuggestionsDataSourceState * _state;                            //@synthesize _state=__state - In the implementation block
@property (retain) NSMutableOrderedSet * _remainingAssetCollectionsObjectIDsToFetch;              //@synthesize _remainingAssetCollectionsObjectIDsToFetch=__remainingAssetCollectionsObjectIDsToFetch - In the implementation block
@property (nonatomic,readonly) PXCMMSuggestionsDataSourceContext * context;                       //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) PXCMMSuggestionsDataSource * dataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(id)currentDataSourceManager;
+(id)keyPathsAffectingCurrentDataSourceManager;
+(id)dataSourceManager;
+(id)_fetchResultForMockRecentLargeMomentsDataSourceManager;
+(id)_fetchResultForTypeGraphWithContext:(id)arg1 ;
+(id)_fetchResultForEmptyDataSourceManager;
+(id)dataSourceManagerWithParticipants:(id)arg1 fetchLimit:(long long)arg2 shouldShowAccepted:(BOOL)arg3 message:(id)arg4 date:(id)arg5 matchingStrategy:(unsigned long long)arg6 ;
+(id)mostRecentCreationDate;
+(id)emptyDataSourceManager;
+(id)mockDataSourceManagerFromRecentLargeMoments;
-(id)createInitialDataSource;
-(PXCMMSuggestionsDataSourceState *)_state;
-(id)init;
-(PXCMMSuggestionsDataSourceContext *)context;
-(id)initWithAssetCollectionsFetchResult:(id)arg1 ;
-(id)_createSuggestionsDataSourceFromCurrentState;
-(void)set_state:(PXCMMSuggestionsDataSourceState *)arg1 ;
-(id)prepareForPhotoLibraryChange:(id)arg1 ;
-(id)assetCollections;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2 ;
-(id)initWithContext:(id)arg1 assetCollectionsFetchResult:(id)arg2 ;
-(NSMutableOrderedSet *)_remainingAssetCollectionsObjectIDsToFetch;
-(void)_workerQueue_fetchRemainingAssetCollectionsInBatchesWithAssetCollections:(id)arg1 ;
-(void)set_remainingAssetCollectionsObjectIDsToFetch:(NSMutableOrderedSet *)arg1 ;
-(void)_startLoadingIfNeeded;
-(void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3 changedObjects:(id)arg4 ;
@end

