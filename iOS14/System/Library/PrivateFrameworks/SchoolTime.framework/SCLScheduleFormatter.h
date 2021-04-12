/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <Foundation/NSFormatter.h>

@class NSLocale, NSCalendar, SCLTimeIntervalsFormatter, NSListFormatter, NSDateFormatter, NSDateIntervalFormatter;

@interface SCLScheduleFormatter : NSFormatter {

	NSLocale* _locale;
	NSCalendar* _calendar;
	SCLTimeIntervalsFormatter* _timeIntervalsFormatter;
	NSListFormatter* _listFormatter;
	NSDateFormatter* _standaloneWeekdayFormatter;
	NSDateIntervalFormatter* _weekdayIntervalFormatter;

}

@property (nonatomic,readonly) SCLTimeIntervalsFormatter * timeIntervalsFormatter;              //@synthesize timeIntervalsFormatter=_timeIntervalsFormatter - In the implementation block
@property (nonatomic,readonly) NSListFormatter * listFormatter;                                 //@synthesize listFormatter=_listFormatter - In the implementation block
@property (nonatomic,readonly) NSDateFormatter * standaloneWeekdayFormatter;                    //@synthesize standaloneWeekdayFormatter=_standaloneWeekdayFormatter - In the implementation block
@property (nonatomic,readonly) NSDateIntervalFormatter * weekdayIntervalFormatter;              //@synthesize weekdayIntervalFormatter=_weekdayIntervalFormatter - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                                 //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy) NSCalendar * calendar;                                               //@synthesize calendar=_calendar - In the implementation block
-(NSLocale *)locale;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)init;
-(NSCalendar *)calendar;
-(void)_regenerateFormatters;
-(id)formatterItemsForSchedule:(id)arg1 ;
-(SCLTimeIntervalsFormatter *)timeIntervalsFormatter;
-(id)stringForWeekdaysInItem:(id)arg1 ;
-(NSListFormatter *)listFormatter;
-(id)stringFromSchedule:(id)arg1 ;
-(NSDateFormatter *)standaloneWeekdayFormatter;
-(NSDateIntervalFormatter *)weekdayIntervalFormatter;
@end

