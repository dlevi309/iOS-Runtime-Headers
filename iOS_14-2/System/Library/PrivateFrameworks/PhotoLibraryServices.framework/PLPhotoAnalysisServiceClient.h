/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSDictionary, NSObject, NSXPCConnection, NSURL;

@interface PLPhotoAnalysisServiceClient : NSObject {

	NSDictionary* _cachedRequestContextDictionary;
	NSObject*<OS_dispatch_queue> _backgroundQueue;
	NSXPCConnection* _xpcConnection;
	BOOL _graphIsReady;
	unsigned long long _graphLoadcount;
	BOOL _graphLoadWasSent;
	os_unfair_lock_s _lock;
	NSURL* _libraryURL;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> backgroundQueue; 
@property (nonatomic,readonly) NSXPCConnection * xpcConnection; 
@property (nonatomic,readonly) NSURL * libraryURL;                                        //@synthesize libraryURL=_libraryURL - In the implementation block
-(NSURL *)libraryURL;
-(void)unloadGraph;
-(id)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 error:(id*)arg4 ;
-(id)runCurationWithItems:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(NSXPCConnection *)xpcConnection;
-(BOOL)resetFaceClusteringState:(id*)arg1 ;
-(id)requestTextFeaturesForMomentLocalIdentifiers:(id)arg1 error:(id*)arg2 ;
-(BOOL)requestTitleForPersonIdentifiers:(id)arg1 format:(long long)arg2 title:(id*)arg3 subtitle:(id*)arg4 error:(id*)arg5 ;
-(void)cancelOperationsWithIdentifiers:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)searchResultNodesForSceneClassifications:(id)arg1 error:(id*)arg2 ;
-(id)requestSocialGroupsForPersonIdentifiers:(id)arg1 withError:(id*)arg2 ;
-(id)_xpcConnection;
-(id)requestRelatedMomentsForPersonIdentifiers:(id)arg1 withError:(id*)arg2 ;
-(id)requestHighlightDebugInformationForHighlightWithLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)requestMemoryInfosWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)requestInvalidatePersistentCaches:(id*)arg1 ;
-(id)init;
-(BOOL)requestPerformUpdatesForMomentLocalIdentifiersToInsert:(id)arg1 momentLocalIdentifiersToDelete:(id)arg2 momentLocalIdentifiersToReload:(id)arg3 error:(id*)arg4 ;
-(id)requestCurationDebugInformationForAssetLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)requestAssetRevGeocodingForAssetLocalIdentifiers:(id)arg1 withError:(id*)arg2 ;
-(id)requestMetadataSnapshotFolderCreation:(id*)arg1 ;
-(BOOL)performFaceProcessingOnAssetWithLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)requestUtilityAssetInformationWithError:(id*)arg1 ;
-(id)requestInferredContactIdentifierByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 options:(id)arg4 error:(id*)arg5 ;
-(long long)suggestedPersonsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)requestAssetsForPersonIdentifiers:(id)arg1 withError:(id*)arg2 ;
-(id)requestSuggestedMePersonIdentifierWithError:(id*)arg1 ;
-(id)requestInferredContactIdentifierForPersonLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(long long)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithLibraryURL:(id)arg1 ;
-(void)stopTurboAnalysis;
-(id)faceCandidatesForKeyFaceForPersonsWithLocalIdentifiers:(id)arg1 error:(id*)arg2 ;
-(BOOL)rebuildPersonsWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)requestBatchSuggestedRecipientsForMomentUUIDByAssetUUID:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)personPromoterStatus:(/*^block*/id)arg1 ;
-(id)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 error:(id*)arg4 ;
-(id)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(id)arg1 referenceAssetLocalIdentifier:(id)arg2 precision:(unsigned long long)arg3 options:(id)arg4 error:(id*)arg5 ;
-(BOOL)requestAssetRevGeocodingWithError:(id*)arg1 ;
-(void)reloadWidgetTimelineWithReply:(/*^block*/id)arg1 ;
-(id)requestAvailableSuggestionTypeInfosWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)requestPeopleSuggestionLearningStatisticsWithError:(id*)arg1 ;
-(id)requestExportGraphForPurpose:(id)arg1 error:(id*)arg2 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)cacheCPAnalyticsPropertiesWithReply:(/*^block*/id)arg1 ;
-(id)requestAssetCollectionsRelatedToPersonIdentifiers:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)requestGraphPerformQuery:(id)arg1 error:(id*)arg2 ;
-(void)personPromoterAdvancedStatus:(/*^block*/id)arg1 ;
-(id)requestRelatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 error:(id*)arg6 ;
-(void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 additionalSnapshotSummaryInfo:(id)arg5 reply:(/*^block*/id)arg6 ;
-(id)requestLocalizedSceneAncestryInformationWithError:(id*)arg1 ;
-(id)requestSharingSuggestionsFromMessageStrings:(id)arg1 participantPHIdentifiers:(id)arg2 error:(id*)arg3 ;
-(BOOL)isGraphReady;
-(void)_sendGraphLoadIfNeeded;
-(void)generateMemoriesWithOptions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestHighlightEstimatesWithReply:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)requestHighlightCollectionEnrichmentWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)requestContextDictionaryWithOperationId:(BOOL)arg1 ;
-(id)requestSuggestedContributionsForAssetsMetadata:(id)arg1 error:(id*)arg2 ;
-(id)requestTransientMemoryPropertiesWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)requestSharingSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestGraphRebuildFractionCompletedWithReply:(/*^block*/id)arg1 ;
-(id)requestSignalModelInfosWithError:(id*)arg1 ;
-(void)writeQALog:(id)arg1 ;
-(id)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)requestSynonymsDictionariesWithError:(id*)arg1 ;
-(id)requestSharingMessageSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)requestContactInferencesForPersonLocalIdentifiers:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)requestSuggestedContactIdentifiersForPersonLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)requestSuggestedPersonsWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)requestGenerateQuestionsWithOptions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 error:(id*)arg6 ;
-(void)generateMemoriesRelatedDiagnosticsLogsWithReply:(/*^block*/id)arg1 ;
-(id)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)requestM5CompatibleMemoriesReturningError:(id*)arg1 ;
-(int)photoanalysisdPid;
-(void)recordFeatureUsageFromCounts:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)processPersonsWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)setJobProcessingConstraintsWithValues:(id)arg1 mask:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)localizedLabelForSceneIdentifier:(unsigned)arg1 error:(id*)arg2 ;
-(id)requestSnapshotServiceForRelatedResultsWithGraphOptions:(id)arg1 error:(id*)arg2 ;
-(id)requestGraphStatus:(id*)arg1 ;
-(void)generateSuggestionsWithOptions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_setupXPCConnection;
-(id)sceneNodesForSceneIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)requestLastQuestionGenerationJobDateWithError:(id*)arg1 ;
-(BOOL)requestTitleForMemoryWithLocalIdentifier:(id)arg1 title:(id*)arg2 subtitle:(id*)arg3 error:(id*)arg4 ;
-(id)requestSuggestedRecipientsForAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(void)loadGraph;
-(id)requestWriteAdditionalDataToSnapshotResults:(id)arg1 forFilenameKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)requestHighlightEnrichmentWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)requestAllSocialGroupsForPersonIdentifier:(id)arg1 withError:(id*)arg2 ;
-(void)rebuildGraphWithOptions:(id)arg1 progress:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)requestSearchableAssetUUIDsBySocialGroupForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 isFullAnalysis:(BOOL)arg3 withOptions:(id)arg4 error:(id*)arg5 ;
-(BOOL)requestSetDefaultsObject:(id)arg1 forKey:(id)arg2 withError:(id*)arg3 ;
-(void)notifyWhenGraphReadyWithCoalescingIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)requestCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)requestDefaultsObjectForKey:(id)arg1 withError:(id*)arg2 ;
-(id)requestGraphStatisticsWithOptions:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_queue>)backgroundQueue;
-(id)requestZeroKeywordsWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)faceClusteringInformation:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)reportMetricsWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)requestSnapshotServiceForPeopleCurationResultsWithGraphOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)requestTitleForCollectionMomentListWithLocalIdentifier:(id)arg1 format:(long long)arg2 title:(id*)arg3 subtitle:(id*)arg4 error:(id*)arg5 ;
-(id)requestSuggestionInfosWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)requestGraphSearchMetadataWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)differencesBetweenClustersInClusterCacheAndLibrary:(id*)arg1 ;
-(void)dispatchOnQueue:(id)arg1 blockWithoutBoost:(/*^block*/id)arg2 ;
-(id)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)runTurboAnalysis;
-(BOOL)requestEnrichmentWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)searchResultNodesForSceneIdentifiers:(id)arg1 error:(id*)arg2 ;
-(void)invalidateGraphWithReply:(/*^block*/id)arg1 ;
-(BOOL)requestTitleForAssetCollectionWithLocalIdentifier:(id)arg1 format:(long long)arg2 title:(id*)arg3 subtitle:(id*)arg4 error:(id*)arg5 ;
-(void)notifyLibraryAvailableAtURL:(id)arg1 ;
-(void)scheduleAssetForOnDemandAnalysisWithUUID:(id)arg1 workerType:(short)arg2 workerFlags:(int)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)resetFaceClassificationModel:(id*)arg1 ;
-(id)requestMemoryTreeDebugInformationWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)requestOnDemandFaceCropsForFaceLocalIdentifiers:(id)arg1 error:(id*)arg2 ;
-(void)requestRunPFLWithAttachments:(id)arg1 recipeUserInfo:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
-(BOOL)reclusterFacesWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)dumpAnalysisStatusError:(id*)arg1 ;
-(void)simulateMemoriesNotificationWithOptions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)requestInvalidateTransientCaches:(id*)arg1 ;
-(void)dealloc;
-(id)requestPeopleSuggestionLearningWithError:(id*)arg1 ;
-(BOOL)turboIsEnabled;
-(id)requestSortedArrayOfPersonIdentifiers:(id)arg1 withError:(id*)arg2 ;
-(id)requestContextDictionary;
-(id)requestRelationshipInferencesForPersonLocalIdentifiers:(id)arg1 error:(id*)arg2 ;
-(void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 reply:(/*^block*/id)arg5 ;
@end

