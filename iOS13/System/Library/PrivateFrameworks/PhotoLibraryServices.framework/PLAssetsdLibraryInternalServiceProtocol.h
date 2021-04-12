/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLAssetsdLibraryInternalServiceProtocol <NSObject>
@required
-(void)getAssetCountsWithReply:(/*^block*/id)arg1;
-(void)getLibrarySizesFromDB:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)getSizeOfResourcesToUploadByCPLWithReply:(/*^block*/id)arg1;
-(void)updateAssetLocationDataWithUUID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)previewRenderedContentURLCountWithReply:(/*^block*/id)arg1;
-(void)previewRenderedContentURLAtIndex:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)previewAssetLocalIdentifiersWithReply:(/*^block*/id)arg1;
-(void)repairMemoriesWithUUIDs:(id)arg1 reply:(/*^block*/id)arg2;
-(void)reloadMomentGenerationOptions;
-(void)removeAnalysisRecordsForDeletedAssetsWithUUIDs:(id)arg1 workerType:(unsigned long long)arg2;
-(void)markAnalysisStatesProcessedForWorkerType:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)resetPendingAnalysisStatesWithReply:(/*^block*/id)arg1;
-(void)markPersonAsNeedingKeyFaceWithPersonUUID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)getSearchIndexProgressWithReply:(/*^block*/id)arg1;
-(void)waitForSearchIndexExistenceWithReply:(/*^block*/id)arg1;
-(void)applySearchIndexUpdates:(id)arg1 reply:(/*^block*/id)arg2;
-(void)applyGraphUpdates:(id)arg1 supportingData:(id)arg2 reply:(/*^block*/id)arg3;
-(void)setAssetKeywords:(id)arg1 forAssetUUID:(id)arg2 reply:(/*^block*/id)arg3;
-(void)invalidateReverseLocationDataOnAllAssetsWithReply:(/*^block*/id)arg1;
-(void)registerBackgroundJobServiceIfNecessaryOnLibraryPath:(id)arg1 reply:(/*^block*/id)arg2;
-(void)getBackgroundJobServiceStateWithReply:(/*^block*/id)arg1;
-(void)getBackgroundJobServiceBundlesInQueueDictionaryWithReply:(/*^block*/id)arg1;
-(void)backgroundJobServiceRemoveAllBundleRecordsFromProcessingSet;
-(void)deleteiTunesSyncedContentWithCompletionHandler:(/*^block*/id)arg1;
-(void)invalidateBehavioralScoreOnAllAssetsWithReply:(/*^block*/id)arg1;

@end

