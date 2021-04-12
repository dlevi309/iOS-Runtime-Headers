/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLAggdLogging : NSObject
+(void)performMomentsStatisticsLogging:(id)arg1 ;
+(void)performCollectionsStaticsLogging:(id)arg1 ;
+(void)performYearsStaticsLogging:(id)arg1 ;
+(void)performSlideshowProjectStatisticsLogging:(id)arg1 ;
+(void)_addDistributionStatisticsOfValues:(id)arg1 withPrefix:(id)arg2 toDictionary:(id)arg3 formatter:(/*^block*/id)arg4 ;
+(id)_analyticsDescriptionForMediaAge:(double)arg1 ;
+(id)_analyticsDescriptionForAssetCount:(long long)arg1 ;
+(void)performAnalysisStateLogging:(id)arg1 library:(id)arg2 ;
+(void)_addPrefix:(id)arg1 toKeysInDictionary:(id)arg2 inPrefixedDictionary:(id)arg3 ;
+(id)_performMedianCalculation:(id)arg1 ;
+(BOOL)performHyperionLocalResourcesLoggingForContext:(id)arg1 cloudPhotoLibraryEnabled:(BOOL)arg2 prefixAggdDataForCK:(id)arg3 dataForCA:(id)arg4 ;
+(double)_getDateMedian:(id)arg1 fromStartDate:(id)arg2 forCameraCapture:(BOOL)arg3 ;
+(void)performLibrarySummaryLogging:(id)arg1 ;
+(void)_addLibrarySummaryDataToCollectionIfPresent:(id)arg1 fromCPLEventData:(id)arg2 forKey:(id)arg3 ;
+(void)performPersistentHistorySummaryLogging:(id)arg1 ;
+(void)performCMMSummaryLogging:(id)arg1 cloudPhotoLibraryEnabled:(BOOL)arg2 ;
+(void)performLibraryStatisticsLoggingForLibrary:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

