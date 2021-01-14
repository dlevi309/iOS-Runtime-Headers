/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SwiftUI.framework/SwiftUI
*/

#import <SwiftUI/BaseDateProvider.h>

@class NSArray, NSDate, NSString, NSDateFormatter;

@interface DateProvider : BaseDateProvider {

	NSArray* _templateSeries;
	BOOL _uppercase;
	NSDate* _date;
	unsigned long long _calendarUnits;
	NSString* _dateFormat;
	NSDateFormatter* _dateFormatter;

}

@property (nonatomic,retain) NSDate * date;                                 //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) unsigned long long calendarUnits;              //@synthesize calendarUnits=_calendarUnits - In the implementation block
@property (assign,nonatomic) BOOL uppercase;                                //@synthesize uppercase=_uppercase - In the implementation block
@property (nonatomic,copy) NSString * dateFormat;                           //@synthesize dateFormat=_dateFormat - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;               //@synthesize dateFormatter=_dateFormatter - In the implementation block
-(id)updateInterval;
-(NSString *)dateFormat;
-(NSDateFormatter *)dateFormatter;
-(void)setDate:(NSDate *)arg1 ;
-(void)setUppercase:(BOOL)arg1 ;
-(BOOL)uppercase;
-(void)setDateFormat:(NSString *)arg1 ;
-(NSDate *)date;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(id)_sessionTextForIndex:(long long)arg1 ;
-(unsigned long long)calendarUnits;
-(id)initWithDate:(id)arg1 units:(unsigned long long)arg2 calendar:(id)arg3 locale:(id)arg4 timeZone:(id)arg5 ;
-(id)_completeDateTemplateSeries;
-(id)_partialDateTemplateSeriesForUnits:(unsigned long long)arg1 ;
-(id)initWithDate:(id)arg1 units:(unsigned long long)arg2 ;
-(id)initWithDateFormat:(id)arg1 calendar:(id)arg2 locale:(id)arg3 timeZone:(id)arg4 ;
-(void)setCalendarUnits:(unsigned long long)arg1 ;
@end

