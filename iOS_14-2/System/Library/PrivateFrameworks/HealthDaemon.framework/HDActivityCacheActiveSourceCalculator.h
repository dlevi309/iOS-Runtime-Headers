/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@interface HDActivityCacheActiveSourceCalculator : NSObject {

	vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> >* _workouts;
	vector<HDActivityCacheActiveSource, std::__1::allocator<HDActivityCacheActiveSource> >* _activationLogEntries;

}
-(void)setWorkouts:(vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> >*)arg1 ;
-(HDActivityCacheActiveSourceCalculatorSourceEvent)_baseSourceEvent;
-(void)setActivationLogEntries:(vector<HDActivityCacheActiveSource, std::__1::allocator<HDActivityCacheActiveSource> >*)arg1 ;
-(vector<HDActivityCacheActiveSource, std::__1::allocator<HDActivityCacheActiveSource> >*)createActiveSourceLog;
-(HDActivityCacheActiveSource*)_baseActiveSource;
@end

