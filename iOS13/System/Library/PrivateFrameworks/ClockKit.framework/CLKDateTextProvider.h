/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
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
+(id)textProviderWithDate:(id)arg1 units:(unsigned long long)arg2 timeZone:(id)arg3 ;
+(id)textProviderWithDate:(id)arg1 units:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSDate *)date;
-(NSTimeZone *)timeZone;
-(void)setFormattingContext:(long long)arg1 ;
-(long long)formattingContext;
-(void)setDate:(NSDate *)arg1 ;
-(void)_validate;
-(void)setUppercase:(BOOL)arg1 ;
-(BOOL)uppercase;
-(id)JSONObjectRepresentation;
-(id)_initWithJSONObjectRepresentation:(id)arg1 ;
-(id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2 ;
-(void)setCalendarUnits:(unsigned long long)arg1 ;
-(unsigned long long)calendarUnits;
-(id)_completeDateTemplateSeries;
-(id)_partialDateTemplateSeriesForUnits:(unsigned long long)arg1 ;
-(BOOL)shortUnits;
-(void)setShortUnits:(BOOL)arg1 ;
-(BOOL)allowsNarrowUnits;
-(void)setAllowsNarrowUnits:(BOOL)arg1 ;
-(BOOL)narrowStandaloneWeekdayDay;
-(void)setNarrowStandaloneWeekdayDay:(BOOL)arg1 ;
-(NSString *)alternateCalendarLocaleID;
-(void)setAlternateCalendarLocaleID:(NSString *)arg1 ;
@end

