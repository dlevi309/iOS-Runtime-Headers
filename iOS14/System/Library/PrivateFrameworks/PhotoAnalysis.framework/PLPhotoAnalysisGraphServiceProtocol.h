/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@protocol PLPhotoAnalysisGraphServiceProtocol
@optional
-(void)simulateMemoriesNotificationWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestLocalizedSceneAncestryInformationWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestSnapshotServiceForPeopleCurationResultsWithGraphOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestRelatedMomentsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestZeroKeywordsWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)reportMetricsWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestSuggestedRecipientsForAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 options:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5;
-(void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 additionalSnapshotSummaryInfo:(id)arg5 context:(id)arg6 reply:(/*^block*/id)arg7;
-(void)requestCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)requestRelatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 context:(id)arg6 reply:(/*^block*/id)arg7;
-(void)requestEnrichmentWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)requestOnDiskRelationshipInferencesForPersonLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestOnDiskSuggestedPersonsWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5;
-(void)requestGraphRebuildFractionCompletedWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestSortedArrayOfPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestGraphServiceStatisticsWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestTextFeaturesForMomentLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestDefaultsObjectForKey:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestOnDiskContactInferencesForPersonLocalIdentifiers:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)requestInvalidateServiceTransientCachesWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestSharingSuggestionsFromMessageStrings:(id)arg1 participantPHIdentifiers:(id)arg2 options:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5;
-(void)requestPeopleSuggestionLearningWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(id)arg1 referenceAssetLocalIdentifier:(id)arg2 precision:(unsigned long long)arg3 options:(id)arg4 context:(id)arg5 reply:(/*^block*/id)arg6;
-(void)requestHighlightEnrichmentWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestM5CompatibleMemoriesWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestUtilityAssetInformationWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestTitleForCollectionMomentListWithLocalIdentifier:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)requestInferredContactIdentifierForPersonLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestRelationshipInferencesForPersonLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestGraphSearchMetadataWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestMemoryInfosWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)requestAssetRevGeocodingWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestOnDiskSuggestedContributionsForAssetsMetadata:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)requestSnapshotServiceForRelatedResultsWithGraphOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)generateSuggestionsWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestSuggestedPersonsWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestWriteAdditionalDataToSnapshotResults:(id)arg1 forFilenameKey:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)invalidateGraphWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)rebuildGraphWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestSearchableAssetUUIDsBySocialGroupForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 isFullAnalysis:(BOOL)arg3 withOptions:(id)arg4 context:(id)arg5 reply:(/*^block*/id)arg6;
-(void)generateMemoriesWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestMemoryTreeDebugInformationWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5;
-(void)requestExportGraphServiceForPurpose:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestAllSocialGroupsForPersonIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestGraphServiceStatusWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestSynonymsDictionariesWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestHighlightDebugInformationForHighlightWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)runCurationWithItems:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 context:(id)arg5 reply:(/*^block*/id)arg6;
-(void)requestHighlightEstimatesWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestSuggestedContributionsForAssetsMetadata:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 options:(id)arg4 context:(id)arg5 reply:(/*^block*/id)arg6;
-(void)requestGraphServicePerformsQueryWithContext:(id)arg1 query:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestAvailableSuggestionTypeInfosWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestAssetCollectionsRelatedToPersonIdentifiers:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestOnDiskSuggestedRecipientsForAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 options:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5;
-(void)requestSharingSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestTitleForAssetCollectionWithLocalIdentifier:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)notifyWhenGraphReadyWithCoalescingIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)unloadGraphWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestTitleForMemoryWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestSuggestionInfosWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)generateMemoriesRelatedDiagnosticsLogsWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestAssetRevGeocodingForAssetLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestSocialGroupsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestInvalidateServicePersistentCachesWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestCurationDebugInformationForAsset:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestPerformUpdatesForMomentLocalIdentifiersToInsert:(id)arg1 momentLocalIdentifiersToDelete:(id)arg2 momentLocalIdentifiersToReload:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5;
-(void)requestSetDefaultsObject:(id)arg1 forKey:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)requestInferredContactIdentifierByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestTitleForPersonIdentifiers:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)requestGenerateQuestionsWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestSharingMessageSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestBatchSuggestedRecipientsForMomentUUIDByAssetUUID:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 context:(id)arg6 reply:(/*^block*/id)arg7;
-(void)requestLastQuestionGenerationJobDateWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestSignalModelInfosWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestContactInferencesForPersonLocalIdentifiers:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4;
-(void)requestTransientMemoryPropertiesWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)loadGraphWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestSuggestedContactIdentifiersForPersonLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestRunPFLWithAttachments:(id)arg1 recipeUserInfo:(id)arg2 context:(id)arg3 resultBlock:(/*^block*/id)arg4;
-(void)requestHighlightCollectionEnrichmentWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestAssetsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestMetadataSnapshotFolderCreationWithContext:(id)arg1 reply:(/*^block*/id)arg2;

@end

