/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_dispatch_queue;
@class HDProfile, NSMutableDictionary, NSMutableArray, NSObject, _HDAWDPeriodicAction, NSString;

@interface HDAWDSubmissionManager : NSObject <HDHealthDaemonReadyObserver, HDDiagnosticObject> {

	HDProfile* _profile;
	NSMutableDictionary* _serverConnectionsByComponentId;
	NSMutableArray* _actions;
	NSObject*<OS_dispatch_queue> _queue;
	_HDAWDPeriodicAction* _fitnessDailyAction;
	BOOL _started;
	int _fitnessDailyCollectionEnabledNotifyToken;
	/*^block*/id _testHandler;

}

@property (nonatomic,copy) id testHandler;                                      //@synthesize testHandler=_testHandler - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                      //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) double activitySummaryQueryTimeout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(HDProfile *)profile;
-(id)initWithProfile:(id)arg1 ;
-(id)_actions;
-(id)diagnosticDescription;
-(void)daemonReady:(id)arg1 ;
-(id)_serverConnectionForComponentId:(unsigned)arg1 ;
-(void)_queue_start;
-(BOOL)_computeAndSubmitDatabaseStatsMetric:(BOOL)arg1 ;
-(BOOL)_computeAndSubmitSleepAlarmStatistics:(BOOL)arg1 ;
-(BOOL)_computeAndSubmitSleepAlarmDailyReportWithAction:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)_computeAndSubmitHeartDailyAnalyticsWithAction:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)_computeAndSubmitFitnessDailyReportWithAction:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)_computeAndSubmitHealthTypesDifferentialPrivacyMetric;
-(void)_registerForFitnessDailyCollection;
-(void)_queue_updateFitnessDailyCollectionEnabled;
-(BOOL)isFitnessDailyCollectionEnabled;
-(long long)_countOfObjectsWithSQLQuery:(id)arg1 database:(id)arg2 error:(id*)arg3 bindingHandler:(/*^block*/id)arg4 ;
-(long long)_int64ForKeyPrefix:(id)arg1 profile:(id)arg2 date:(id*)arg3 error:(id*)arg4 ;
-(BOOL)_setInt64:(long long)arg1 keyPrefix:(id)arg2 profile:(id)arg3 date:(id)arg4 error:(id*)arg5 ;
-(id)_updateMonthDeltaToInt64:(long long)arg1 forKey:(id)arg2 profile:(id)arg3 currentDate:(id)arg4 error:(id*)arg5 ;
-(BOOL)_updateDatabaseStatsEvent:(id)arg1 profile:(id)arg2 currentDate:(id)arg3 ;
-(long long)_objectRowCountWithTransaction:(id)arg1 afterRowId:(long long)arg2 error:(id*)arg3 ;
-(long long)_deletedRowCountWithTransaction:(id)arg1 error:(id*)arg2 ;
-(long long)_CDACountWithTransaction:(id)arg1 error:(id*)arg2 ;
-(long long)_manuallyEnteredTypesCountWithTransaction:(id)arg1 error:(id*)arg2 ;
-(long long)_nonAppleSourcesCountWithTransaction:(id)arg1 error:(id*)arg2 ;
-(long long)_nonAppleSourcesWithDataSince:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(id)_hasWatchSourcesWithTransaction:(id)arg1 error:(id*)arg2 ;
-(BOOL)_addRowCountDeltaToEvent:(id)arg1 profile:(id)arg2 currentDate:(id)arg3 ;
-(BOOL)_submitMetric:(id)arg1 container:(id)arg2 connection:(id)arg3 force:(BOOL)arg4 ;
-(id)_newActivitySummaryQueryHelperWithFilter:(id)arg1 initialResultsHandler:(/*^block*/id)arg2 ;
-(double)activitySummaryQueryTimeout;
-(id)_hourlyStatisticsCollectionForStartDate:(id)arg1 endDate:(id)arg2 quantityType:(id)arg3 statisticsOptions:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)motionToken;
-(BOOL)_activitySummaryForActivitySummaryIndex:(long long)arg1 activitySummaryOut:(id*)arg2 error:(id*)arg3 ;
-(id)_exerciseMinuteHoursFromDate:(id)arg1 toDate:(id)arg2 error:(id*)arg3 ;
-(BOOL)_enumerateAppleStandHoursFromDate:(id)arg1 toDate:(id)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
-(id)_sleepSamplesBeforeDate:(id)arg1 days:(long long)arg2 startDate:(id*)arg3 endDate:(id*)arg4 calendar:(id)arg5 ;
-(id)_sleepNightEventFromSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 calendar:(id)arg4 ;
-(id)_ecgClassificationsBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)_aFibSamplesBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)_generateHeartDailyAnalyticsWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)_statisticsForTimeDeltas:(id)arg1 ;
-(id)_sleepConsistencyEventForMonthPriorToDate:(id)arg1 calendar:(id)arg2 ;
-(void)updateFitnessDailyCollectionEnabled;
-(BOOL)runTask:(id)arg1 error:(id*)arg2 ;
-(void)resetTask:(id)arg1 ;
-(id)testHandler;
-(void)setTestHandler:(id)arg1 ;
@end

