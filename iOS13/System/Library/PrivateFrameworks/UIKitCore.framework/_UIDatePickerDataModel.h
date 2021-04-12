/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSLocale, _UIDatePickerChineseCalendar, NSCalendar, NSTimeZone, NSDate, NSDateComponents;

@interface _UIDatePickerDataModel : NSObject {

	NSLocale* _effectiveLocale;
	_UIDatePickerChineseCalendar* _chineseWrapperCalendar;
	long long _datePickerMode;
	NSLocale* _locale;
	NSCalendar* _calendar;
	NSTimeZone* _timeZone;
	NSDate* _date;
	NSDateComponents* _lastSelectedDateComponents;
	NSDate* _minimumDate;
	NSDate* _maximumDate;
	long long _minuteInterval;

}

@property (assign,nonatomic) long long datePickerMode;                                   //@synthesize datePickerMode=_datePickerMode - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                          //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy) NSCalendar * calendar;                                        //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) NSLocale * effectiveLocale; 
@property (nonatomic,readonly) NSCalendar * effectiveCalendar; 
@property (nonatomic,readonly) NSCalendar * formattingCalendar; 
@property (nonatomic,retain) NSTimeZone * timeZone;                                      //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,retain) NSDate * date;                                              //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSDateComponents * lastSelectedDateComponents;              //@synthesize lastSelectedDateComponents=_lastSelectedDateComponents - In the implementation block
@property (nonatomic,readonly) NSDate * effectiveDate; 
@property (nonatomic,retain) NSDate * minimumDate;                                       //@synthesize minimumDate=_minimumDate - In the implementation block
@property (nonatomic,retain) NSDate * maximumDate;                                       //@synthesize maximumDate=_maximumDate - In the implementation block
@property (assign,nonatomic) long long minuteInterval;                                   //@synthesize minuteInterval=_minuteInterval - In the implementation block
-(id)init;
-(void)setLocale:(NSLocale *)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSDate *)date;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSTimeZone *)timeZone;
-(NSLocale *)locale;
-(void)setDate:(NSDate *)arg1 ;
-(void)setDatePickerMode:(long long)arg1 ;
-(void)setMinuteInterval:(long long)arg1 ;
-(void)setMinimumDate:(NSDate *)arg1 ;
-(void)setMaximumDate:(NSDate *)arg1 ;
-(long long)datePickerMode;
-(NSDate *)minimumDate;
-(NSDate *)maximumDate;
-(long long)minuteInterval;
-(NSDate *)effectiveDate;
-(NSDateComponents *)lastSelectedDateComponents;
-(NSCalendar *)effectiveCalendar;
-(NSCalendar *)formattingCalendar;
-(NSLocale *)effectiveLocale;
-(void)resetForCurrentLocaleOrCalendarChange;
-(void)setLastSelectedDateComponents:(NSDateComponents *)arg1 ;
-(void)_setupDerivedLocaleAndCalendars;
@end

