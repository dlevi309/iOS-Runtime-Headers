/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSLocale, NSCalendar;

@interface NSRelativeDateTimeFormatter : NSFormatter {

	CFRelativeDateTimeFormatterRef _formatter;
	NSLocale* _locale;
	NSCalendar* _calendar;
	long long _dateTimeStyle;
	long long _unitsStyle;
	long long _formattingContext;

}

@property (assign) long long dateTimeStyle;                  //@synthesize dateTimeStyle=_dateTimeStyle - In the implementation block
@property (assign) long long unitsStyle;                     //@synthesize unitsStyle=_unitsStyle - In the implementation block
@property (assign) long long formattingContext;              //@synthesize formattingContext=_formattingContext - In the implementation block
@property (copy) NSCalendar * calendar;                      //@synthesize calendar=_calendar - In the implementation block
@property (copy) NSLocale * locale;                          //@synthesize locale=_locale - In the implementation block
-(long long)formattingContext;
-(id)stringForObjectValue:(id)arg1 ;
-(NSLocale *)locale;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)localizedStringFromDateComponents:(id)arg1 ;
-(void)setFormattingContext:(long long)arg1 ;
-(id)localizedStringFromTimeInterval:(double)arg1 ;
-(NSCalendar *)calendar;
-(id)localizedStringForDate:(id)arg1 relativeToDate:(id)arg2 ;
-(long long)dateTimeStyle;
-(void)_clearFormatter;
-(id)_stringForCalendarUnit:(unsigned long long)arg1 value:(long long)arg2 ;
-(void)setDateTimeStyle:(long long)arg1 ;
-(void)setUnitsStyle:(long long)arg1 ;
-(id)_stringFromDateComponents:(id)arg1 ;
-(long long)unitsStyle;
-(void)dealloc;
@end

