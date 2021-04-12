/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLPhotoStreamsHelper : NSObject {

	BOOL _appHasPolledOnceThisForegroundSession;

}
+(void)deletePhotoStreamAssetsWithLibraryServiceManager:(id)arg1 withReason:(id)arg2 jobStreamID:(id)arg3 completion:(/*^block*/id)arg4 ;
+(BOOL)_photoStreamsEnabled;
+(BOOL)photoStreamsEnabledForPhotoLibraryURL:(id)arg1 ;
+(id)sharedPhotoStreamsHelper;
+(id)iCloudServiceAccount;
+(BOOL)writeBreadcrumbContent:(id)arg1 forHashString:(id)arg2 ;
-(long long)friendsLimit;
-(id)temporaryPathForConvertedAssetWithUUID:(id)arg1 ;
-(void)handleMPSStateIfNecessaryInLibrary:(id)arg1 ;
-(id)lastPhotoStreamUpdateDate;
-(void)writeDidPublishBreadcrumbforHash:(id)arg1 imagePath:(id)arg2 ;
-(BOOL)isValidUploadAsset:(id)arg1 type:(id)arg2 fileSize:(id)arg3 ;
-(void)pollForNewSubscriptionContentOncePerAppForegroundSession;
-(id)init;
-(id)pathToSavedMetadataForAssetHash:(id)arg1 streamID:(id)arg2 createIntermediateDirs:(BOOL)arg3 ;
-(id)temporaryPathForRecentlyUploadedAsset:(id)arg1 ;
-(void)_accountStoreDidChange:(id)arg1 ;
-(void)fetchMPSStateWithLibrary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)initiateDeletionOfOriginalAssets:(id)arg1 ;
-(BOOL)dequeueAssetsForPSPublishing:(id)arg1 ;
-(BOOL)enqueueAssetForPSPublishing:(id)arg1 fullPath:(id)arg2 fileSize:(id)arg3 reenqueueCount:(unsigned long long)arg4 publicGlobalUUID:(id*)arg5 ;
-(id)psHashAsString:(id)arg1 ;
-(long long)maxPixelSizeForDerivative;
-(id)derivedAssetForMasterAsset:(id)arg1 ;
-(void)pollForNewSubscriptionContent;
-(void)writeWillEnqueueBreadcrumbForHash:(id)arg1 imagePath:(id)arg2 ;
-(void)clearCachedAccountState;
-(long long)imageLimitForOwnStream;
-(void)cleanupPhotoStreamMetadataForAssetsWithUUIDs:(id)arg1 forStreamID:(id)arg2 ;
-(long long)_serverIntegerLimitForKey:(id)arg1 debugDefaultKey:(id)arg2 ;
-(void)resetServerState;
-(void)resume_mstreamd:(id)arg1 ;
-(BOOL)shouldPublishScreenShots;
-(BOOL)removeBreadcrumbsForHashString:(id)arg1 ;
-(void)enumerateMasterHashesAndPublicGlobalUUIDsForAssets:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(CGSize)derivedAssetSizeForMasterSizeWidth:(double)arg1 height:(double)arg2 ;
-(void)initiateDeletionOfPhotoStreamAssets:(id)arg1 ;
-(void)_appDidEnterBackground:(id)arg1 ;
-(id)psHashForData:(id)arg1 ;
-(long long)imageLimitForFriendStream;
-(id)imageLimitsByAssetType;
-(void)_clearPhotoStreamAccountSettings;
-(void)writeDidEnqueueBreadcrumbForHash:(id)arg1 imagePath:(id)arg2 ;
-(id)pause_mstreamd;
-(id)photoStreamsPublishStreamID;
-(void)dealloc;
-(void)savePhotoStreamMetadata:(id)arg1 forAsset:(id)arg2 ;
@end

