/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepHealth.framework/SleepHealth
*/


#import <SleepHealth/SleepHealth-Structs.h>
@class HKHealthStore;

@interface HKSHGoalProgressEngine : NSObject {

	HKHealthStore* _healthStore;

}
+(id)goalProgressForDaySummaries:(id)arg1 inMorningIndexRange:(SCD_Struct_HK0)arg2 ;
+(double)_timeIntervalForDate:(id)arg1 sinceDate:(id)arg2 calendar:(id)arg3 ;
+(id)_firstAsleepSegment:(id)arg1 ;
+(id)_lastAsleepSegment:(id)arg1 ;
+(id)_dateComponentsForInterval:(double)arg1 sinceDate:(id)arg2 calendar:(id)arg3 ;
+(id)_computeStandardDeviationFor:(id)arg1 ;
+(id)goalProgressForDaySummaries:(id)arg1 ;
-(id)initWithHealthStore:(id)arg1 ;
-(void)fetchGoalProgressForMorningIndexRange:(SCD_Struct_HK0)arg1 completion:(/*^block*/id)arg2 ;
@end

