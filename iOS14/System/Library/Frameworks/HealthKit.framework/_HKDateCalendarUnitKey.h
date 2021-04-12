/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,copy,readonly) NSDate * date;                           //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSCalendar * calendar;                        //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) unsigned long long calendarUnit;              //@synthesize calendarUnit=_calendarUnit - In the implementation block
-(NSCalendar *)calendar;
-(unsigned long long)calendarUnit;
-(unsigned long long)hash;
-(NSDate *)date;
-(id)initWithDate:(id)arg1 calendar:(id)arg2 unit:(unsigned long long)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

