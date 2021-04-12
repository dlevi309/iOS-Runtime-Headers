/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

