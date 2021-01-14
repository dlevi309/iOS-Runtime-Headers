/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSMutableDictionary, NSCalendar;

@interface HKCalendarCache : NSObject {

	NSMutableDictionary* _calendarsByTimeZoneName;
	NSCalendar* _test_currentCalendar;

}
+(id)latestTimeZoneCalendar;
+(id)earliestTimeZoneCalendar;
-(id)init;
-(id)currentCalendar;
-(id)calendarForTimeZone:(id)arg1 ;
-(void)_test_setCurrentCalendar:(id)arg1 ;
@end

