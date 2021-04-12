/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/SleepDaemon-Structs.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>
#import <libobjc.A.dylib/HDSPTimeChangeObserver.h>

@protocol HDSPActivityScheduler;
@class HDSPEnvironment, HKSPAnalyticsManager, NSString;

@interface HDSPAnalyticsManager : NSObject <HDSPEnvironmentAware, HDSPTimeChangeObserver> {

	BOOL _isDataCollectionInProgress;
	os_unfair_lock_s _analyticsLock;
	HDSPEnvironment* _environment;
	id<HDSPActivityScheduler> _dataCollectionScheduler;
	HKSPAnalyticsManager* _analyticsManager;

}

@property (nonatomic,readonly) os_unfair_lock_s analyticsLock;                                 //@synthesize analyticsLock=_analyticsLock - In the implementation block
@property (nonatomic,readonly) id<HDSPActivityScheduler> dataCollectionScheduler;              //@synthesize dataCollectionScheduler=_dataCollectionScheduler - In the implementation block
@property (nonatomic,readonly) BOOL isDataCollectionInProgress;                                //@synthesize isDataCollectionInProgress=_isDataCollectionInProgress - In the implementation block
@property (nonatomic,readonly) HKSPAnalyticsManager * analyticsManager;                        //@synthesize analyticsManager=_analyticsManager - In the implementation block
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;                           //@synthesize environment=_environment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dailyCollectionActivity;
-(void)environmentDidBecomeReady:(id)arg1 ;
-(void)environmentWillBecomeReady:(id)arg1 ;
-(id)currentDate;
-(void)_withLock:(/*^block*/id)arg1 ;
-(void)significantTimeChangeDetected:(id)arg1 ;
-(HKSPAnalyticsManager *)analyticsManager;
-(id)initWithEnvironment:(id)arg1 ;
-(HDSPEnvironment *)environment;
-(BOOL)isDataCollectionEnabled;
-(id)initWithEnvironment:(id)arg1 analyticsManager:(id)arg2 dataCollectionScheduler:(id)arg3 ;
-(void)updateScheduledActivity;
-(void)scheduleDailyCollectionActivity;
-(void)cancelDailyCollectionActivity;
-(id<HDSPActivityScheduler>)dataCollectionScheduler;
-(void)_lock_executeQuery;
-(BOOL)isDataCollectionInProgress;
-(SCD_Struct_HD1)_queryMorningIndexRangeForDate:(id)arg1 ;
-(void)_processQueryResultsWithSummaries:(id)arg1 queryRange:(SCD_Struct_HD1)arg2 error:(id)arg3 ;
-(id)_makeReportQueryWithMorningIndexRange:(SCD_Struct_HD1)arg1 resultsHandler:(/*^block*/id)arg2 ;
-(void)_submitAnalyticsReportsUsingBuilder:(id)arg1 ;
-(void)_pruneExpiredWindDownActionDataBeforeQueryRange:(SCD_Struct_HD1)arg1 ;
-(void)_unit_testing_pruneExpiredWindDownActionData;
-(os_unfair_lock_s)analyticsLock;
@end

