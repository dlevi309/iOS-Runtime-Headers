/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)yValue;
-(id)allYValues;
-(id)xValueAsGenericType;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(id)initWithNodes:(id)arg1 summary:(id)arg2 activityCache:(id)arg3 energyUnit:(id)arg4 ;
-(double)_nodesCaloriesPercentDifference;
@end

