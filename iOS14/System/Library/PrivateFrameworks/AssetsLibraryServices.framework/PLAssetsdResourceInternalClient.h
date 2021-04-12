/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdResourceInternalClient : PLAssetsdBaseClient
-(void)requestMasterThumbnailForAssetUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)purgeExpiredOutboundSharingAssetsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)batchSaveAssetsWithJobDictionaries:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)prepareRevertToOriginalForAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

