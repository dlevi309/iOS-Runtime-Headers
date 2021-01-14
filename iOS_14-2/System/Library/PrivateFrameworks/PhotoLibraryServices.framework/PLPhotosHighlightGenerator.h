/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLMomentGenerationDataManagementPLHighlightItemModelReader;
@class NSDateInterval, PLFrequentLocationManager, PLLocalCreationDateCreator, PLDateRangeTitleGenerator, PLHighlightHierarchy, NSMutableSet, PLPhotosHighlightClusterGenerator;

@interface PLPhotosHighlightGenerator : NSObject {

	BOOL _didCallBeginGeneration;
	NSDateInterval* _recentHighlightsDateInterval;
	PLFrequentLocationManager* _frequentLocationManager;
	PLLocalCreationDateCreator* _localCreationDateCreator;
	PLDateRangeTitleGenerator* _dateRangeTitleGenerator;
	PLHighlightHierarchy* _entitiesToUpdate;
	NSMutableSet* _highlightsWithDeletedAssets;
	NSMutableSet* _upsertedHighlights;
	NSMutableSet* _highlightsToDelete;
	id<PLMomentGenerationDataManagement><PLHighlightItemModelReader> _dataManager;
	NSMutableSet* _highlightsNeedingNewKeyAsset;

}

