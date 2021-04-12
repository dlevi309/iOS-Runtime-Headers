/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REPredictor.h>
#import <libobjc.A.dylib/REPeriodOfDayPredictorProperties.h>

@class NSArray, NSLock, REUpNextTimer, REDuetKnowledgeStore, NSDateInterval;

@interface REPeriodOfDayPredictor : REPredictor <REPeriodOfDayPredictorProperties> {

	NSArray* _storedPeriods;
	NSLock* _storedPeriodsLock;
	REUpNextTimer* _periodOfDayUpdateTimer;
	REDuetKnowledgeStore* _knowledgeStore;

}

@property (nonatomic,readonly) unsigned long long currentPeriodOfDay; 
@property (nonatomic,readonly) NSDateInterval * intervalForCurrentPeriodOfDay; 
@property (nonatomic,readonly) NSArray * storedPeriods; 
+(double)updateInterval;
-(void)update;
-(void)_handleSignificantTimeChange;
-(id)_init;
-(void)dealloc;
-(id)_defaultDayPeriodsOfDayForDate:(id)arg1 ;
-(void)_queue_updateNextDateUpdateTimer;
-(id)_periodsOfDayForSleepIntervals:(id)arg1 ;
-(id)dateIntervalForNextPeriodOfDay:(unsigned long long)arg1 afterDate:(id)arg2 ;
-(id)dateIntervalForPreviousPeriodOfDay:(unsigned long long)arg1 beforeDate:(id)arg2 ;
-(unsigned long long)currentPeriodOfDay;
-(void)_getAllSleepIntervalsWithCompletion:(/*^block*/id)arg1 ;
-(void)_getPredictedSleepIntervalsWithCompletion:(/*^block*/id)arg1 ;
-(void)_getHistoricSleepIntervalsWithCompletion:(/*^block*/id)arg1 ;
-(id)_nextDayPeriodUpdateDate;
-(NSDateInterval *)intervalForCurrentPeriodOfDay;
-(NSArray *)storedPeriods;
-(id)dateIntervalForNextPeriodOfDay:(unsigned long long)arg1 ;
-(id)dateIntervalForPreviousPeriodOfDay:(unsigned long long)arg1 ;
@end

