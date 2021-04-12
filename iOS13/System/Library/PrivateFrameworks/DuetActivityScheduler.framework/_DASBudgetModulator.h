/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
*/


@protocol _DASBudgetPersisting, OS_dispatch_queue, OS_dispatch_source, OS_os_log;
@class NSObject, NSDate, NSArray, _DKPredictionTimeline;

@interface _DASBudgetModulator : NSObject {

	id<_DASBudgetPersisting> _persistence;
	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _lastModulationDate;
	NSDate* _lastUsageTimelineUpdate;
	NSArray* _budgets;
	NSObject*<OS_dispatch_source> _timer;
	_DKPredictionTimeline* _usage;
	NSObject*<OS_os_log> _log;

}

@property (nonatomic,retain) id<_DASBudgetPersisting> persistence;              //@synthesize persistence=_persistence - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSDate * lastModulationDate;                       //@synthesize lastModulationDate=_lastModulationDate - In the implementation block
@property (nonatomic,retain) NSDate * lastUsageTimelineUpdate;                  //@synthesize lastUsageTimelineUpdate=_lastUsageTimelineUpdate - In the implementation block
@property (nonatomic,retain) NSArray * budgets;                                 //@synthesize budgets=_budgets - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;               //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) _DKPredictionTimeline * usage;                     //@synthesize usage=_usage - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                          //@synthesize log=_log - In the implementation block
+(id)modulatorWithBudgets:(id)arg1 persistence:(id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setUsage:(_DKPredictionTimeline *)arg1 ;
-(_DKPredictionTimeline *)usage;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(id<_DASBudgetPersisting>)persistence;
-(void)setPersistence:(id<_DASBudgetPersisting>)arg1 ;
-(NSDate *)lastModulationDate;
-(void)_queue_modulateBudgets;
-(id)initWithBudgets:(id)arg1 persistence:(id)arg2 ;
-(int)numberOfModulationFromDate:(id)arg1 toDate:(id)arg2 ;
-(id)usageTimeline;
-(double)relativeUsageAtDate:(id)arg1 withTimeline:(id)arg2 ;
-(void)updateCapacity:(double)arg1 forBudgetWithName:(id)arg2 ;
-(void)setLastModulationDate:(NSDate *)arg1 ;
-(NSDate *)lastUsageTimelineUpdate;
-(void)setLastUsageTimelineUpdate:(NSDate *)arg1 ;
-(NSArray *)budgets;
-(void)setBudgets:(NSArray *)arg1 ;
@end

