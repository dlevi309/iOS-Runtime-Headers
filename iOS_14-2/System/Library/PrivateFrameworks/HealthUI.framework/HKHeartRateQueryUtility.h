/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol HKHeartRateQueryHandler, OS_dispatch_queue;
@class NSDateInterval, NSObject, NSMutableDictionary;

@interface HKHeartRateQueryUtility : NSObject {

	id<HKHeartRateQueryHandler> _queryHandler;
	NSDateInterval* _dateInterval;
	long long _timeScope;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _resourceQueue;
	NSMutableDictionary* _sampleResults;
	/*^block*/id _resultsHandler;

}

@property (assign,nonatomic,__weak) id<HKHeartRateQueryHandler> queryHandler;              //@synthesize queryHandler=_queryHandler - In the implementation block
@property (nonatomic,retain) NSDateInterval * dateInterval;                                //@synthesize dateInterval=_dateInterval - In the implementation block
@property (assign,nonatomic) long long timeScope;                                          //@synthesize timeScope=_timeScope - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;                     //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> resourceQueue;                   //@synthesize resourceQueue=_resourceQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sampleResults;                          //@synthesize sampleResults=_sampleResults - In the implementation block
@property (nonatomic,copy) id resultsHandler;                                              //@synthesize resultsHandler=_resultsHandler - In the implementation block
+(id)_minMaxStatisticsFromChartPoints:(id)arg1 dateInterval:(id)arg2 ;
+(void)enumerateDisplayTypeContextsWithBlock:(/*^block*/id)arg1 ;
+(id)_orderedDisplayTypeContextResults:(id)arg1 ;
-(NSDateInterval *)dateInterval;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(id<HKHeartRateQueryHandler>)queryHandler;
-(void)setResourceQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setTimeScope:(long long)arg1 ;
-(long long)timeScope;
-(id)resultsHandler;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)resourceQueue;
-(void)setResultsHandler:(id)arg1 ;
-(void)setQueryHandler:(id<HKHeartRateQueryHandler>)arg1 ;
-(void)setSampleResults:(NSMutableDictionary *)arg1 ;
-(void)setupQueries;
-(NSMutableDictionary *)sampleResults;
-(id)initWithQueryHandler:(id)arg1 dateInterval:(id)arg2 timeScope:(long long)arg3 resultsHandler:(/*^block*/id)arg4 ;
@end

