/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <PhotoAnalysis/PHAWorker.h>

@protocol OS_dispatch_queue, OS_os_log;
@class NSObject;

@interface PHAPresentationWorker : PHAWorker {

	NSObject*<OS_dispatch_queue> _backgroundTaskQueue;
	NSObject*<OS_os_log> _loggingConnection;

}

@property (nonatomic,readonly) NSObject*<OS_os_log> loggingConnection;              //@synthesize loggingConnection=_loggingConnection - In the implementation block
+(id)_dateFormatter;
+(void)configureXPCConnection:(id)arg1 ;
+(BOOL)persistsState;
+(id)_meContact;
+(id)_fetchLibrarySummaryForPhotoLibrary:(id)arg1 ;
+(id)_genderDescriptionFromGivenName:(id)arg1 ;
+(id)_fetchDemographicsSummary;
+(long long)applicationDataFolderIdentifier;
+(void)_findAndSetFeaturedStateForMemoriesAndSuggestionsIfNeededInPhotoLibrary:(id)arg1 ;
+(id)_ageRangeDescriptionFromBirthday:(id)arg1 ;
+(BOOL)reloadWidgetTimelineWithPhotoLibrary:(id)arg1 error:(id*)arg2 ;
+(short)workerType;
+(void)_findSuggestionsAndSetFeaturedStateIfNeededInPhotoLibrary:(id)arg1 ;
+(void)_findMemoriesAndSetFeaturedStateIfNeededInPhotoLibrary:(id)arg1 ;
+(id)_domainErrorWithCode:(long long)arg1 ;
-(NSObject*<OS_os_log>)loggingConnection;
-(void)cooldown;
-(id)featuresUsageReportingJobWithScenario:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_buildPropertyCache;
-(BOOL)cacheCPAnalyticsPropertiesWithError:(id*)arg1 ;
-(void)warmupWithProgressBlock:(/*^block*/id)arg1 ;
-(BOOL)hasAdditionalJobsForScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2 ;
-(BOOL)_hasAdditionalJobForCachingCPAnalyticsPropertiesInScenario:(unsigned long long)arg1 ;
-(void)cacheCPAnalyticsPropertiesWithOptions:(id)arg1 context:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_hasAdditionalJobForMediaSampleReportingInScenario:(unsigned long long)arg1 ;
-(BOOL)_shouldAllowBackgroundActivityWithDescription:(id)arg1 ;
-(id)_libraryScopedWorkerFeaturesUsageWithError:(id*)arg1 ;
-(BOOL)_didExceedTimeInterval:(double)arg1 forBackgroundJobUserDefaultsKey:(id)arg2 ;
-(BOOL)stopAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(BOOL)_hasAdditionalJobForFeaturesUsageReportingInScenario:(unsigned long long)arg1 ;
-(void)cacheCPAnalyticsPropertiesWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)reportFeaturesUsageWithOptions:(id)arg1 context:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_libraryScopedWorkerFeaturesUsageURL;
-(id)mediaSampleReportingJobWithScenario:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reloadWidgetTimelineWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)reset;
-(void)_reportMediaSampleWithOptions:(id)arg1 context:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)recordFeatureUsageFromCounts:(id)arg1 error:(id*)arg2 ;
-(id)nextAdditionalJobWithScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2 ;
-(BOOL)canRunWhenGraphIsLoaded;
-(BOOL)startAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(void)recordFeatureUsageFromCounts:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2 ;
-(id)cacheCPAnalyticsPropertiesJobWithScenario:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

