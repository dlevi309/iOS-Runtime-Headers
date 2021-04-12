/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdDebugClient : PLAssetsdBaseClient
-(void)resetDupesAnalysis;
-(BOOL)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithError:(id*)arg1 ;
-(BOOL)cleanupEmptyHighlightsWithError:(id*)arg1 ;
-(BOOL)updateHighlightTitlesWithError:(id*)arg1 ;
-(BOOL)processUnprocessedMomentLocationsWithError:(id*)arg1 ;
-(BOOL)processRecentHighlightsWithError:(id*)arg1 ;
-(void)privateDownloadCloudPhotoLibraryAsset:(id)arg1 resourceType:(unsigned long long)arg2 highPriority:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)identifyAssetsWithInconsistentCloudState;
-(void)enqueuePrefetch;
-(id)getStatus;
-(void)recoverAssetsInInconsistentCloudState;
-(void)rebuildAllThumbnails;
-(void)updateSiriVocabulary;
-(void)coalesceJournalsForPayloadClassIDs:(id)arg1 withChangeJournalOverThreshold:(float)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)snapshotJournalsForPayloadClassIDs:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)getCPLState;
-(id)deferredLogDumpWithFormat:(id)arg1 ;
-(void)unloadImageFilesForAsset:(id)arg1 minimumFormat:(int)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)rebuildMomentsDeletingExistingMoments:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)rebuildHighlightsDeletingExistingHighlights:(BOOL)arg1 error:(id*)arg2 ;
-(void)dropSearchIndexWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)dumpMetadataForMomentsWithOutputPath:(id)arg1 metadataDirectory:(id*)arg2 error:(id*)arg3 ;
-(BOOL)allMomentsMetadataWithOutputPath:(id)arg1 metadataDictionary:(id*)arg2 error:(id*)arg3 ;
-(void)setSearchIndexPaused:(BOOL)arg1 reason:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)rebuildSearchIndexWithError:(id*)arg1 ;
-(BOOL)synchronouslySetSearchIndexPaused:(BOOL)arg1 reason:(id)arg2 error:(id*)arg3 ;
-(void)rebuildCloudFeed;
-(id)getXPCTransactionStatus;
-(BOOL)revertToOriginalForAsset:(id)arg1 error:(id*)arg2 ;
-(BOOL)debugSidecarFileURLsForAsset:(id)arg1 debugSidecarFileURLs:(id*)arg2 error:(id*)arg3 ;
-(void)pruneAssets:(id)arg1 resourceTypes:(id)arg2 ;
-(void)prefetchResourcesForMemories:(id)arg1 ;
-(void)prefetchResourcesForHighlights:(id)arg1 ;
-(void)prefetchResourcesWithMode:(long long)arg1 ;
-(id)momentGenerationStatus;
-(void)clearPrefetchState;
@end

