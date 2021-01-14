/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)lastSleepDay;
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
+(id)sleepDaysForRange:(id)arg1 ;
+(id)_sharedPublicMetrics;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(HKHealthStore *)healthStore;
-(id)init;
-(id<NAScheduler>)serializer;
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
-(void)setHealthStore:(HKHealthStore *)arg1 ;
@end

