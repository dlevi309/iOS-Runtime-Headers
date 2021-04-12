/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdLibraryInternalClient : PLAssetsdBaseClient
-(BOOL)synchronouslyGetSizeOfResourcesToUploadByCPL:(long long*)arg1 error:(id*)arg2 ;
-(void)waitForSearchIndexExistence:(/*^block*/id)arg1 ;
-(void)getAssetCountsWithReply:(/*^block*/id)arg1 ;
-(void)reloadMomentGenerationOptions;
-(void)deleteiTunesSyncedContentWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)repairMemoriesWithUUIDs:(id)arg1 error:(id*)arg2 ;
-(void)markPersonAsNeedingKeyFace:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)markAnalysisStatesProcessedForWorkerType:(short)arg1 error:(id*)arg2 ;
-(BOOL)removeAnalysisRecordsForDeletedAssetsWithUUIDs:(id)arg1 workerType:(short)arg2 error:(id*)arg3 ;
-(BOOL)resetPendingAnalysisStatesWithError:(id*)arg1 ;
-(void)applySearchIndexUpdates:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)applySearchIndexGraphUpdates:(id)arg1 supportingData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getLibrarySizesFromDB:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)synchronouslyGetLibrarySizesFromDB:(BOOL)arg1 sizes:(id*)arg2 error:(id*)arg3 ;
-(void)updateAssetLocationDataWithUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)previewRenderedContentURLCount:(unsigned long long*)arg1 error:(id*)arg2 ;
-(BOOL)previewRenderedContentURLAtIndex:(unsigned long long)arg1 previewRenderedContentURL:(id*)arg2 error:(id*)arg3 ;
-(BOOL)previewAssetLocalIdentifiers:(id*)arg1 error:(id*)arg2 ;
-(BOOL)synchronouslyMarkPersonAsNeedingKeyFace:(id)arg1 error:(id*)arg2 ;
-(void)getSearchIndexProgress:(/*^block*/id)arg1 ;
-(BOOL)setKeywords:(id)arg1 forAssetWithUUID:(id)arg2 ;
-(BOOL)invalidateReverseLocationDataOnAllAssetsWithError:(id*)arg1 ;
-(BOOL)registerBackgroundJobServiceIfNecessaryOnLibraryPath:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)getBackgroundJobServiceStateWithError:(id*)arg1 ;
-(id)getBackgroundJobServiceBundlesInQueueDictionaryWithError:(id*)arg1 ;
-(BOOL)backgroundJobServiceRemoveAllBundleRecordsFromProcessingSet:(id*)arg1 ;
-(BOOL)invalidateBehavioralScoreOnAllAssetsWithError:(id*)arg1 ;
@end

