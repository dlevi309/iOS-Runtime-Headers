/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/


@class NSCalendar, NSArray;

@interface SCLScheduleFormatterItem : NSObject {

	long long _days;
	NSCalendar* _calendar;
	NSArray* _timeIntervals;

}

@property (nonatomic,readonly) NSCalendar * calendar;                     //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,copy,readonly) NSArray * timeIntervals;              //@synthesize timeIntervals=_timeIntervals - In the implementation block
-(long long)days;
-(NSCalendar *)calendar;
-(void)addDay:(long long)arg1 ;
-(NSArray *)timeIntervals;
-(id)dayRanges;
-(id)initWithCalendar:(id)arg1 timeIntervals:(id)arg2 ;
-(long long)earliestWeekdayInCalendar;
@end

