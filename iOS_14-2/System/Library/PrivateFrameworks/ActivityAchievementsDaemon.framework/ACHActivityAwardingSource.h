/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDCurrentActivitySummaryHelperObserver.h>
#import <libobjc.A.dylib/ACHDataStorePropertyProviding.h>
#import <libobjc.A.dylib/ACHEarnedInstanceAwarding.h>
#import <libobjc.A.dylib/ACHAchievementProgressProviding.h>

@protocol OS_dispatch_queue;
@class NSCalendar, HDProfile, ACHEarnedInstanceAwardingEngine, ACHAchievementProgressEngine, ACHDataStore, ACHTemplateStore, ACHActivityAwardingDataProvider, ACHActivityTriggerGenerator, ACHActivityAwardingEnvironment, NSMutableArray, HKActivitySummary, ACHActivitySummaryUtility, NSObject, NSNumber, NSString, NSArray, NSDictionary;

@interface ACHActivityAwardingSource : NSObject <HDHealthDaemonReadyObserver, HDCurrentActivitySummaryHelperObserver, ACHDataStorePropertyProviding, ACHEarnedInstanceAwarding, ACHAchievementProgressProviding> {

	BOOL _isObservingSummaryUpdates;
	NSCalendar* _gregorianUTCCalendar;
	HDProfile* _profile;
	ACHEarnedInstanceAwardingEngine* _engine;
	ACHAchievementProgressEngine* _progressProvider;
	ACHDataStore* _dataStore;
	ACHTemplateStore* _templateStore;
	ACHActivityAwardingDataProvider* _dataProvider;
	ACHActivityTriggerGenerator* _triggerGenerator;
	ACHActivityAwardingEnvironment* _environment;
	NSMutableArray* _currentTemplates;
	ACHActivityAwardingDataProvider* _progressDataProvider;
	ACHActivityAwardingEnvironment* _progressEnvironment;
	HKActivitySummary* _todayActivitySummary;
	HKActivitySummary* _yesterdayActivitySummary;
	ACHActivitySummaryUtility* _activitySummaryUtility;
	/*^block*/id _incrementalUpdateCompletionHandler;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSNumber* _overrideIsAppleWatch;
	NSString* _overrideWatchCountryCode;
	NSString* _watchCountryCode;

}

