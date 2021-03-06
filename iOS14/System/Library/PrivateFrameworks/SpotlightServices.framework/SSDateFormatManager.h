/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/


@class NSCalendar, NSDateFormatter, NSDateIntervalFormatter;

@interface SSDateFormatManager : NSObject {

	NSCalendar* _calendar;
	NSDateFormatter* _shortRelativeDateFormatter;
	NSDateFormatter* _dayOfWeekFormatter;
	NSDateFormatter* _shortDateTimeFormatter;
	NSDateFormatter* _shortTimeFormatter;
	NSDateFormatter* _dateFormatter;
	NSDateIntervalFormatter* _shortDateTimeIntervalFormatter;
	NSDateIntervalFormatter* _mediumDayOfWeekDateTimeIntervalFormatter;
	NSDateIntervalFormatter* _shortDateIntervalFormatter;
	NSDateIntervalFormatter* _mediumDayOfWeekDateIntervalFormatter;
	NSDateIntervalFormatter* _allDayDateFormatter;
	NSDateIntervalFormatter* _dateIntervalFormatter;

}

@property (retain) NSCalendar * calendar;                                                           //@synthesize calendar=_calendar - In the implementation block
@property (retain) NSDateFormatter * shortRelativeDateFormatter;                                    //@synthesize shortRelativeDateFormatter=_shortRelativeDateFormatter - In the implementation block
@property (retain) NSDateFormatter * dayOfWeekFormatter;                                            //@synthesize dayOfWeekFormatter=_dayOfWeekFormatter - In the implementation block
@property (retain) NSDateFormatter * shortDateTimeFormatter;                                        //@synthesize shortDateTimeFormatter=_shortDateTimeFormatter - In the implementation block
@property (retain) NSDateFormatter * shortTimeFormatter;                                            //@synthesize shortTimeFormatter=_shortTimeFormatter - In the implementation block
@property (retain) NSDateFormatter * dateFormatter;                                                 //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (retain) NSDateIntervalFormatter * shortDateTimeIntervalFormatter;                        //@synthesize shortDateTimeIntervalFormatter=_shortDateTimeIntervalFormatter - In the implementation block
@property (retain) NSDateIntervalFormatter * mediumDayOfWeekDateTimeIntervalFormatter;              //@synthesize mediumDayOfWeekDateTimeIntervalFormatter=_mediumDayOfWeekDateTimeIntervalFormatter - In the implementation block
@property (retain) NSDateIntervalFormatter * shortDateIntervalFormatter;                            //@synthesize shortDateIntervalFormatter=_shortDateIntervalFormatter - In the implementation block
@property (retain) NSDateIntervalFormatter * mediumDayOfWeekDateIntervalFormatter;                  //@synthesize mediumDayOfWeekDateIntervalFormatter=_mediumDayOfWeekDateIntervalFormatter - In the implementation block
@property (retain) NSDateIntervalFormatter * allDayDateFormatter;                                   //@synthesize allDayDateFormatter=_allDayDateFormatter - In the implementation block
@property (retain) NSDateIntervalFormatter * dateIntervalFormatter;                                 //@synthesize dateIntervalFormatter=_dateIntervalFormatter - In the implementation block
+(void)initialize;
+(id)calendar;
+(id)dateFormatter;
+(id)dateIntervalFormatter;
+(BOOL)isDate:(id)arg1 withinTimeInterval:(double)arg2 ;
+(id)shortDateTimeFormatter;
+(BOOL)hasRelativeFormatForDate:(id)arg1 ;
+(BOOL)isDateWithinWeeksTime:(id)arg1 ;
+(BOOL)isDateWithinMonthsTime:(id)arg1 ;
+(id)allDayDateFormatter;
+(BOOL)date:(id)arg1 isBetweenDate:(id)arg2 andDate:(id)arg3 ;
+(id)shortDateTimeStringFromDate:(id)arg1 ;
+(id)dynamicCompactStringFromDate:(id)arg1 ;
+(id)dyanmicStringFromDate:(id)arg1 ;
+(id)dynamicDateTimeStringsFromDate:(id)arg1 ;
+(id)stringFromDate:(id)arg1 toDate:(id)arg2 isAllDay:(BOOL)arg3 ;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(id)init;
-(NSDateFormatter *)dayOfWeekFormatter;
-(NSCalendar *)calendar;
-(NSDateFormatter *)dateFormatter;
-(void)setDateIntervalFormatter:(NSDateIntervalFormatter *)arg1 ;
-(NSDateIntervalFormatter *)dateIntervalFormatter;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(void)setupFormatters;
-(void)setupFormattersWithTemplate;
-(void)setShortRelativeDateFormatter:(NSDateFormatter *)arg1 ;
-(void)setShortDateTimeFormatter:(NSDateFormatter *)arg1 ;
-(void)setShortTimeFormatter:(NSDateFormatter *)arg1 ;
-(void)setDayOfWeekFormatter:(NSDateFormatter *)arg1 ;
-(void)setShortDateTimeIntervalFormatter:(NSDateIntervalFormatter *)arg1 ;
-(void)setMediumDayOfWeekDateTimeIntervalFormatter:(NSDateIntervalFormatter *)arg1 ;
-(void)setShortDateIntervalFormatter:(NSDateIntervalFormatter *)arg1 ;
-(void)setMediumDayOfWeekDateIntervalFormatter:(NSDateIntervalFormatter *)arg1 ;
-(void)setAllDayDateFormatter:(NSDateIntervalFormatter *)arg1 ;
-(NSDateFormatter *)shortDateTimeFormatter;
-(NSDateFormatter *)shortRelativeDateFormatter;
-(NSDateFormatter *)shortTimeFormatter;
-(NSDateIntervalFormatter *)mediumDayOfWeekDateIntervalFormatter;
-(NSDateIntervalFormatter *)mediumDayOfWeekDateTimeIntervalFormatter;
-(NSDateIntervalFormatter *)shortDateIntervalFormatter;
-(NSDateIntervalFormatter *)shortDateTimeIntervalFormatter;
-(NSDateIntervalFormatter *)allDayDateFormatter;
@end

