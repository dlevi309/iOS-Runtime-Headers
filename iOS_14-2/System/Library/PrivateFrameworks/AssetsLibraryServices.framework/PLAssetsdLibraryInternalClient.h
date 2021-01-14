/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdLibraryInternalClient : PLAssetsdBaseClient
-(BOOL)synchronouslyGetLibrarySizesFromDB:(BOOL)arg1 sizes:(id*)arg2 error:(id*)arg3 ;
-(void)setFetchFilterWithAssets:(id)arg1 forApplication:(id)arg2 withAuditToken:(SCD_Struct_PL11)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)markPersonAsNeedingKeyFace:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)synchronouslyMarkPersonAsNeedingKeyFace:(id)arg1 error:(id*)arg2 ;
-(BOOL)backgroundJobServiceRemoveAllBundleRecordsFromProcessingSet:(id*)arg1 ;
-(BOOL)repairMemoriesWithUUIDs:(id)arg1 error:(id*)arg2 ;
-(BOOL)synchronouslyGetSizeOfResourcesToUploadByCPL:(long long*)arg1 error:(id*)arg2 ;
-(void)getSearchIndexProgress:(/*^block*/id)arg1 ;
-(BOOL)setKeywords:(id)arg1 forAssetWithUUID:(id)arg2 ;
-(void)getAssetCountsWithReply:(/*^block*/id)arg1 ;
-(void)deleteiTunesSyncedContentWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setWidgetTimelineGeneratedForDisplaySize:(CGSize)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)applySearchIndexUpdates:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)getBackgroundJobServiceStateWithError:(id*)arg1 ;
-(BOOL)registerBackgroundJobServiceIfNecessaryOnLibraryPath:(id)arg1 error:(id*)arg2 ;
-(void)updateAssetLocationDataWithUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resetLimitedLibraryAccessForApplication:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)getBackgroundJobServiceBundlesInQueueDictionaryWithError:(id*)arg1 ;
-(void)reloadMomentGenerationOptions;
-(BOOL)invalidateBehavioralScoreOnAllAssetsWithError:(id*)arg1 ;
-(void)waitForSearchIndexExistence:(/*^block*/id)arg1 ;
-(BOOL)invalidateReverseLocationDataOnAllAssetsWithError:(id*)arg1 ;
-(void)applySearchIndexGraphUpdates:(id)arg1 supportingData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getLibrarySizesFromDB:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

