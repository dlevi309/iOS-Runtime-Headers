/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLCloudPhotoLibraryHelper : NSObject
+(void)disableCPL:(/*^block*/id)arg1 ;
+(void)enableCPL:(/*^block*/id)arg1 ;
+(void)setShouldMarkPurgeableResourcesOnce:(BOOL)arg1 ;
+(void)setShouldClearPurgeableResourcesOnce:(BOOL)arg1 ;
+(void)setShouldHandleOptimizeModeChange:(BOOL)arg1 ;
+(void)setShouldSendOptimizeFeedbackOnce:(BOOL)arg1 ;
+(BOOL)shouldMarkPurgeableResourcesOnce;
+(void)setShouldRepushMasterWithMissingMediaMetadataOnce:(BOOL)arg1 ;
+(BOOL)shouldRepushMasterWithMissingMediaMetadataOnce;
+(void)setShouldRepushVideoAssetsMetadataOnce:(BOOL)arg1 ;
+(BOOL)shouldRepushVideoAssetsMetadataOnce;
+(BOOL)shouldHandleOptimizeModeChange;
+(BOOL)shouldSendOptimizeFeedbackOnce;
+(BOOL)shouldClearPurgeableResourcesOnce;
@end

