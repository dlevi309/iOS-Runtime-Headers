/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue, PLMomentGenerationDataManagementPLHighlightItemModelReader;
@class NSMutableOrderedSet, NSMutableDictionary, NSMutableArray, NSObject, PLFrequentLocationManager, PLLocalCreationDateCreator;

@interface PLMomentGeneration : NSObject {

	BOOL _isGenerationPassInProgress;
	unsigned long long _inProgressCount;
	NSMutableOrderedSet* _pendingInsertsAndUpdates;
	NSMutableDictionary* _pendingDeletes;
	NSMutableOrderedSet* _pendingUpdatesForHighlights;
	NSMutableOrderedSet* _pendingMomentUpdatesForHighlights;
	NSMutableArray* _pendingCompletionBlocks;
	NSObject*<OS_dispatch_queue> _incrementalGenerationStateQueue;
	PLFrequentLocationManager* _frequentLocationManager;
	PLLocalCreationDateCreator* _localCreationDateCreator;
	id<PLMomentGenerationDataManagement><PLHighlightItemModelReader> _momentGenerationDataManager;

}

@property (nonatomic,__weak,readonly) id<PLMomentGenerationDataManagement><PLHighlightItemModelReader> momentGenerationDataManager;              //@synthesize momentGenerationDataManager=_momentGenerationDataManager - In the implementation block
+(id)dateIntervalsAroundSortedDates:(id)arg1 minimumIntervalDuration:(double)arg2 ;
-(void)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithCompletionBlock:(/*^block*/id)arg1 ;
-(id<PLMomentGenerationDataManagement><PLHighlightItemModelReader>)momentGenerationDataManager;
-(void)cleanupEmptyHighlightsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)updateHighlightTitlesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)processUnprocessedMomentLocationsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)processRecentHighlightsWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)allMomentsMetadataWriteToFile:(id)arg1 ;
-(id)allAssetMetadataWriteToFile:(id)arg1 ;
-(void)rebuildAllHighlightsWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)rebuildAllMomentsWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)momentGenerationStatus;
-(BOOL)rebuildAllMomentsWithManager:(id)arg1 error:(id*)arg2 ;
-(void)validateLibraryWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)generateWithAssetInsertsAndUpdates:(id)arg1 assetDeletes:(id)arg2 assetUpdatesForHighlights:(id)arg3 momentUpdatesForHighlights:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)initWithMomentGenerationDataManager:(id)arg1 ;
-(void)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithForceUpdateLocale:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)generateWithIncrementalDataCompletionHandler:(/*^block*/id)arg1 ;
-(void)saveChangesForAssetInsertsAndUpdates:(id)arg1 assetDeletes:(id)arg2 assetUpdatesForHighlights:(id)arg3 momentUpdatesForHighlights:(id)arg4 ;
-(BOOL)isGenerationPassInProgress;
-(void)_updateIncrementalMomentGeneration;
-(id)_newPublicGlobalUUIDsToAssetsMappingWithAssets:(id)arg1 ;
-(BOOL)_isAsset:(id)arg1 identicalToAssetForMoments:(id)arg2 ;
-(void)_runIncrementalGenerationPassWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_highlightGenerator;
-(void)_runMomentAndHighlightGenerationForAssets:(id)arg1 hiddenAssets:(id)arg2 updatedAssetIDsForHighlights:(id)arg3 updatedMomentIDsForHighlights:(id)arg4 affectedMoments:(id)arg5 highlightsWithDeletedMoments:(id)arg6 insertedOrUpdatedMoments:(id*)arg7 ;
-(BOOL)_writeDetails:(id)arg1 toFilepath:(id)arg2 withDefaultFilename:(id)arg3 ;
-(id)_detailsForAsset:(id)arg1 simpleOnly:(BOOL)arg2 ;
-(void)_clearReplayLog;
-(void)_appendAssetsToReplayLog:(id)arg1 forBatchUpdate:(BOOL)arg2 ;
-(id)_logEntryForAssets:(id)arg1 isBatchUpdate:(BOOL)arg2 ;
-(id)_detailsForMoment:(id)arg1 ;
@end

