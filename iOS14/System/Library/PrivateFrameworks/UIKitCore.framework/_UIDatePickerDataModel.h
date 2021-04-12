/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSLocale, NSCalendar, _UIDatePickerChineseCalendar, _UIDatePickerDateRange, NSTimeZone, NSDate, NSDateComponents, NSString;

@interface _UIDatePickerDataModel : NSObject {

	NSLocale* _effectiveLocale;
	NSCalendar* _effectiveCalendar;
	_UIDatePickerChineseCalendar* _chineseWrapperCalendar;
	_UIDatePickerDateRange* _dateRange;
	long long _datePickerStyle;
	long long _datePickerMode;
	NSLocale* _locale;
	NSCalendar* _calendar;
	NSTimeZone* _timeZone;
	NSDate* _date;
	NSDateComponents* _lastSelectedDateComponents;
	long long _minuteInterval;
	NSString* _customFontDesign;

}

@property (assign,nonatomic) long long datePickerStyle;                                      //@synthesize datePickerStyle=_datePickerStyle - In the implementation block
@property (assign,nonatomic) long long datePickerMode;                                       //@synthesize datePickerMode=_datePickerMode - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                              //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy) NSCalendar * calendar;                                            //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) NSLocale * effectiveLocale; 
@property (nonatomic,readonly) NSCalendar * effectiveCalendar; 
@property (nonatomic,readonly) NSCalendar * formattingCalendar; 
@property (nonatomic,retain) NSTimeZone * timeZone;                                          //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,retain) NSDate * date;                                                  //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSDateComponents * lastSelectedDateComponents;                  //@synthesize lastSelectedDateComponents=_lastSelectedDateComponents - In the implementation block
@property (nonatomic,readonly) NSDate * effectiveDate; 
@property (nonatomic,copy,readonly) NSDateComponents * effectiveDateComponents; 
@property (nonatomic,retain) NSDate * minimumDate; 
@property (nonatomic,retain) NSDate * maximumDate; 
@property (assign,nonatomic) long long minuteInterval;                                       //@synthesize minuteInterval=_minuteInterval - In the implementation block
@property (nonatomic,retain) NSString * customFontDesign;                                    //@synthesize customFontDesign=_customFontDesign - In the implementation block
-(NSTimeZone *)timeZone;
-(NSLocale *)locale;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)init;
-(NSCalendar *)calendar;
-(void)setDate:(NSDate *)arg1 ;
-(NSDate *)minimumDate;
-(NSDate *)maximumDate;
-(void)setDatePickerStyle:(long long)arg1 ;
-(NSDateComponents *)effectiveDateComponents;
-(void)setMinimumDate:(NSDate *)arg1 ;
-(void)setMaximumDate:(NSDate *)arg1 ;
-(void)resetForCurrentLocaleOrCalendarChange;
-(NSDateComponents *)lastSelectedDateComponents;
-(void)_setupDerivedLocaleAndCalendars;
-(void)setDatePickerMode:(long long)arg1 ;
-(NSCalendar *)formattingCalendar;
-(NSDate *)effectiveDate;
-(void)setLastSelectedDateComponents:(NSDateComponents *)arg1 ;
-(long long)minuteInterval;
-(NSLocale *)effectiveLocale;
-(long long)datePickerStyle;
-(NSString *)customFontDesign;
-(long long)datePickerMode;
-(NSDate *)date;
-(id)createDatePickerRepresentingDataModel;
-(void)setCustomFontDesign:(NSString *)arg1 ;
-(NSCalendar *)effectiveCalendar;
-(void)setMinuteInterval:(long long)arg1 ;
@end

