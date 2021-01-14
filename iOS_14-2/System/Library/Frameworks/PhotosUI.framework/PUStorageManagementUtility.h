/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@interface PUStorageManagementUtility : NSObject
+(id)systemPhotoLibrary;
+(BOOL)isCPLEnabled;
+(BOOL)shouldHideCPL;
+(void)purgeableSizeAndOriginalsInLibrary:(/*^block*/id)arg1 ;
+(BOOL)isCPLInExitMode;
+(id)_assetsInTrash;
+(id)sizeForRecentlyDeletedItems;
+(BOOL)isDeletableItemsInTrash;
+(id)_assetsWithSpatialOvercaptureResources;
+(id)sizeForTrashedSpatialOvercaptureResources;
+(BOOL)isOptimizedModeOn;
+(void)enableOptimizedMode:(BOOL)arg1 ;
+(void)enableCPLWithCompletionBlock:(/*^block*/id)arg1 ;
+(void)expungeRecentlyDeletedItemsWithCompletionBlock:(/*^block*/id)arg1 ;
+(void)expungeTrashedSpatialOverCaptureResourcesWithCompletionBlock:(/*^block*/id)arg1 ;
+(id)stringWithSizeUnitForValue:(id)arg1 ;
+(id)fetchVideoAssetsBySizeWithSortOrder:(BOOL)arg1 ;
+(id)_defaultVideoAssetFetchOptionsWithSortOrder:(BOOL)arg1 fetchLimit:(unsigned long long)arg2 minimumFileSize:(unsigned long long)arg3 ;
+(id)_deleteableVideoAssets;
+(unsigned long long)totalReclaimableSizeFromPurgingVideoClips;
+(id)significantItems;
+(BOOL)isCPLInInitialUploadingState;
@end

