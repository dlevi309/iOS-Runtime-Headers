/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSCalendar;

@interface _HKDateCalendarUnitKey : NSObject <NSCopying> {

	NSDate* _date;
	NSCalendar* _calendar;
	unsigned long long _calendarUnit;

}

@property (nonatomic,readonly) NSDate * date;                                //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSCalendar * calendar;                        //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) unsigned long long calendarUnit;              //@synthesize calendarUnit=_calendarUnit - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)date;
-(NSCalendar *)calendar;
-(unsigned long long)calendarUnit;
-(id)initWithDate:(id)arg1 calendar:(id)arg2 unit:(unsigned long long)arg3 ;
@end

