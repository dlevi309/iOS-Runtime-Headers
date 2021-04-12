/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKTextProvider.h>

@class NSDateFormatter, NSArray, NSDate, NSTimeZone, NSString;

@interface CLKDateTextProvider : CLKTextProvider {

	NSDateFormatter* _dateFormatter;
	NSArray* _templateSeries;
	BOOL _uppercase;
	BOOL _shortUnits;
	BOOL _allowsNarrowUnits;
	BOOL _narrowStandaloneWeekdayDay;
	NSDate* _date;
	unsigned long long _calendarUnits;
	NSTimeZone* _timeZone;
	NSString* _alternateCalendarLocaleID;
	long long _formattingContext;

}

@property (assign,nonatomic) BOOL shortUnits;                                 //@synthesize shortUnits=_shortUnits - In the implementation block
@property (assign,nonatomic) BOOL allowsNarrowUnits;                          //@synthesize allowsNarrowUnits=_allowsNarrowUnits - In the implementation block
@property (assign,nonatomic) BOOL narrowStandaloneWeekdayDay;                 //@synthesize narrowStandaloneWeekdayDay=_narrowStandaloneWeekdayDay - In the implementation block
@property (nonatomic,copy) NSString * alternateCalendarLocaleID;              //@synthesize alternateCalendarLocaleID=_alternateCalendarLocaleID - In the implementation block
@property (assign,nonatomic) long long formattingContext;                     //@synthesize formattingContext=_formattingContext - In the implementation block
@property (nonatomic,retain) NSDate * date;                                   //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) unsigned long long calendarUnits;                //@synthesize calendarUnits=_calendarUnits - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;                           //@synthesize timeZone=_timeZone - In the implementation block
@property (assign,nonatomic) BOOL uppercase;                                  //@synthesize uppercase=_uppercase - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)textProviderWithDate:(id)arg1 units:(unsigned long long)arg2 ;
+(id)textProviderWithDate:(id)arg1 units:(unsigned long long)arg2 timeZone:(id)arg3 ;
-(long long)formattingContext;
-(NSTimeZone *)timeZone;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)setFormattingContext:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setUppercase:(BOOL)arg1 ;
-(BOOL)_validate;
-(BOOL)uppercase;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(unsigned long long)calendarUnits;
-(id)_completeDateTemplateSeries;
-(id)_partialDateTemplateSeriesForUnits:(unsigned long long)arg1 ;
-(id)initWithDate:(id)arg1 units:(unsigned long long)arg2 ;
-(void)setCalendarUnits:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2 ;
-(id)JSONObjectRepresentation;
-(void)setShortUnits:(BOOL)arg1 ;
-(void)setAlternateCalendarLocaleID:(NSString *)arg1 ;
-(void)setAllowsNarrowUnits:(BOOL)arg1 ;
-(id)_initWithJSONObjectRepresentation:(id)arg1 ;
-(id)initWithDate:(id)arg1 units:(unsigned long long)arg2 timeZone:(id)arg3 ;
-(BOOL)shortUnits;
-(BOOL)allowsNarrowUnits;
-(BOOL)narrowStandaloneWeekdayDay;
-(void)setNarrowStandaloneWeekdayDay:(BOOL)arg1 ;
-(NSString *)alternateCalendarLocaleID;
@end

