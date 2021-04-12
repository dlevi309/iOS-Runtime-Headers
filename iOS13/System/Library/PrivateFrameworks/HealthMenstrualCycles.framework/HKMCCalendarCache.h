/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
*/


@class NSMutableDictionary;

@interface HKMCCalendarCache : NSObject {

	NSMutableDictionary* _calendarsByTimeZone;

}
+(id)latestTimeZoneCalendar;
+(id)earliestTimeZoneCalendar;
-(id)init;
-(id)currentCalendar;
-(id)calendarForTimeZone:(id)arg1 ;
@end

