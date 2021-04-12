/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSMutableDictionary, NSSet, NSLock, NSDate, NSDateComponents;

@interface HKStatisticsCollection : NSObject {

	/*^block*/id _emptyStatisticsConstructor;
	double _approximateStatisticsInterval;
	NSMutableDictionary* _statisticsByIndex;
	NSSet* _cachedSources;
	NSLock* _statisticsLock;
	NSDate* _anchorDate;
	NSDateComponents* _statisticsInterval;

}

@property (nonatomic,readonly) NSDate * anchorDate;                                //@synthesize anchorDate=_anchorDate - In the implementation block
@property (nonatomic,readonly) NSDateComponents * statisticsInterval;              //@synthesize statisticsInterval=_statisticsInterval - In the implementation block
-(id)init;
-(id)statistics;
-(id)sources;
-(NSDateComponents *)statisticsInterval;
-(id)_mostRecentQuantityDateInterval;
-(NSDate *)anchorDate;
-(void)_resetStatistics:(id)arg1 ;
-(id)_initWithAnchorDate:(id)arg1 statisticsInterval:(id)arg2 emptyStatisticsConstructor:(/*^block*/id)arg3 ;
-(BOOL)_insertStatistics:(id)arg1 ;
-(id)_statisticsPeriodAndIndex:(long long*)arg1 forDate:(id)arg2 ;
-(id)_statisticsForIndex:(long long)arg1 ;
-(void)_enumerateStatisticsIndexesFromDate:(id)arg1 toDate:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)_statisticsForLastIndex;
-(void)_clearSourcesCache;
-(void)_timePeriodForStatisticsAtIndex:(long long)arg1 startDate:(id*)arg2 endDate:(id*)arg3 ;
-(id)_initWithAnchorDate:(id)arg1 statisticsInterval:(id)arg2 ;
-(id)statisticsForDate:(id)arg1 ;
-(void)enumerateStatisticsFromDate:(id)arg1 toDate:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)_maxSumQuantityStatistics;
-(id)_minSumQuantityStatistics;
-(id)_mostRecentQuantityStatistics;
-(void)_enumerateTimePeriodsFromDate:(id)arg1 toDate:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)_timePeriodForDate:(id)arg1 ;
@end

