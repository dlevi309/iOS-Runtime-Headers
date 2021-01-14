/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <PhotoAnalysis/PHAWorker.h>
#import <libobjc.A.dylib/PHAGraphRegistration.h>
#import <libobjc.A.dylib/PGGraphDataModelEnrichmentManagerDelegate.h>
#import <libobjc.A.dylib/PLPhotoAnalysisGraphServiceProtocol.h>

@protocol PGGraphHealthRecording, OS_dispatch_queue, OS_os_transaction;
@class NSDate, NSDictionary, NSProgress, PGManager, NSMutableDictionary, PHAPredicateValidator, NSObject, NSHashTable, NSString;

@interface PHAGraphServiceWorker : PHAWorker <PHAGraphRegistration, PGGraphDataModelEnrichmentManagerDelegate, PLPhotoAnalysisGraphServiceProtocol> {

	unsigned long long _inq_state;
	BOOL _serviceEnabled;
	NSDate* _lastTodayWidgetMemoryCreationDate;
	NSDictionary* _snapshotFilenameLookup;
	unsigned long long _pendingGraphRequests;
	id<PGGraphHealthRecording> _graphHealthRecorder;
	NSProgress* _currentGraphRebuildProgress;
	PGManager* _graphManager;
	NSMutableDictionary* _pendingGraphReadyCallbacks;
	PHAPredicateValidator* _relatedRequestPredicateValidator;
	NSObject*<OS_dispatch_queue> _backgroundTaskQueue;
	NSDate* _lastLibraryChangeGraphUpdateJobCompletionDate;
	NSHashTable* _pendingRequestReferences;
	long long _pendingRequestReferenceCount;
	NSObject*<OS_os_transaction> _graphWorkerWarmedUpTransaction;

}

