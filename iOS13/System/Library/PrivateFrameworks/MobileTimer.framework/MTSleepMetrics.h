/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol NAScheduler;
@class HKHealthStore, HKObserverQuery, MTObserverStore;

@interface MTSleepMetrics : NSObject {

	id<NAScheduler> _serializer;
	HKHealthStore* _healthStore;
	HKObserverQuery* _healthObserver;
	MTObserverStore* _sleepDataObservers;

}

@property (nonatomic,retain) id<NAScheduler> serializer;                        //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                       //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) HKObserverQuery * healthObserver;                  //@synthesize healthObserver=_healthObserver - In the implementation block
@property (nonatomic,retain) MTObserverStore * sleepDataObservers;              //@synthesize sleepDataObservers=_sleepDataObservers - In the implementation block
+(id)_sharedPublicMetrics;
+(void)registerSleepDataObserver:(id)arg1 ;
+(void)unregisterSleepDataObserver:(id)arg1 ;
+(id)sleepDataForPastWeekRequestAuthorization:(BOOL)arg1 ;
+(id)sleepDataForPastWeekRequestAuthorization:(BOOL)arg1 dataSource:(unsigned long long)arg2 ;
+(id)sleepDataForRange:(id)arg1 ;
+(id)_sourcePredicate:(unsigned long long)arg1 ;
+(id)lastSleepDayRequestAuthorization:(BOOL)arg1 ;
+(id)lastSleepDayRequestAuthorization:(BOOL)arg1 dataSource:(unsigned long long)arg2 ;
+(id)sleepDaysForRange:(id)arg1 requestAuthorization:(BOOL)arg2 dataSource:(unsigned long long)arg3 ;
+(id)sleepDaysForRange:(id)arg1 requestAuthorization:(BOOL)arg2 ;
+(id)sleepDataForPastWeek;
+(id)lastSleepDay;
+(id)sleepDaysForRange:(id)arg1 ;
-(id)init;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(id<NAScheduler>)serializer;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(void)registerSleepDataObserver:(id)arg1 ;
-(MTObserverStore *)sleepDataObservers;
-(HKObserverQuery *)healthObserver;
-(void)setHealthObserver:(HKObserverQuery *)arg1 ;
-(void)unregisterSleepDataObserver:(id)arg1 ;
-(id)sleepDataForPastWeekRequestAuthorization:(BOOL)arg1 dataSource:(unsigned long long)arg2 ;
-(id)sleepDataForRange:(id)arg1 requestAuthorization:(BOOL)arg2 dataSource:(unsigned long long)arg3 ;
-(id)sleepDataForRange:(id)arg1 ;
-(id)sleepDataForRange:(id)arg1 intervalComponents:(id)arg2 requestAuthorization:(BOOL)arg3 dataSource:(unsigned long long)arg4 ;
-(void)_executeSleepQuery:(id)arg1 requestAuthorization:(BOOL)arg2 future:(id)arg3 ;
-(id)sleepDaysForRange:(id)arg1 requestAuthorization:(BOOL)arg2 dataSource:(unsigned long long)arg3 ;
-(void)setSleepDataObservers:(MTObserverStore *)arg1 ;
@end

