/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

