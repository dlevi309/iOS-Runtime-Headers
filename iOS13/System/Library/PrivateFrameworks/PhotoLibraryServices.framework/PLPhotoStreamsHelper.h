/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLPhotoStreamsHelper : NSObject {

	BOOL _appHasPolledOnceThisForegroundSession;

}
+(BOOL)photoStreamsEnabledForPhotoLibraryURL:(id)arg1 ;
+(id)sharedPhotoStreamsHelper;
+(void)deletePhotoStreamAssetsWithLibraryServiceManager:(id)arg1 withReason:(id)arg2 jobStreamID:(id)arg3 completion:(/*^block*/id)arg4 ;
+(id)iCloudServiceAccount;
+(BOOL)_photoStreamsEnabled;
+(BOOL)writeBreadcrumbContent:(id)arg1 forHashString:(id)arg2 ;
+(BOOL)canInitiateDistributedPhotoStreamDeletionForAssetUUID:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_accountStoreDidChange:(id)arg1 ;
-(void)cleanupPhotoStreamMetadataForAssetsWithUUIDs:(id)arg1 forStreamID:(id)arg2 ;
-(void)initiateDeletionOfOriginalAssets:(id)arg1 ;
-(void)initiateDeletionOfPhotoStreamAssets:(id)arg1 ;
-(id)photoStreamsPublishStreamID;
-(void)clearCachedAccountState;
-(BOOL)enqueueAssetForPSPublishing:(id)arg1 fullPath:(id)arg2 fileSize:(id)arg3 reenqueueCount:(unsigned long long)arg4 publicGlobalUUID:(id*)arg5 ;
-(void)pollForNewSubscriptionContent;
-(void)savePhotoStreamMetadata:(id)arg1 forAsset:(id)arg2 ;
-(void)_clearPhotoStreamAccountSettings;
-(void)_appDidEnterBackground:(id)arg1 ;
-(id)psHashForData:(id)arg1 ;
-(id)psHashAsString:(id)arg1 ;
-(id)lastPhotoStreamUpdateDate;
-(BOOL)removeBreadcrumbsForHashString:(id)arg1 ;
-(void)writeWillEnqueueBreadcrumbForHash:(id)arg1 imagePath:(id)arg2 ;
-(void)writeDidEnqueueBreadcrumbForHash:(id)arg1 imagePath:(id)arg2 ;
-(void)writeDidPublishBreadcrumbforHash:(id)arg1 imagePath:(id)arg2 ;
-(BOOL)isValidUploadAsset:(id)arg1 type:(id)arg2 fileSize:(id)arg3 ;
-(BOOL)dequeueAssetsForPSPublishing:(id)arg1 ;
-(void)pollForNewSubscriptionContentOncePerAppForegroundSession;
-(BOOL)shouldPublishScreenShots;
-(long long)_serverIntegerLimitForKey:(id)arg1 debugDefaultKey:(id)arg2 ;
-(id)imageLimitsByAssetType;
-(long long)maxPixelSizeForDerivative;
-(long long)imageLimitForOwnStream;
-(long long)imageLimitForFriendStream;
-(long long)friendsLimit;
-(id)temporaryPathForConvertedAssetWithUUID:(id)arg1 ;
-(id)temporaryPathForRecentlyUploadedAsset:(id)arg1 ;
-(CGSize)derivedAssetSizeForMasterSizeWidth:(double)arg1 height:(double)arg2 ;
-(id)derivedAssetForMasterAsset:(id)arg1 ;
-(id)pathToSavedMetadataForAssetHash:(id)arg1 streamID:(id)arg2 createIntermediateDirs:(BOOL)arg3 ;
-(void)resetServerState;
-(id)pause_mstreamd;
-(void)resume_mstreamd:(id)arg1 ;
-(void)enumerateMasterHashesAndPublicGlobalUUIDsForAssets:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)fetchMPSStateWithCompletion:(/*^block*/id)arg1 ;
-(void)handleMPSStateIfNecessary;
@end

