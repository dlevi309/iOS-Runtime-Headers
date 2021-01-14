/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdCloudClient : PLAssetsdBaseClient
-(void)cancelCPLDownloadWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)computeFingerPrintsOfAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestVideoPlaybackURLForCloudSharedAsset:(id)arg1 mediaAssetType:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)downloadCloudPhotoLibraryAsset:(id)arg1 resourceType:(unsigned long long)arg2 highPriority:(BOOL)arg3 trackCPLDownload:(BOOL)arg4 downloadIsTransient:(BOOL)arg5 proposedTaskIdentifier:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)cancelCPLDownloadImageDataWithVirtualTaskIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestCPLDownloadImageDataForAssets:(id)arg1 format:(unsigned long long)arg2 doneTokens:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

