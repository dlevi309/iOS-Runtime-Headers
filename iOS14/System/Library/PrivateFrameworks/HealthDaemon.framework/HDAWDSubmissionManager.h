/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDAnalyticsSubmissionCoordinatorDelegate.h>

@protocol OS_dispatch_queue;
@class HDProfile, NSMutableDictionary, NSMutableArray, NSObject, _HDAWDPeriodicAction, NSString;

@interface HDAWDSubmissionManager : NSObject <HDHealthDaemonReadyObserver, HDDiagnosticObject, HDAnalyticsSubmissionCoordinatorDelegate> {

	HDProfile* _profile;
	NSMutableDictionary* _serverConnectionsByComponentId;
	NSMutableArray* _actions;
	NSObject*<OS_dispatch_queue> _queue;
	_HDAWDPeriodicAction* _fitnessDailyAction;
	BOOL _started;
	int _fitnessDailyCollectionEnabledNotifyToken;
	/*^block*/id _testHandler;

}

@property (nonatomic,copy) id testHandler;                              //@synthesize testHandler=_testHandler - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;              //@synthesize profile=_profile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)daemonReady:(id)arg1 ;
-(id)_exerciseMinuteHoursFromDate:(id)arg1 toDate:(id)arg2 error:(id*)arg3 ;
-(id)_sleepConsistencyEventForMonthPriorToDate:(id)arg1 calendar:(id)arg2 ;
-(BOOL)_isBradycardiaDetectionEnabled;
-(id)_actions;
-(void)resetTask:(id)arg1 ;
-(id)testHandler;
-(void)_resetMobileAssetsDownloadedPast24Hours;
-(id)_ecgClassificationsBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(BOOL)runTask:(id)arg1 error:(id*)arg2 ;
-(BOOL)_addRowCountDeltaToEvent:(id)arg1 profile:(id)arg2 currentDate:(id)arg3 ;
-(BOOL)_computeAndSubmitSleepAlarmStatistics:(BOOL)arg1 ;
-(BOOL)_isTachycardiaDetectionEnabled;
-(BOOL)_enumerateAppleStandHoursFromDate:(id)arg1 toDate:(id)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)_submitMetric:(id)arg1 container:(id)arg2 connection:(id)arg3 force:(BOOL)arg4 ;
-(id)initWithProfile:(id)arg1 ;
-(id)_ecgAlgorithmVersion;
-(long long)_countMobileAssetsDownloadedPast24Hours;
-(long long)_manuallyEnteredTypesCountWithTransaction:(id)arg1 error:(id*)arg2 ;
-(void)reportDailyAnalyticsWithCoordinator:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)_objectRowCountWithTransaction:(id)arg1 afterRowId:(long long)arg2 error:(id*)arg3 ;
-(long long)_countRecordedTachogramsBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(BOOL)_computeAndSubmitSleepAlarmDailyReportWithAction:(id)arg1 force:(BOOL)arg2 ;
-(long long)_nonAppleSourcesCountWithTransaction:(id)arg1 error:(id*)arg2 ;
-(long long)_countAnalyzedTachogramsPast24Hours;
-(BOOL)isFitnessDailyCollectionEnabled;
-(BOOL)aggregateDatabaseSizeStats:(id)arg1 ;
-(BOOL)_computeAndSubmitHeartDailyAnalyticsWithAction:(id)arg1 force:(BOOL)arg2 ;
-(void)_queue_updateFitnessDailyCollectionEnabled;
-(id)_sleepNightEventFromSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 calendar:(id)arg4 ;
-(void)setTestHandler:(id)arg1 ;
-(id)_statisticsForTimeDeltas:(id)arg1 ;
-(id)diagnosticDescription;
-(BOOL)_updateDatabaseStatsEvent:(id)arg1 profile:(id)arg2 currentDate:(id)arg3 ;
-(long long)_deletedRowCountWithTransaction:(id)arg1 error:(id*)arg2 ;
-(void)_resetCountAnalyzedTachogramsPast24Hours;
-(HDProfile *)profile;
-(id)_serverConnectionForComponentId:(unsigned)arg1 ;
-(id)_activitySummaryForActivityCacheIndex:(long long)arg1 error:(id*)arg2 ;
-(void)_queue_start;
-(BOOL)_computeAndSubmitDatabaseStatsMetric:(BOOL)arg1 ;
-(void)updateFitnessDailyCollectionEnabled;
-(id)_hasWatchSourcesWithTransaction:(id)arg1 error:(id*)arg2 ;
-(id)_sleepSamplesBeforeDate:(id)arg1 days:(long long)arg2 startDate:(id*)arg3 endDate:(id*)arg4 calendar:(id)arg5 ;
-(id)_updateDeltaToInt64:(long long)arg1 forKey:(id)arg2 profile:(id)arg3 currentDate:(id)arg4 timeInterval:(double)arg5 error:(id*)arg6 ;
-(BOOL)_computeAndSubmitHealthTypesDifferentialPrivacyMetric;
-(id)_generateHeartDailyAnalyticsWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(long long)_nonAppleSourcesWithDataSince:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(long long)_countOfObjectsWithSQLQuery:(id)arg1 database:(id)arg2 error:(id*)arg3 bindingHandler:(/*^block*/id)arg4 ;
-(long long)_int64ForKeyPrefix:(id)arg1 profile:(id)arg2 date:(id*)arg3 error:(id*)arg4 ;
-(void)_registerForFitnessDailyCollection;
-(id)_aFibSamplesBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)_hourlyStatisticsCollectionForStartDate:(id)arg1 endDate:(id)arg2 quantityType:(id)arg3 statisticsOptions:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)_setInt64:(long long)arg1 keyPrefix:(id)arg2 profile:(id)arg3 date:(id)arg4 error:(id*)arg5 ;
-(long long)_CDACountWithTransaction:(id)arg1 error:(id*)arg2 ;
-(long long)_countActiveEnergySamplesBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)dealloc;
-(BOOL)_computeAndSubmitFitnessDailyReportWithAction:(id)arg1 force:(BOOL)arg2 ;
-(id)motionToken;
@end

