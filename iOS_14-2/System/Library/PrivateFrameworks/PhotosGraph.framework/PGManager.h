/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@protocol OS_dispatch_queue, OS_os_log, PGGraphHealthRecording;
@class NSURL, NSObject, PGGraph, NSString, PHPhotoLibrary, PGMemoryController, PGCurationManager, NSMutableDictionary, CPAnalytics, NSArray;

@interface PGManager : NSObject {

	NSURL* _cachedGraphPersistenceParentDirectoryURL;
	AQ _fullGraphRebuildStamp;
	NSObject*<OS_dispatch_queue> _graphAccessQueue;
	NSObject*<OS_dispatch_queue> _applicationDataQueue;
	AQ _numberOfCurrentGraphAccesses;
	NSObject*<OS_dispatch_queue> _graphUpdateQueue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	PGGraph* _graph;
	NSString* _graphName;
	BOOL _shouldPostGraphAvailableNotification;
	BOOL _photoLibraryIsReadonly;
	PHPhotoLibrary* _photoLibrary;
	unsigned long long _libraryAnalysisState;
	PGMemoryController* _memoryController;
	PGCurationManager* _curationManager;
	NSURL* _metadataSnapshotOutputPathURL;
	NSMutableDictionary* _curationScoreByAsset;
	NSMutableDictionary* _interactionScoreByAsset;
	NSObject*<OS_os_log> _loggingConnection;
	NSObject*<OS_os_log> _memoriesLoggingConnection;
	NSObject*<OS_os_log> _relatedLoggingConnection;
	NSObject*<OS_os_log> _ingestLoggingConnection;
	NSObject*<OS_os_log> _graphLoggingConnection;
	NSObject*<OS_os_log> _enrichmentLoggingConnection;
	NSObject*<OS_os_log> _guessWhoLoggingConnection;
	NSObject*<OS_os_log> _suggestionsLoggingConnection;
	NSObject*<OS_os_log> _metricsLoggingConnection;
	id<PGGraphHealthRecording> _graphHealthRecorder;
	CPAnalytics* _analytics;

}