@property (nonatomic,retain) NSCalendar * gregorianUTCCalendar;                                   //@synthesize gregorianUTCCalendar=_gregorianUTCCalendar - In the implementation block
@property (assign,nonatomic,__weak) HDProfile * profile;                                          //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic,__weak) ACHEarnedInstanceAwardingEngine * engine;                     //@synthesize engine=_engine - In the implementation block
@property (assign,nonatomic,__weak) ACHAchievementProgressEngine * progressProvider;              //@synthesize progressProvider=_progressProvider - In the implementation block
@property (assign,nonatomic,__weak) ACHDataStore * dataStore;                                     //@synthesize dataStore=_dataStore - In the implementation block
@property (assign,nonatomic,__weak) ACHTemplateStore * templateStore;                             //@synthesize templateStore=_templateStore - In the implementation block
@property (nonatomic,retain) ACHActivityAwardingDataProvider * dataProvider;                      //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,retain) ACHActivityTriggerGenerator * triggerGenerator;                      //@synthesize triggerGenerator=_triggerGenerator - In the implementation block
@property (nonatomic,retain) ACHActivityAwardingEnvironment * environment;                        //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentTemplates;                                   //@synthesize currentTemplates=_currentTemplates - In the implementation block
@property (nonatomic,retain) ACHActivityAwardingDataProvider * progressDataProvider;              //@synthesize progressDataProvider=_progressDataProvider - In the implementation block
@property (nonatomic,retain) ACHActivityAwardingEnvironment * progressEnvironment;                //@synthesize progressEnvironment=_progressEnvironment - In the implementation block
@property (nonatomic,retain) HKActivitySummary * todayActivitySummary;                            //@synthesize todayActivitySummary=_todayActivitySummary - In the implementation block
@property (nonatomic,retain) HKActivitySummary * yesterdayActivitySummary;                        //@synthesize yesterdayActivitySummary=_yesterdayActivitySummary - In the implementation block
@property (nonatomic,retain) ACHActivitySummaryUtility * activitySummaryUtility;                  //@synthesize activitySummaryUtility=_activitySummaryUtility - In the implementation block
@property (nonatomic,copy) id incrementalUpdateCompletionHandler;                                 //@synthesize incrementalUpdateCompletionHandler=_incrementalUpdateCompletionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;                          //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSNumber * overrideIsAppleWatch;                                     //@synthesize overrideIsAppleWatch=_overrideIsAppleWatch - In the implementation block
@property (nonatomic,readonly) BOOL isAppleWatch; 
@property (nonatomic,retain) NSString * overrideWatchCountryCode;                                 //@synthesize overrideWatchCountryCode=_overrideWatchCountryCode - In the implementation block
@property (nonatomic,retain) NSString * watchCountryCode;                                         //@synthesize watchCountryCode=_watchCountryCode - In the implementation block
@property (assign,nonatomic) BOOL isObservingSummaryUpdates;                                      //@synthesize isObservingSummaryUpdates=_isObservingSummaryUpdates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (nonatomic,readonly) NSArray * dataStorePropertyKeys; 
@property (nonatomic,retain) NSDictionary * dataStoreProperties; 
-(ACHDataStore *)dataStore;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)daemonReady:(id)arg1 ;
-(ACHEarnedInstanceAwardingEngine *)engine;
-(void)setProfile:(HDProfile *)arg1 ;
-(void)setEngine:(ACHEarnedInstanceAwardingEngine *)arg1 ;
-(void)setDataProvider:(ACHActivityAwardingDataProvider *)arg1 ;
-(NSString *)uniqueName;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(HKActivitySummary *)todayActivitySummary;
-(HKActivitySummary *)yesterdayActivitySummary;
-(void)setDataStore:(ACHDataStore *)arg1 ;
-(ACHTemplateStore *)templateStore;
-(ACHActivitySummaryUtility *)activitySummaryUtility;
-(ACHActivityAwardingDataProvider *)dataProvider;
-(HDProfile *)profile;
-(BOOL)isAppleWatch;
-(void)setEnvironment:(ACHActivityAwardingEnvironment *)arg1 ;
-(void)setActivitySummaryUtility:(ACHActivitySummaryUtility *)arg1 ;
-(void)setProgressProvider:(ACHAchievementProgressEngine *)arg1 ;
-(ACHActivityAwardingEnvironment *)environment;
-(ACHAchievementProgressEngine *)progressProvider;
-(void)setTemplateStore:(ACHTemplateStore *)arg1 ;
-(unsigned char)_creatorDevice;
-(void)currentActivitySummaryHelper:(id)arg1 didUpdateTodayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3 ;
-(void)currentActivitySummaryHelper:(id)arg1 didUpdateYesterdayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3 ;
-(id)earnedInstancesForHistoricalInterval:(id)arg1 databaseContext:(id)arg2 ;
-(BOOL)providesProgressForTemplate:(id)arg1 ;
-(id)currentProgressQuantityForTemplate:(id)arg1 ;
-(id)currentGoalQuantityForTemplate:(id)arg1 ;
-(void)dataStoreDidClearAllProperties:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)dataStorePropertyKeys;
-(NSDictionary *)dataStoreProperties;
-(void)setDataStoreProperties:(NSDictionary *)arg1 ;
-(NSString *)watchCountryCode;
-(void)setTodayActivitySummary:(HKActivitySummary *)arg1 ;
-(void)setYesterdayActivitySummary:(HKActivitySummary *)arg1 ;
-(void)_queue_observeSummaries;
-(NSNumber *)overrideIsAppleWatch;
-(NSString *)overrideWatchCountryCode;
-(NSCalendar *)gregorianUTCCalendar;
-(unsigned long long)_queue_triggersWithChangedSummaryFields:(unsigned long long)arg1 dataProvider:(id)arg2 ;
-(void)setCurrentTemplates:(NSMutableArray *)arg1 ;
-(NSMutableArray *)currentTemplates;
-(id)_queue_evaluateTriggers:(unsigned long long)arg1 activitySummary:(id)arg2 templates:(id)arg3 shouldLog:(BOOL)arg4 ;
-(void)_queue_updateDataProvider:(id)arg1 forDateInterval:(id)arg2 awardingBlock:(/*^block*/id)arg3 ;
-(void)setProgressEnvironment:(ACHActivityAwardingEnvironment *)arg1 ;
-(BOOL)isObservingSummaryUpdates;
-(id)_queue_progressEnvironment;
-(id)_queue_companionProgressEnvironment;
-(ACHActivityAwardingDataProvider *)progressDataProvider;
-(void)setProgressDataProvider:(ACHActivityAwardingDataProvider *)arg1 ;
-(ACHActivityAwardingEnvironment *)progressEnvironment;
-(id)incrementalUpdateCompletionHandler;
-(ACHActivityTriggerGenerator *)triggerGenerator;
-(void)setIsObservingSummaryUpdates:(BOOL)arg1 ;
-(void)_runIncrementallyForChangedSummaryFields:(unsigned long long)arg1 ;
-(id)initWithProfile:(id)arg1 dataStore:(id)arg2 templateStore:(id)arg3 awardingEngine:(id)arg4 progressProvider:(id)arg5 ;
-(void)setIncrementalUpdateCompletionHandler:(id)arg1 ;
-(void)setGregorianUTCCalendar:(NSCalendar *)arg1 ;
-(void)setTriggerGenerator:(ACHActivityTriggerGenerator *)arg1 ;
-(void)setOverrideIsAppleWatch:(NSNumber *)arg1 ;
-(void)setOverrideWatchCountryCode:(NSString *)arg1 ;
-(void)setWatchCountryCode:(NSString *)arg1 ;
@end
