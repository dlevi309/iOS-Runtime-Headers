/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKInteractiveChartTimePeriodData.h>

@interface HKInteractiveChartHandwashingEventData : HKInteractiveChartTimePeriodData {

	BOOL _meetsGoal;

}

@property (assign,nonatomic) BOOL meetsGoal;              //@synthesize meetsGoal=_meetsGoal - In the implementation block
-(BOOL)meetsGoal;
-(void)setMeetsGoal:(BOOL)arg1 ;
-(id)initWithTimePeriod:(double)arg1 meetsGoal:(BOOL)arg2 ;
@end

