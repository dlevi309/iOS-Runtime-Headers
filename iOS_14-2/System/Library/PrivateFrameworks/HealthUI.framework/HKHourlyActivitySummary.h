/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthKit/HKActivitySummary.h>

@class NSDateComponents;

@interface HKHourlyActivitySummary : HKActivitySummary {

	NSDateComponents* _hourlyDateComponents;

}

@property (nonatomic,retain) NSDateComponents * hourlyDateComponents;              //@synthesize hourlyDateComponents=_hourlyDateComponents - In the implementation block
-(id)dateComponentsForCalendar:(id)arg1 ;
-(BOOL)_useHourlyGoalComparison;
-(NSDateComponents *)hourlyDateComponents;
-(void)setHourlyDateComponents:(NSDateComponents *)arg1 ;
@end

