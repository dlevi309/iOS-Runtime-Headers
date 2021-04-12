/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLAggdLogging : NSObject
+(void)performMomentsStatisticsLogging:(id)arg1 ;
+(void)performCollectionsStaticsLogging:(id)arg1 ;
+(void)performYearsStaticsLogging:(id)arg1 ;
+(void)performAnalysisStateLogging:(id)arg1 library:(id)arg2 ;
+(void)performHyperionLocalResourcesLoggingForContext:(id)arg1 cloudPhotoLibraryEnabled:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)_addPrefix:(id)arg1 toKeysInDictionary:(id)arg2 ;
+(double)_getDateMedian:(id)arg1 fromStartDate:(id)arg2 forCameraCapture:(BOOL)arg3 ;
+(id)_performMedianCalculation:(id)arg1 ;
+(void)_addLibrarySummaryDataToCollectionIfPresent:(id)arg1 fromCPLEventData:(id)arg2 forKey:(id)arg3 ;
+(void)performLibrarySummaryLogging:(id)arg1 ;
+(void)performPersistentHistorySummaryLogging:(id)arg1 ;
+(void)performCMMSummaryLogging:(id)arg1 cloudPhotoLibraryEnabled:(BOOL)arg2 ;
+(void)performLibraryStatisticsLoggingForLibrary:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

