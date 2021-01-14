/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthKit/HKActivitySummary.h>

@class NSDateComponents;

@interface _HKHourlyActivitySummary : HKActivitySummary {

	NSDateComponents* _hourlyDateComponents;

}

@property (nonatomic,retain) NSDateComponents * hourlyDateComponents;              //@synthesize hourlyDateComponents=_hourlyDateComponents - In the implementation block
-(id)dateComponentsForCalendar:(id)arg1 ;
-(NSDateComponents *)hourlyDateComponents;
-(void)setHourlyDateComponents:(NSDateComponents *)arg1 ;
@end