@property (assign,nonatomic) unsigned long long state; 
@property (nonatomic,retain) NSProgress * currentGraphRebuildProgress;                                 //@synthesize currentGraphRebuildProgress=_currentGraphRebuildProgress - In the implementation block
@property (nonatomic,retain) PGManager * graphManager;                                                 //@synthesize graphManager=_graphManager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingGraphReadyCallbacks;                         //@synthesize pendingGraphReadyCallbacks=_pendingGraphReadyCallbacks - In the implementation block
@property (nonatomic,retain) PHAPredicateValidator * relatedRequestPredicateValidator;                 //@synthesize relatedRequestPredicateValidator=_relatedRequestPredicateValidator - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> backgroundTaskQueue;                         //@synthesize backgroundTaskQueue=_backgroundTaskQueue - In the implementation block
@property (nonatomic,retain) NSDate * lastLibraryChangeGraphUpdateJobCompletionDate;                   //@synthesize lastLibraryChangeGraphUpdateJobCompletionDate=_lastLibraryChangeGraphUpdateJobCompletionDate - In the implementation block
@property (nonatomic,retain) NSHashTable * pendingRequestReferences;                                   //@synthesize pendingRequestReferences=_pendingRequestReferences - In the implementation block
@property (assign,nonatomic) long long pendingRequestReferenceCount;                                   //@synthesize pendingRequestReferenceCount=_pendingRequestReferenceCount - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> graphWorkerWarmedUpTransaction;              //@synthesize graphWorkerWarmedUpTransaction=_graphWorkerWarmedUpTransaction - In the implementation block
@property (nonatomic,readonly) NSDate * dateOfLastGraphRebuild; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)configureXPCConnection:(id)arg1 ;
+(id)facesAndScenesProcessingProgressPercentageDataForPhotoLibrary:(id)arg1 ;
+(long long)applicationDataFolderIdentifier;
+(id)stringFromGraphServiceState:(unsigned long long)arg1 ;
+(short)workerType;
-(void)requestAssetCollectionsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)cooldown;
-(void)simulateMemoriesNotificationWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(NSProgress *)currentGraphRebuildProgress;
-(BOOL)wantsLiveGraphUpdates;
-(id)aggregatedStatsForMoodKeywordCountedSet:(id)arg1 ;
-(NSMutableDictionary *)pendingGraphReadyCallbacks;
-(void)markLastBackgroundGraphConsistencyUpdateJobDate;
-(unsigned long long)_memoryMoodForMiroMood:(long long)arg1 ;
-(void)shutdown;
-(id)dataAggregationKeyForCategory:(unsigned long long)arg1 subCategory:(unsigned long long)arg2 lookupTable:(id)arg3 ;
-(void)requestSnapshotServiceForPeopleCurationResultsWithGraphOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)enrichmentManager:(id)arg1 didCancelProcessor:(id)arg2 ;
-(void)requestRelatedMomentsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setGraphManager:(PGManager *)arg1 ;
-(void)pendingRequestReferenceDidDeallocateForAddress:(void*)arg1 ;
-(void)reportMetricsWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestSuggestedRecipientsForAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 options:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5 ;
-(id)_infoForMomentsBackingMemory:(id)arg1 ;
-(void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 additionalSnapshotSummaryInfo:(id)arg5 context:(id)arg6 reply:(/*^block*/id)arg7 ;
-(id)_minimalLegacyFeatureVectorWithMemory:(id)arg1 ;
-(void)markLastBackgroundGraphRebuildJobDate;
-(void)stopProcessingGraphUpdateJob:(id)arg1 ;
-(id)_featureVectorWithMemory:(id)arg1 ;
-(void)warmupWithProgressBlock:(/*^block*/id)arg1 ;
-(BOOL)hasAdditionalJobsForScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2 ;
-(BOOL)_graphShouldBeConnected;
-(void)requestCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)setPendingRequestReferenceCount:(long long)arg1 ;
-(void)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(BOOL)wantsGraphUpdateNotifications;
-(void)rebuildGraphWithOptions:(id)arg1 context:(id)arg2 isRequestedRebuild:(BOOL)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)requestRelatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 context:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)enrichDataModelWithOptions:(id)arg1 isEnrichmentJob:(BOOL)arg2 context:(id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(long long)_miroMoodForMemoryMood:(unsigned long long)arg1 ;
-(void)setGraphWorkerWarmedUpTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(BOOL)shouldAllowBackgroundActivityWithDescription:(id)arg1 ;
-(void)requestEnrichmentWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)memoryBlacklistableFeatureTypeValueToDataAggregationKeyLookup;
-(void)setupGraphManagerWithProgressBlock:(/*^block*/id)arg1 ;
-(void)_processMoodForMemory:(id)arg1 withMoodHistory:(id)arg2 moodGenerationContext:(id)arg3 ;
-(id)_diagnosticsLogsRootFolderPath;
-(void)startup;
-(id)memoryCategoryValueToDataAggregationKeyLookup;
-(unsigned long long)synchronousOffQueueState;
-(void)requestGraphRebuildFractionCompletedWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestSortedArrayOfPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)reportMetricsWithOptions:(id)arg1 context:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)questionGenerationJobWithScenario:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)backgroundMemoryGenerationJobWithScenario:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestGraphServiceStatisticsWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)checkForWritablePersistentStorageDirectoryURL;
-(id)graphProcessHistoricalChangeJobWithScenario:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestTextFeaturesForMomentLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestDefaultsObjectForKey:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)graphRebuildJobWithScenario:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)shouldAggregateDataForReporting:(unsigned long long)arg1 ;
-(void)requestInvalidateServiceTransientCachesWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)backgroundTaskQueue;
-(void)requestSharingSuggestionsFromMessageStrings:(id)arg1 participantPHIdentifiers:(id)arg2 options:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)setupPredicateValidator;
-(void)requestPeopleSuggestionLearningWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)enrichmentManager:(id)arg1 didFinishEnrichmentSuccessfully:(BOOL)arg2 ;
-(id)assetCollectionForLocalIdentifier:(id)arg1 options:(id)arg2 ;
-(void)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(id)arg1 referenceAssetLocalIdentifier:(id)arg2 precision:(unsigned long long)arg3 options:(id)arg4 context:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)setCurrentGraphRebuildProgress:(NSProgress *)arg1 ;
-(void)requestHighlightEnrichmentWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)_assetCollectionForRelatedIdentifier:(id)arg1 ;
-(BOOL)completedJobTodayForBackgroundJobUserDefaultsKey:(id)arg1 ;
-(void)requestM5CompatibleMemoriesWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestUtilityAssetInformationWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestTitleForCollectionMomentListWithLocalIdentifier:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)requestInferredContactIdentifierForPersonLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)shouldStopOperationInProgress;
-(BOOL)stopAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(id)_propertiesFromMemory:(id)arg1 ;
-(BOOL)hasAdditionalJobForBackgroundMemoryGenerationInScenario:(unsigned long long)arg1 ;
-(id)aggregatedStatsForMiroMoodCountVector:(id)arg1 ;
-(void)_markEnrichmentNeededFollowingBackgroundRebuild:(BOOL)arg1 ;
-(id)_infoForNotificationQualityOfMemory:(id)arg1 ;
-(void)requestRelationshipInferencesForPersonLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)retryStartup;
-(void)requestMemoryInfosWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)requestAssetRevGeocodingWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestSnapshotServiceForRelatedResultsWithGraphOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(NSHashTable *)pendingRequestReferences;
-(void)requestSuggestedPersonsWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)_infoForMemory:(id)arg1 representativeAssetCount:(unsigned long long)arg2 isTransientMemory:(BOOL)arg3 ;
-(void)requestWriteAdditionalDataToSnapshotResults:(id)arg1 forFilenameKey:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)invalidateGraphWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)rebuildGraphWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)callAndClearPendingReadyCallbacksWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)currentlyUnavailableError;
-(void)generateMemoriesWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestMemoryTreeDebugInformationWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)canServiceGraphCurationRequestsInCurrentStateLoadingGraphIfNeeded;
-(id)statusAsDictionary;
-(id)informationDictionaryForAsset:(id)arg1 ;
-(void)requestExportGraphServiceForPurpose:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)metricReportingJobWithScenario:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestAllSocialGroupsForPersonIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestGraphServiceStatusWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(NSDate *)dateOfLastGraphRebuild;
-(id)_basicPropertiesFromMemory:(id)arg1 ;
-(id)aggregatedStatsForPossibleMoodCountVector:(id)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(void)requestHighlightDebugInformationForHighlightWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 context:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)startProcessingGraphUpdateJob:(id)arg1 ;
-(BOOL)enrichmentManager:(id)arg1 shouldRunProcessor:(id)arg2 ;
-(unsigned long long)state;
-(BOOL)hasAdditionalJobForGraphConsistencyUpdateInScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2 ;
-(id)_assetCollectionForLocalIdentifier:(id)arg1 ;
-(void)handleOperation:(id)arg1 ;
-(void)graphUpdateIsConsistent;
-(void)graphUpdateMadeProgress:(double)arg1 ;
-(BOOL)hasAdditionalJobForDataModelEnrichmentInScenario:(unsigned long long)arg1 ;
-(void)requestHighlightEstimatesWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(PGManager *)graphManager;
-(void)requestSuggestedContributionsForAssetsMetadata:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 options:(id)arg4 context:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)enrichmentManager:(id)arg1 didRunProcessor:(id)arg2 ;
-(void)requestGraphServicePerformsQueryWithContext:(id)arg1 query:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestAvailableSuggestionTypeInfosWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(PHAPredicateValidator *)relatedRequestPredicateValidator;
-(void)setLastLibraryChangeGraphUpdateJobCompletionDate:(NSDate *)arg1 ;
-(void)requestAssetCollectionsRelatedToPersonIdentifiers:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestSharingSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestTitleForAssetCollectionWithLocalIdentifier:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)pendingRequestReferenceForLabel:(id)arg1 ;
-(void)notifyWhenGraphReadyWithCoalescingIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)shutdownAndWaitForGraphManager;
-(BOOL)isEnabled;
-(void)setBackgroundTaskQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)hasAdditionalJobForQuestionGenerationInScenario:(unsigned long long)arg1 ;
-(void)requestTitleForMemoryWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestSuggestionInfosWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)generateMemoriesRelatedDiagnosticsLogsWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)hasAdditionalJobForMetricsReportingInScenario:(unsigned long long)arg1 ;
-(void)setRelatedRequestPredicateValidator:(PHAPredicateValidator *)arg1 ;
-(void)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)isQuiescent;
-(id)memoryBlacklistedFeatureTypeValueToDataAggregationKeyLookup;
-(void)setPendingGraphReadyCallbacks:(NSMutableDictionary *)arg1 ;
-(long long)_titleTupleFormatForPhotoAnalysisTitleFormat:(long long)arg1 ;
-(long long)pendingRequestReferenceCount;
-(void)requestAssetRevGeocodingForAssetLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestGenerateQuestionsWithOptions:(id)arg1 context:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_infoForGraphCollectionBasedMemory:(id)arg1 ;
-(void)requestSocialGroupsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)didExceedTimeInterval:(double)arg1 forBackgroundJobUserDefaultsKey:(id)arg2 ;
-(void)requestInvalidateServicePersistentCachesWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(long long)_phTitleCategoryForPGTitleCategory:(long long)arg1 ;
-(id)_memoryInfoFromMemory:(id)arg1 options:(id)arg2 ;
-(void)requestCurationDebugInformationForAsset:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestPerformUpdatesForMomentLocalIdentifiersToInsert:(id)arg1 momentLocalIdentifiersToDelete:(id)arg2 momentLocalIdentifiersToReload:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5 ;
-(BOOL)hasAdditionalJobForGraphRebuildInScenario:(unsigned long long)arg1 ;
-(void)requestSetDefaultsObject:(id)arg1 forKey:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)nextAdditionalJobWithScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2 ;
-(long long)unavailableErrorCodeForCurrentState;
-(long long)enrichmentContextToUseForEnrichmentJob;
-(void)setPendingRequestReferences:(NSHashTable *)arg1 ;
-(void)requestInferredContactIdentifierByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)canRunWhenGraphIsLoaded;
-(id)dataModelEnrichmentJobWithScenario:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_os_transaction>)graphWorkerWarmedUpTransaction;
-(void)requestTitleForPersonIdentifiers:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)requestGenerateQuestionsWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)_collectionListForLocalIdentifier:(id)arg1 ;
-(void)requestSharingMessageSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)graphUpdateDidStop;
-(BOOL)startAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(void)requestBatchSuggestedRecipientsForMomentUUIDByAssetUUID:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 context:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)requestLastQuestionGenerationJobDateWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)aggregatedStatsForSuggestedMoodCountVector:(id)arg1 ;
-(NSDate *)lastLibraryChangeGraphUpdateJobCompletionDate;
-(void)requestContactInferencesForPersonLocalIdentifiers:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)requestTransientMemoryPropertiesWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)canServiceGraphRequestsInCurrentStateLoadingGraphIfNeeded;
-(void)generateMemoriesWithOptions:(id)arg1 context:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)requestSuggestedContactIdentifiersForPersonLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(unsigned long long)_validatedMemoryNotificationState:(int)arg1 ;
-(id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2 ;
-(void)requestRunPFLWithAttachments:(id)arg1 recipeUserInfo:(id)arg2 context:(id)arg3 resultBlock:(/*^block*/id)arg4 ;
-(void)requestHighlightCollectionEnrichmentWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestAssetsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestMetadataSnapshotFolderCreationWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)canServiceGraphStatusRequestsInCurrentStateLoadingGraphIfNeeded;
@end

