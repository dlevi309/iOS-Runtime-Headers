/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@class NSDate, HKActivityCache, NSArray, HKUnit, NSNumber, HKActivityChartPointSummary, NSString;

@interface HKActivityChartPoint : NSObject <HKChartPoint> {

	NSDate* _date;
	HKActivityCache* _activityCache;
	NSArray* _workouts;
	HKUnit* _unit;
	NSNumber* _activeEnergyBurnedMinusWorkouts;
	NSNumber* _workoutActiveEnergyBurned;
	NSArray* _workoutTimes;
	HKActivityChartPointSummary* _summary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)userInfo;
-(id)minYValue;
-(id)maxYValue;
-(id)yValue;
-(id)xValueAsGenericType;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(id)allYValues;
-(void)_calculateEnergyBurned;
-(void)_populateWorkoutTimes;
-(void)_createSummary;
-(id)initWithActivityCache:(id)arg1 workouts:(id)arg2 unit:(id)arg3 ;
@end

