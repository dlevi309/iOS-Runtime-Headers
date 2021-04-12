/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@class NSDate, HKUnit, NSArray, HKActivityStatisticsChartPointSummary, NSNumber, NSString;

@interface HKActivityStatisticsChartPoint : NSObject <HKChartPoint> {

	NSDate* _date;
	HKUnit* _unit;
	NSArray* _nodes;
	HKActivityStatisticsChartPointSummary* _summary;
	NSNumber* _totalActiveEnergyBurned;
	NSNumber* _moveGoalValue;

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
-(id)initWithNodes:(id)arg1 summary:(id)arg2 activityCache:(id)arg3 energyUnit:(id)arg4 ;
-(double)_nodesCaloriesPercentDifference;
@end