@property (nonatomic,copy,readonly) NSArray * availableMetricEvents; 
@property (readonly) unsigned long long libraryAnalysisState; 
@property (copy,readonly) NSString * graphName;                                                   //@synthesize graphName=_graphName - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> graphUpdateQueue;              //@synthesize graphUpdateQueue=_graphUpdateQueue - In the implementation block
@property (retain) PGGraph * graph;                                                               //@synthesize graph=_graph - In the implementation block
@property (assign) unsigned long long libraryAnalysisState;                                       //@synthesize libraryAnalysisState=_libraryAnalysisState - In the implementation block
@property (readonly) PGMemoryController * memoryController;                                       //@synthesize memoryController=_memoryController - In the implementation block
@property (readonly) NSMutableDictionary * curationScoreByAsset;                                  //@synthesize curationScoreByAsset=_curationScoreByAsset - In the implementation block
@property (readonly) NSMutableDictionary * interactionScoreByAsset;                               //@synthesize interactionScoreByAsset=_interactionScoreByAsset - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> loggingConnection;                            //@synthesize loggingConnection=_loggingConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> memoriesLoggingConnection;                    //@synthesize memoriesLoggingConnection=_memoriesLoggingConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> relatedLoggingConnection;                     //@synthesize relatedLoggingConnection=_relatedLoggingConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> ingestLoggingConnection;                      //@synthesize ingestLoggingConnection=_ingestLoggingConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> graphLoggingConnection;                       //@synthesize graphLoggingConnection=_graphLoggingConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> enrichmentLoggingConnection;                  //@synthesize enrichmentLoggingConnection=_enrichmentLoggingConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> suggestionsLoggingConnection;                 //@synthesize suggestionsLoggingConnection=_suggestionsLoggingConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> guessWhoLoggingConnection;                    //@synthesize guessWhoLoggingConnection=_guessWhoLoggingConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> metricsLoggingConnection;                     //@synthesize metricsLoggingConnection=_metricsLoggingConnection - In the implementation block
@property (nonatomic,retain) NSURL * graphPersistenceParentDirectoryURL; 
@property (readonly) BOOL photoLibraryIsReadonly;                                                 //@synthesize photoLibraryIsReadonly=_photoLibraryIsReadonly - In the implementation block
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;                                     //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,readonly) CPAnalytics * analytics;                                           //@synthesize analytics=_analytics - In the implementation block
@property (nonatomic,retain) NSURL * metadataSnapshotOutputPathURL;                               //@synthesize metadataSnapshotOutputPathURL=_metadataSnapshotOutputPathURL - In the implementation block
@property (nonatomic,readonly) id<PGGraphHealthRecording> graphHealthRecorder;                    //@synthesize graphHealthRecorder=_graphHealthRecorder - In the implementation block
@property (nonatomic,readonly) PGCurationManager * curationManager;                               //@synthesize curationManager=_curationManager - In the implementation block
+(void)initialize;
+(id)_locationsByDateIntervalForAssetsMetadata:(id)arg1 ;
+(double)durationForExistingMemoriesOverlapCheckWithBeta:(double)arg1 ;
+(unsigned long long)numberOfExistingMemoriesToKeepForOverlapCheckWithBeta:(double)arg1 ;
+(id)meaningsForSurvey;
+(BOOL)geoServiceProviderDidChangeForGraph:(id)arg1 ;
+(BOOL)shouldInvalidatePersistentGraph:(id)arg1 ;
+(Class)graphClass;
+(BOOL)shouldInvalidateConstructionGraph:(id)arg1 ;
+(id)stringFromPGPrecision:(unsigned long long)arg1 ;
+(id)stringFromPGDuration:(unsigned long long)arg1 ;
+(id)stringFromPGRelatedType:(unsigned long long)arg1 ;
+(BOOL)photosChallengeIsEnabled;
+(BOOL)clientIsPhotoAnalysis;
+(BOOL)memoriesAreWorthNotifying:(id)arg1 ;
+(id)placeKeywords;
+(id)m5IncompatibleKeywords;
+(id)m5IncompatibleMoods;
+(id)m5IncompatibleMeaningLabels;
+(id)m5TimeConditionalKeywords;
+(BOOL)categoryIsUsableWithConditionalKeywordsForMemory:(id)arg1 ;
+(id)allRecomputedTripMomentsInGraph:(id)arg1 ;
+(id)exportableDictionaryFromKeywords:(id)arg1 ;
+(id)matchingWeightToDictionary;
-(id)fastGraphExportFullPath;
-(void)performApplicationDataBlock:(/*^block*/id)arg1 ;
-(void)_reloadGraphWithProgressBlock:(/*^block*/id)arg1 ;
-(id)_generateAllMemoriesWithSeasonMemoryGenerator:(id)arg1 options:(id)arg2 ;
-(id)_stringDescriptionForPets;
-(id)_keywordsSortedByPriority:(id)arg1 ;
-(id)_stringDescriptionForMeNode:(id)arg1 ;
-(PGCurationManager *)curationManager;
-(id)blacklistedFeatures;
-(void)_invalidatePersistentCachesForGeoServiceProviderChange;
-(NSObject*<OS_os_log>)enrichmentLoggingConnection;
-(BOOL)memoriesOfTheDayAreWorthNotifying;
-(id)initForTesting;
-(id)_weekendsForTargetDomain:(unsigned short)arg1 ;
-(PGGraph *)graph;
-(id)surveyMomentClustersForTrips;
-(id)_partOfDayStatistics;
-(id)keywordsForAsset:(id)arg1 relatedType:(unsigned long long)arg2 ;
-(id)_momentNodesForMemory:(id)arg1 ;
-(id)initWithGraph:(id)arg1 ;
-(id)utilityAssetInformation;
-(BOOL)isLocationNearHomeOrWork:(id)arg1 ;
-(id)_peopleVisionBiologicalSexStatistics;
-(NSMutableDictionary *)curationScoreByAsset;
-(id)allPeopleNames;
-(id)_peopleNameBiologicalSexStatistics;
-(NSObject*<OS_os_log>)graphLoggingConnection;
-(id)_filterRelevantFeatures:(id)arg1 ;
-(NSObject*<OS_os_log>)ingestLoggingConnection;
-(void)waitUntilFinishedUsingBlock:(/*^block*/id)arg1 ;
-(CPAnalytics *)analytics;
-(id)_yearsStatisticsForCurrentPhotoLibrary;
-(BOOL)swapInGraph:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)setLibraryAnalysisState:(unsigned long long)arg1 ;
-(id)_diagnosticSummaryInfoForMemory:(id)arg1 ;
-(id)UUIDForMoment:(id)arg1 ;
-(id)_dateFormatter;
-(NSObject*<OS_dispatch_queue>)graphUpdateQueue;
-(id)featureVectorsForMoment:(id)arg1 ;
-(id)searchMetadataWithOptions:(id)arg1 ;
-(NSObject*<OS_os_log>)memoriesLoggingConnection;
-(NSObject*<OS_os_log>)loggingConnection;
-(BOOL)saveGraphToURL:(id)arg1 ;
-(id)moodKeywordsForMemory:(id)arg1 ;
-(void)_unloadGraph;
-(id)businessItemsForAllMoments;
-(id)snapshotOuputFilePathURLForKey:(id)arg1 ;
-(id)maximalSocialGroupsForPersonIdentifiers:(id)arg1 ;
-(void)commonInitWithProgressBlock:(/*^block*/id)arg1 ;
-(BOOL)isInterestingForMoment:(id)arg1 ;
-(id)memoriesWithOptions:(id)arg1 ;
-(long long)validatePHObject:(id)arg1 graphRelationsFeatureValidator:(id)arg2 error:(id*)arg3 ;
-(id)_stringDescriptionForPublicEvents:(BOOL)arg1 ;
-(id)initWithReadonlyPhotoLibrary:(id)arg1 ;
-(id)statisticsWithTypeStrings:(id)arg1 ;
-(void)peopleSuggestionLearning;
-(PGMemoryController *)memoryController;
-(id)_fetchLocationsFromMemory:(id)arg1 ;
-(BOOL)copyGraphPersistentStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(NSArray *)availableMetricEvents;
-(id)_highlightTitleStatistics;
-(id)memoryTreeWithOptions:(id)arg1 ;
-(NSObject*<OS_os_log>)suggestionsLoggingConnection;
-(id)_fetchResultMatchingInternalPredicate:(id)arg1 ;
-(id)momentsForPet;
-(void)unloadGraph;
-(id)defaultGraphExportFullPath;
-(BOOL)locationIsInSupersets:(id)arg1 ;
-(id)_oneOnOneTrips;
-(id)relatedCollectionsForMemoryTripOrWeekend:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)_highlightEstimatesStatistics;
-(id)createMemoriesWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)_peopleVisionAgeStatistics;
-(void)_invalidatePersistentCaches;
-(id)highlightsForKeyAssetSurvey;
-(void)matchFeatureVector:(id)arg1 options:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)relatedCollectionsForMoment:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 generateTitles:(BOOL)arg4 error:(id*)arg5 ;
-(void)performAsynchronousBarrierGraphWriteUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)_numberOfMomentsOverWeekends;
-(id)suggestedRecipientsForAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 sharingOptions:(id)arg3 ;
-(id)initWithGraph:(id)arg1 photoLibrary:(id)arg2 ;
-(id)_poiStatistics;
-(unsigned long long)_numberOfFamilyHolidayMoments;
-(id)titleTupleForMoment:(id)arg1 format:(long long)arg2 error:(id*)arg3 ;
-(BOOL)isBusy;
-(id)inferredContactIdentifierForPersonLocalIdentifier:(id)arg1 ;
-(id)_stringDescriptionForMusicSummaryOnly:(BOOL)arg1 ;
-(id)_relatedCollectionsForMemoryTripOrWeekend:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 assetCollectionForKeywords:(id)arg4 error:(id*)arg5 ;
-(id)relatedCollectionsForAssetCollection:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)curationDebugInformationForAssetCollection:(id)arg1 options:(id)arg2 ;
-(void)updateCurrentGraphWithGraphUpdate:(id)arg1 withRecipe:(id)arg2 progressBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)publicEventsForAllMoments;
-(id)_defaultStatistics:(BOOL)arg1 forDiagnostics:(BOOL)arg2 ;
-(id)_peopleRelationshipsStatisticsIncludingDebugInfo:(BOOL)arg1 ;
-(id)_behavioralStatistics;
-(BOOL)invalidatePersistentGraph;
-(id)uninterestingMoments;
-(id)allYearsForPeopleWithName:(id)arg1 ;
-(id<PGGraphHealthRecording>)graphHealthRecorder;
-(id)graphForLiveUpdateAtURL:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)_memoriesWithOptions:(id)arg1 isFinalOne:(BOOL)arg2 ;
-(id)_checkConsistencyOfGraph:(id)arg1 ;
-(id)getMetadataFromMemory:(id)arg1 error:(id*)arg2 ;
-(id)relatedDebugInformationBetweenReferenceAssetCollection:(id)arg1 andRelatedAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 precision:(unsigned long long)arg4 ;
-(void)cancelLibraryAnalysisWithCompletionBlock:(/*^block*/id)arg1 progessBlock:(/*^block*/id)arg2 ;
-(id)_stringDescriptionForInterestingAreas:(id)arg1 ;
-(void)_exportGraphToDiskOrRemoveItDependingOnUserDefault;
-(id)memoryWithOptions:(id)arg1 ;
-(id)init;
-(id)_stringDescriptionForSocialGroups:(id)arg1 includeWeight:(BOOL)arg2 ;
-(PHPhotoLibrary *)photoLibrary;
-(NSObject*<OS_os_log>)relatedLoggingConnection;
-(id)moodMeaningIdentifiersForAssetCollection:(id)arg1 moodOptions:(id)arg2 ;
-(unsigned long long)_numberOfNightOutMoments;
-(id)_relatedCollectionBetweenMoment:(id)arg1 andAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 needsDebugInfo:(BOOL)arg4 needsDiversityInfo:(BOOL)arg5 ;
-(id)assetFingerprintsWithVersion:(long long)arg1 forAssets:(id)arg2 withTransformers:(id)arg3 error:(id*)arg4 ;
-(BOOL)isPGMemoryTriggered:(id)arg1 ;
-(id)_relationshipTypeStringFromRelationshipType:(long long)arg1 ;
-(id)momentsForBaby;
-(void)stampFullGraphRebuild;
-(BOOL)_momentNodeHasMeaningfulActivityScenes:(id)arg1 graph:(id)arg2 ;
-(id)_collectionStatisticsForCurrentPhotoLibrary;
-(id)_momentsForHobbyType:(long long)arg1 ;
-(id)memoryDebugInformationWithMoments:(id)arg1 meaningLabels:(id)arg2 ;
-(id)relatedCollectionsForHighlight:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)assetIdentifiersForPersonIdentifiers:(id)arg1 ;
-(id)_locationTripKeywordsForMemory:(id)arg1 momentNodes:(id)arg2 ;
-(id)surveySocialGroupsInfoDictionaries;
-(id)moodGraphContextIdentifiersForAssetCollection:(id)arg1 moodOptions:(id)arg2 ;
-(NSObject*<OS_os_log>)metricsLoggingConnection;
-(id)_stringDescriptionForLocations;
-(id)fetchMemories;
-(id)_stringDescriptionForBusinessItemsIncludingInferredThroughPublicEvents:(BOOL)arg1 verbose:(BOOL)arg2 ;
-(id)_momentClustersForTripsInGraph:(id)arg1 tripIndexByMomentNode:(id)arg2 ;
-(id)momentsAndGraphScoresAboveGraphScoreThreshold:(double)arg1 ;
-(void)_waitGraphUntilFinishedUsingBlock:(/*^block*/id)arg1 ;
-(id)_memoryGeneratorWithOptions:(id)arg1 memoryController:(id)arg2 ;
-(id)titleTupleForMomentList:(id)arg1 format:(long long)arg2 error:(id*)arg3 ;
-(BOOL)_momentNodeHasMeaningfulEntertainmentScenes:(id)arg1 graph:(id)arg2 ;
-(BOOL)canProceedWithFullGraphRebuildStamp:(A)arg1 :(unsigned long long)arg2 ;
-(id)defaultPeopleClustersExportIntermediatePath;
-(id)_stringFromRelatedType:(unsigned long long)arg1 ;
-(void)invalidateTransientCaches;
-(void)performFullLibraryAnalysisInGraph:(id)arg1 withRecipe:(id)arg2 withAlreadyIngestedMomentIdentifiers:(id)arg3 alreadyIngestedHighlightIdentifiers:(id)arg4 processedGraphUpdate:(id*)arg5 progressBlock:(/*^block*/id)arg6 ;
-(BOOL)_highConfidentSceneNodesInMoment:(id)arg1 withSceneNames:(id)arg2 includingChildrenOfScenes:(id)arg3 graph:(id)arg4 ;
-(void)_generateTitleForRelatedResults:(id)arg1 withReferenceEvent:(id)arg2 referenceAsset:(id)arg3 ;
-(id)assetCollectionsForOptimizedMeaningSurvey:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)_titleStatistics;
-(id)relatedCollectionsForPersonIdentifiers:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id*)arg4 ;
-(void)_invalidateTransientCaches;
-(id)_generateAllMemoriesWithFeatureVectorBasedMemoryGenerator:(id)arg1 options:(id)arg2 ;
-(id)titleTupleForMemory:(id)arg1 error:(id*)arg2 ;
-(id)_sanitizeGraphDataDictionaryForArchiving:(id)arg1 referencedMemory:(id)arg2 ;
-(BOOL)copyGraphToURL:(id)arg1 ;
-(id)_getDefaultOutputPathForMetadataSnapshot;
-(id)_fetchVerifiedPersonsForKnowledgeArgs:(id)arg1 ;
-(NSURL *)metadataSnapshotOutputPathURL;
-(void)startGraphUpdate:(id)arg1 usingCurrentGraph:(BOOL)arg2 progressBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)_featuresFromFingerprint:(id)arg1 withValueGreaterThan:(float)arg2 ;
-(id)featureVectorsForAsset:(id)arg1 ;
-(id)_stringDescriptionForMeaningfulEvents:(id)arg1 isTrip:(BOOL)arg2 forDiagnostics:(BOOL)arg3 ;
-(id)_fileURLForMomentNode:(id)arg1 relatedType:(unsigned long long)arg2 focusOnAsset:(id)arg3 toURL:(id)arg4 ;
-(id)surveyInformationForMoment:(id)arg1 ;
-(id)_curationDebugInformationForHighlight:(id)arg1 options:(id)arg2 ;
-(id)titleTupleForPersonIdentifiers:(id)arg1 format:(long long)arg2 error:(id*)arg3 ;
-(id)_interactionScoreByAssetFromMomentNodes:(id)arg1 ;
-(id)assetCollectionsForPersonIdentifiers:(id)arg1 ;
-(id)_topN:(unsigned long long)arg1 fromScoreByAsset:(id)arg2 ;
-(id)_tripsForTargetDomain:(unsigned short)arg1 ;
-(BOOL)photoLibraryIsReadonly;
-(id)_stringDescriptionForUrbanCities:(id)arg1 ;
-(id)relatedCollectionsForMoment:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id*)arg4 ;
-(void)setGraphPersistenceParentDirectoryURL:(NSURL *)arg1 ;
-(id)relatedCollectionsForHighlight:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 generateTitles:(BOOL)arg4 error:(id*)arg5 ;
-(void)debugTitlesForAssetCollection:(id)arg1 result:(/*^block*/id)arg2 ;
-(id)libraryStatisticsForCurrentPhotoLibrary;
-(id)_generateAllMemoriesWithBestOfPastMemoryGenerator:(id)arg1 options:(id)arg2 ;
-(id)lastTriggeredNotificationDate;
-(id)_stringDescriptionForLegacyPets;
-(id)highlightGroupingsForPromotionScoreSurvey;
-(id)searchableAssetUUIDsBySocialGroupWithEventUUIDs:(id)arg1 ofType:(unsigned long long)arg2 isFullAnalysis:(BOOL)arg3 ;
-(double)graphScoreForMoment:(id)arg1 ;
-(BOOL)needsLibraryAnalysis;
-(unsigned long long)medianValueFromUnsignedItegerArray:(id)arg1 ;
-(BOOL)_momentNodeHasMeaningfulCelebrationScenes:(id)arg1 graph:(id)arg2 ;
-(id)_stringDescriptionForContactCache;
-(id)_addRelationshipsToFeatures:(id)arg1 fromMemory:(id)arg2 ;
-(id)assetCollectionFingerprintsWithVersion:(long long)arg1 forAssetCollections:(id)arg2 withTransformers:(id)arg3 error:(id*)arg4 ;
-(id)relatedCollectionsForAsset:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)allSocialGroupsForPersonIdentifier:(id)arg1 ;
-(id)titleTupleForAlbum:(id)arg1 format:(long long)arg2 error:(id*)arg3 ;
-(id)_gatheringAndFamilyKeywordsForMemory:(id)arg1 momentNodes:(id)arg2 ;
-(id)meaningLabelsForMoment:(id)arg1 ;
-(id)sharingMessageSuggestionDebugInformationForAssetCollection:(id)arg1 ;
-(void)updateGraphWithGraphUpdate:(id)arg1 withRecipe:(id)arg2 keepExistingGraph:(BOOL)arg3 progressBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)_poiLabelsForMomentNodes:(id)arg1 ;
-(id)relationshipInferencesForPersonLocalIdentifiers:(id)arg1 ;
-(BOOL)isPHMemoryTriggered:(id)arg1 ;
-(id)_diverseResultsFromMatchingResults:(id)arg1 timeShuffleDate:(id)arg2 matchingOptions:(id)arg3 options:(id)arg4 ;
-(id)_moodStatistics;
-(void)matchWithVisualFormat:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setMetadataSnapshotOutputPathURL:(NSURL *)arg1 ;
-(id)_dayOfWeekStatistics;
-(unsigned)identifierForMoment:(id)arg1 ;
-(long long)validatePHObject:(id)arg1 featureAggregationValidator:(id)arg2 assetFetchOptionPropertySet:(id)arg3 error:(id*)arg4 ;
-(BOOL)isReady;
-(id)contactInferencesForPersonLocalIdentifiers:(id)arg1 queryOptions:(unsigned long long)arg2 ;
-(void)invalidatePersistentCaches;
-(id)_sortedTextFeaturesFromTextFeatures:(id)arg1 ;
-(id)relatedDebugInformationBetweenAsset:(id)arg1 andRelatedAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 precision:(unsigned long long)arg4 ;
-(id)nameForSocialGroupWithID:(long long)arg1 ;
-(id)highlightsForMeaningKeyAssetSurvey;
-(id)performLibraryAnalysisWithGraphURL:(id)arg1 graphUpdate:(id)arg2 withRecipe:(id)arg3 processedGraphUpdate:(id*)arg4 progressBlock:(/*^block*/id)arg5 ;
-(id)relatedCollectionBetweenAssetCollection:(id)arg1 andAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 needsDebugInfo:(BOOL)arg4 ;
-(id)_stringDescriptionForMemoriesNotification;
-(id)_relatedCollectionsForDefaultAssetCollection:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 assetCollectionForKeywords:(id)arg4 error:(id*)arg5 ;
-(id)_stringDescriptionForBabies;
-(BOOL)exportMatchingResultsForAsset:(id)arg1 relatedType:(unsigned long long)arg2 toURL:(id)arg3 error:(id*)arg4 ;
-(double)neighborScoreForMoment:(id)arg1 ;
-(id)_tripIndexByMomentNodeInGraph:(id)arg1 ;
-(id)searchKeywordsByEventWithUUIDs:(id)arg1 ofType:(unsigned long long)arg2 ;
-(id)allYears;
-(BOOL)requiresReadOnly;
-(BOOL)isSmartInterestingForMoment:(id)arg1 ;
-(double)durationForExistingMemoriesOverlapCheck:(unsigned long long*)arg1 withProgress:(/*^block*/id)arg2 ;
-(id)_momentsStatisticsForCurrentPhotoLibrary;
-(id)_domainLabelCountStatistics;
-(id)_interestingMomentNodesAndUninterestingNodes;
-(id)_memoryControllerWithOptions:(id)arg1 ;
-(NSURL *)graphPersistenceParentDirectoryURL;
-(id)inferredContactIdentifierByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg1 ;
-(id)popularAssetCollections;
-(id)keywordsForMomentNodeName:(id)arg1 relatedType:(unsigned long long)arg2 ;
-(id)_extractDatesAndAssetCountsFromMemory:(id)arg1 ;
-(id)surveyFrequentLocationQuestions;
-(id)titleTupleForAssetCollection:(id)arg1 format:(long long)arg2 error:(id*)arg3 ;
-(id)_tripRelatedClustersInGraph:(id)arg1 ;
-(id)nextPossibleNotificationDate;
-(void)_waitLibraryUpdateUntilFinishedUsingBlock:(/*^block*/id)arg1 ;
-(id)_postProcessGraphMatchingResults:(id)arg1 matchingOptions:(id)arg2 options:(id)arg3 ;
-(id)fetchAssetsFromCollection:(id)arg1 ;
-(id)_featureVectorGeneratorWithOptions:(id)arg1 ;
-(id)assetSearchKeywordsByMomentUUIDWithEventUUIDs:(id)arg1 ofType:(unsigned long long)arg2 ;
-(id)suggestedPersonsForHome;
-(id)curatedKeyAssetForAssetCollection:(id)arg1 curatedAssetCollection:(id)arg2 options:(id)arg3 ;
-(id)socialGroupsForPersonIdentifiers:(id)arg1 ;
-(void)matchWithVisualFormat:(id)arg1 elements:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)suggestedContributionsForAssetsMetadata:(id)arg1 ;
-(id)_generateAllMemoriesWithKeyPeopleForHolidayMemoryGenerator:(id)arg1 options:(id)arg2 ;
-(id)defaultSnapshotRootPath;
-(id)similarAssetCollections;
-(id)keywordsForAssetCollection:(id)arg1 relatedType:(unsigned long long)arg2 ;
-(id)_mobilityStatistics;
-(id)_extractYearStatsFromOrderedCollectionFetchResults:(id)arg1 fetchOptions:(id)arg2 yearEntryKey:(id)arg3 numberOfYearsEntryKey:(id)arg4 ;
-(id)_stringDescriptionForDisambiguatedPOIsInMomentNodes:(id)arg1 ;
-(unsigned long long)libraryAnalysisState;
-(id)graphForLibraryFullAnalysisAtURL:(id)arg1 alreadyIngestedMomentIdentifiers:(id*)arg2 alreadyIngestedHighlightIdentifiers:(id*)arg3 progressBlock:(/*^block*/id)arg4 ;
-(id)_referenceAssetWithLocalIdentifier:(id)arg1 ;
-(id)searchSynonymsDictionaries;
-(NSString *)graphName;
-(id)relatedCollectionBetweenAsset:(id)arg1 andAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 needsDebugInfo:(BOOL)arg4 ;
-(id)relatedCollectionsForDefaultAssetCollection:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)_numberOfAssetsMatchingInternalPredicate:(id)arg1 ;
-(void)performSynchronousConcurrentGraphReadUsingBlock:(/*^block*/id)arg1 ;
-(id)moodSceneIdentifiersByMomentForAssetCollection:(id)arg1 moodOptions:(id)arg2 ;
-(BOOL)exportMatchingResultsForMoment:(id)arg1 relatedType:(unsigned long long)arg2 toURL:(id)arg3 error:(id*)arg4 ;
-(id)_debugInformationForRelated:(id)arg1 referenceKeywords:(id)arg2 andRelatedMoment:(id)arg3 relatedType:(unsigned long long)arg4 precision:(unsigned long long)arg5 ;
-(NSObject*<OS_os_log>)guessWhoLoggingConnection;
-(id)sharingSuggestionDebugInformationForSuggestion:(id)arg1 ;
-(id)_featuresOfType:(unsigned long long)arg1 inMemories:(id)arg2 ;
-(BOOL)_momentNodeHasMeaningfulRestaurantScenes:(id)arg1 graph:(id)arg2 ;
-(id)_snapshotFilenameForLookupKey:(id)arg1 ;
-(id)enrichedBusinessItemsByMuidsForBusinessItems:(id)arg1 ;
-(id)processSubdirectoryName;
-(id)_peopleContactSuggestionStatisticsIncludingDebugInfo:(BOOL)arg1 ;
-(id)_stringDescriptionForDisambiguatedLocations;
-(BOOL)_isInterestingMomentNode:(id)arg1 ;
-(id)allYearsForSocialGroupWithID:(long long)arg1 ;
-(void)_loadGraphWithProgressBlock:(/*^block*/id)arg1 ;
-(id)_stringDescriptionForPeopleEvents;
-(BOOL)hasPendingGraphAccess;
-(id)_stringDescriptionForInterestingCities:(id)arg1 ;
-(id)momentFeatureVectorForMoment:(id)arg1 ;
-(id)zeroKeywordsWithOptions:(id)arg1 ;
-(void)startLibraryAnalysisWithRecipe:(id)arg1 progressBlock:(/*^block*/id)arg2 keepExistingGraph:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)_messagesStatistics;
-(id)sortedArrayForPersonIdentifiers:(id)arg1 ;
-(void)precachePersonsInformationWithProgressBlock:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)interactionScoreByAsset;
-(void)performAsynchronousNotification:(/*^block*/id)arg1 ;
-(void)setGraph:(PGGraph *)arg1 ;
-(void)startLibraryAnalysis:(/*^block*/id)arg1 keepExistingGraph:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_momentNodesForAssetCollection:(id)arg1 moodOptions:(id)arg2 ;
-(id)highlightDebugInformationWithHighlight:(id)arg1 ;
-(id)_memoryFetchOptions;
-(id)_roiLabelsForMomentNodes:(id)arg1 ;
-(BOOL)_shouldFullyRebuildGraphWithGraphUpdate:(id)arg1 ;
-(id)_allFeatureVectorBasedMemoriesWithOptions:(id)arg1 ;
-(id)textFeaturesForMomentLocalIdentifiers:(id)arg1 ;
-(id)_celebratedHolidayKeywordsForMomentNodes:(id)arg1 ;
-(A)currentFullGraphRebuildStamp:(SEL)arg1 ;
-(id)peopleSuggestionLearningStatistics;
-(id)_featuresFromOptions:(id)arg1 ;
-(id)suggestedContactIdentifiersForPersonLocalIdentifier:(id)arg1 ;
-(BOOL)_supportsSemanticalDedupingForMemory:(id)arg1 ;
-(BOOL)canAddM5KeywordToMemory:(id)arg1 currentKeywords:(id)arg2 ;
-(id)_relatedCollectionBetweenHighlight:(id)arg1 andAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 needsDebugInfo:(BOOL)arg4 needsDiversityInfo:(BOOL)arg5 ;
-(id)diagnosticsSummaryInfoOnExistingMemoriesForCurrentPhotoLibrary;
-(void)dealloc;
-(id)_assetsWithKNearestSceneprintsToReferenceAssets:(id)arg1 amongOtherAssets:(id)arg2 minimumSimilarity:(double)arg3 k:(unsigned long long)arg4 ;
-(id)moodGraphNodeIdentifiersForAssetCollection:(id)arg1 moodOptions:(id)arg2 ;
-(id)initWithPhotoLibrary:(id)arg1 analytics:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)allSocialGroupIDs;
-(id)_interestingStatistics;
-(id)graphPersistenceParentDirectoryCandidateURLs;
@end
