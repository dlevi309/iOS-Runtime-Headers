/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_queue;
@class HDProfile, HDActivitySummaryQueryHelper, NSObject, HKActivitySummary, NSArray, NSHashTable, NSDate, NSTimeZone;

@interface HDCurrentActivitySummaryHelper : NSObject {

	HDProfile* _profile;
	HDActivitySummaryQueryHelper* _queryHelper;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _observerQueue;
	long long _todayIndex;
	long long _yesterdayIndex;
	HKActivitySummary* _todaySummary;
	HKActivitySummary* _yesterdaySummary;
	BOOL _hasLoadedActivitySummaries;
	NSArray* _typesForDataCollection;
	NSHashTable* _observers;
	NSDate* _dateOverride;
	NSTimeZone* _timezoneOverride;

}

@property (nonatomic,retain) NSDate * dateOverride; 
@property (nonatomic,retain) NSTimeZone * timezoneOverride; 
@property (readonly) HKActivitySummary * todayActivitySummary; 
@property (readonly) HKActivitySummary * yesterdayActivitySummary; 
@property (readonly) BOOL hasLoadedActivitySummaries; 
-(void)_queue_alertObserversTodaySummaryUpdated:(id)arg1 changedFields:(unsigned long long)arg2 ;
-(void)addObserver:(id)arg1 ;
-(NSDate *)dateOverride;
-(id)initWithProfile:(id)arg1 ;
-(HKActivitySummary *)todayActivitySummary;
-(HKActivitySummary *)yesterdayActivitySummary;
-(id)_queue_gregorianCalendar;
-(NSTimeZone *)timezoneOverride;
-(void)_queue_updateYesterdayActivitySummary:(id)arg1 ;
-(BOOL)_queue_dateHasChanged;
-(void)_registerForSignificantTimeChangeNotification;
-(void)removeObserver:(id)arg1 ;
-(void)_queue_updateTodayActivitySummary:(id)arg1 ;
-(void)_queue_updateActivitySummaries:(id)arg1 ;
-(void)_queue_setUpActivityQueryHelper;
-(void)setDateOverride:(NSDate *)arg1 ;
-(void)setTimezoneOverride:(NSTimeZone *)arg1 ;
-(void)_queue_resetQueryHelper;
-(void)_queue_alertObserversYesterdaySummaryUpdated:(id)arg1 changedFields:(unsigned long long)arg2 ;
-(void)_generateCacheIndexesWithTodayIndex:(long long*)arg1 yesterdayIndex:(long long*)arg2 ;
-(void)_handleSignificantTimeChangeNotification:(id)arg1 ;
-(BOOL)hasLoadedActivitySummaries;
-(void)dealloc;
-(unsigned long long)_changedFieldsBetweenPreviousActivitySummary:(id)arg1 andNewActivitySummary:(id)arg2 ;
-(id)_createEmptyActivitySummaryForIndex:(long long)arg1 ;
@end