@property (nonatomic,retain) PLHighlightHierarchy * entitiesToUpdate;                                                          //@synthesize entitiesToUpdate=_entitiesToUpdate - In the implementation block
@property (nonatomic,retain) NSMutableSet * highlightsWithDeletedAssets;                                                       //@synthesize highlightsWithDeletedAssets=_highlightsWithDeletedAssets - In the implementation block
@property (nonatomic,retain) NSMutableSet * upsertedHighlights;                                                                //@synthesize upsertedHighlights=_upsertedHighlights - In the implementation block
@property (nonatomic,retain) NSMutableSet * highlightsToDelete;                                                                //@synthesize highlightsToDelete=_highlightsToDelete - In the implementation block
@property (assign,nonatomic) BOOL didCallBeginGeneration;                                                                      //@synthesize didCallBeginGeneration=_didCallBeginGeneration - In the implementation block
@property (assign,nonatomic,__weak) id<PLMomentGenerationDataManagement><PLHighlightItemModelReader> dataManager;              //@synthesize dataManager=_dataManager - In the implementation block
@property (nonatomic,readonly) NSDateInterval * recentHighlightsDateInterval;                                                  //@synthesize recentHighlightsDateInterval=_recentHighlightsDateInterval - In the implementation block
@property (nonatomic,readonly) PLPhotosHighlightClusterGenerator * highlightClusterGenerator; 
@property (nonatomic,retain) NSMutableSet * highlightsNeedingNewKeyAsset;                                                      //@synthesize highlightsNeedingNewKeyAsset=_highlightsNeedingNewKeyAsset - In the implementation block
@property (nonatomic,readonly) PLFrequentLocationManager * frequentLocationManager;                                            //@synthesize frequentLocationManager=_frequentLocationManager - In the implementation block
@property (nonatomic,readonly) PLLocalCreationDateCreator * localCreationDateCreator;                                          //@synthesize localCreationDateCreator=_localCreationDateCreator - In the implementation block
@property (nonatomic,readonly) PLDateRangeTitleGenerator * dateRangeTitleGenerator;                                            //@synthesize dateRangeTitleGenerator=_dateRangeTitleGenerator - In the implementation block
+(void)initialize;
+(id)_provisionalKeyAssetForMonthAndYearHighlight:(id)arg1 ;
+(id)_provisionalKeyAssetForDayHighlight:(id)arg1 ;
+(id)_bestAssetInAssets:(id)arg1 fallback:(BOOL)arg2 ;
+(id)userDefaults;
+(double)curationScoreForAsset:(id)arg1 ;
+(BOOL)assetEligibleForCuration:(id)arg1 ;
+(void)updateTitleForHighlights:(id)arg1 forKind:(unsigned short)arg2 forceUpdateLocale:(BOOL)arg3 dateRangeTitleGenerator:(id)arg4 ;
+(id)provisionalKeyAssetForHighlight:(id)arg1 ;
+(BOOL)_shouldUpdateKeyAssetForParentHighlight:(id)arg1 withKeyAssetObjectID:(id)arg2 ;
+(void)updateKeyAssetForHighlights:(id)arg1 ;
+(id)_provisionalKeyAssetForDayGroupHighlight:(id)arg1 ;
+(void)_updateParentHighlighNeedingNewKeyAsset:(id)arg1 withProvisionalKeyAsset:(id)arg2 updatedHighlights:(id)arg3 ;
+(BOOL)assetEligibleForRecents:(id)arg1 ;
-(PLDateRangeTitleGenerator *)dateRangeTitleGenerator;
-(void)updateCurationForHighlight:(id)arg1 withAssetsBelongingToCuration:(id)arg2 ;
-(id)_fetchMomentsWithLocationTypeUnprocessed;
-(id)_highlightMomentClustersForMoments:(id)arg1 excludingMomentIds:(id)arg2 ;
-(void)generateHighlightListForUpdatedHighlights:(id)arg1 deletedHighlights:(id)arg2 ;
-(PLLocalCreationDateCreator *)localCreationDateCreator;
-(id)_lastHighlightTitlesUpdateDay;
-(void)resetDayGroupCurationForAsset:(id)arg1 ;
-(id)initWithDataManager:(id)arg1 frequentLocationManager:(id)arg2 localCreationDateCreator:(id)arg3 ;
-(id)_titleForAggregationDayGroupHighlight:(id)arg1 ;
-(NSMutableSet *)highlightsWithDeletedAssets;
-(NSDateInterval *)recentHighlightsDateInterval;
-(void)updateHighlightTitles;
-(void)beginGenerationWithAssets:(id)arg1 hiddenAssets:(id)arg2 ;
-(id)_highlightToReuseForMoments:(id)arg1 ;
-(void)setDidCallBeginGeneration:(BOOL)arg1 ;
-(void)_insertDayPhotosHighlightCluster:(id)arg1 ;
-(void)generateHighlightsForUpsertedMoments:(id)arg1 frequentLocationsDidChange:(BOOL)arg2 ;
-(void)_updateDayGroupHighlight:(id)arg1 withNewAssets:(id)arg2 ;
-(BOOL)didCallBeginGeneration;
-(id)_insertDayGroupPhotosHighlightCluster:(id)arg1 ;
-(void)cleanupEmptyHighlights;
-(void)_consumeHighlightItemListChanges:(id)arg1 forKind:(unsigned short)arg2 rule:(id)arg3 resultBlock:(/*^block*/id)arg4 ;
-(BOOL)setDefaultVisibilityStateForHighlight:(id)arg1 withHighlightCluster:(id)arg2 ;
-(void)registerHighlightsWithDeletedMoments:(id)arg1 ;
-(BOOL)_updateHighlightProperties:(id)arg1 fromHighlightCluster:(id)arg2 ;
-(void)setEntitiesToUpdate:(PLHighlightHierarchy *)arg1 ;
-(void)setDataManager:(id<PLMomentGenerationDataManagement><PLHighlightItemModelReader>)arg1 ;
-(PLPhotosHighlightClusterGenerator *)highlightClusterGenerator;
-(void)_updateDayHighlight:(id)arg1 withNewAssets:(id)arg2 ;
-(id<PLMomentGenerationDataManagement><PLHighlightItemModelReader>)dataManager;
-(NSMutableSet *)upsertedHighlights;
-(void)setUpsertedHighlights:(NSMutableSet *)arg1 ;
-(PLFrequentLocationManager *)frequentLocationManager;
-(void)_setLastHighlightTitlesUpdateDay:(id)arg1 ;
-(NSMutableSet *)highlightsNeedingNewKeyAsset;
-(void)setHighlightsToDelete:(NSMutableSet *)arg1 ;
-(void)updateRecentHighlightCurationForHighlight:(id)arg1 ;
-(PLHighlightHierarchy *)entitiesToUpdate;
-(void)resetPreviousRecentHighlightCurationForHighlight:(id)arg1 ;
-(id)updateElectedEventForUpdatedMonths:(id)arg1 ;
-(void)updateHighlightNeedingNewKeyAssetsWithAsset:(id)arg1 ;
-(id)fetchAllOngoingTripDayGroupHighlights;
-(void)setHighlightsNeedingNewKeyAsset:(NSMutableSet *)arg1 ;
-(void)_resetProperties;
-(id)_fetchMomentsRequiringLocationProcessingWhenFrequentLocationsChanged;
-(void)finishGeneration;
-(void)processUnprocessedMomentLocations;
-(BOOL)_highlightTypeSupportsVisibilityStateDayOnly:(unsigned short)arg1 ;
-(void)setHighlightsWithDeletedAssets:(NSMutableSet *)arg1 ;
-(NSMutableSet *)highlightsToDelete;
-(id)_collectMomentsRequiringReprocessingFromMoments:(id)arg1 withAllMoments:(id)arg2 ;
-(void)processRecentHighlights;
-(id)fetchAllRecentHighlights;
-(id)_fetchAllMoments;
@end

