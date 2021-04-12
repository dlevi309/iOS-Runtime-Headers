/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKGraphSeriesBlockCoordinateInfo.h>

@class NSString;

@interface HKActivityStatisticsChartPointSummary : NSObject <HKGraphSeriesBlockCoordinateInfo> {

	NSString* _formattedDateString;
	NSString* _workoutSummaryString;
	NSString* _energyBurnSummaryString;
	NSString* _activityGoalSummaryString;

}

@property (nonatomic,readonly) NSString * formattedDateString;                    //@synthesize formattedDateString=_formattedDateString - In the implementation block
@property (nonatomic,readonly) NSString * workoutSummaryString;                   //@synthesize workoutSummaryString=_workoutSummaryString - In the implementation block
@property (nonatomic,readonly) NSString * energyBurnSummaryString;                //@synthesize energyBurnSummaryString=_energyBurnSummaryString - In the implementation block
@property (nonatomic,readonly) NSString * activityGoalSummaryString;              //@synthesize activityGoalSummaryString=_activityGoalSummaryString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_dateFormatter;
+(id)_integerNumberFormatter;
+(id)_energyFormatter;
+(id)_workoutDurationFormatter;
+(id)_distanceFormatter;
-(NSString *)description;
-(NSString *)formattedDateString;
-(void)_createWorkoutSummaryWithWorkouts:(id)arg1 ;
-(id)initWithActivityCache:(id)arg1 workouts:(id)arg2 ;
-(NSString *)workoutSummaryString;
-(NSString *)energyBurnSummaryString;
-(NSString *)activityGoalSummaryString;
@end

