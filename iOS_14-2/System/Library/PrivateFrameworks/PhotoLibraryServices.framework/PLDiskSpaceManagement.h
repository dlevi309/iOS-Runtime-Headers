/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLDiskSpaceManagement : NSObject
+(unsigned long long)performCloudSharingSpaceManagementWithBytesToPurge:(unsigned long long)arg1 shouldFreeSpace:(BOOL)arg2 shouldKeepRecentlyViewedAssets:(BOOL)arg3 fromPhotoLibrary:(id)arg4 ;
+(unsigned long long)purgeExpiredOutboundSharingAssetsFromPhotoLibrary:(id)arg1 ;
+(unsigned long long)_scanFilesInPhotoLibrary:(id)arg1 fromReimportPhotoCloudSharingDataDirectoryShouldFreeSpace:(BOOL)arg2 bytesToPurge:(unsigned long long)arg3 ;
+(unsigned long long)_scanFilesInPhotoLibrary:(id)arg1 fromCloudSharingCacheDataDirectoryShouldFreeSpace:(BOOL)arg2 bytesToPurge:(unsigned long long)arg3 ;
+(unsigned long long)_scanFilesInPhotoLibrary:(id)arg1 fromPhotoMetadataDirectoryShouldFreeSpace:(BOOL)arg2 bytesToPurge:(unsigned long long)arg3 skipAssets:(id)arg4 ;
+(unsigned long long)_scanAndDeleteCacheFilesInDirectory:(id)arg1 shouldFreeSpace:(BOOL)arg2 bytesToPurge:(unsigned long long)arg3 ;
+(long long)_processCloudSharedAsset:(id)arg1 shouldFreeSpace:(BOOL)arg2 ;
@end

