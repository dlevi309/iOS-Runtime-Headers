/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLCloudPhotoLibraryHelper : NSObject
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
+(void)enableCPL:(/*^block*/id)arg1 ;
+(void)disableCPL:(/*^block*/id)arg1 ;
@end

