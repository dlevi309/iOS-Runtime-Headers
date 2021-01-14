/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKDateTextProvider;

@interface CLKComplicationTemplateExtraLargeDate : CLKComplicationTemplate {

	CLKDateTextProvider* _weekdayTextProvider;
	CLKDateTextProvider* _dayTextProvider;
	unsigned long long _highlightMode;

}

@property (nonatomic,copy) CLKDateTextProvider * weekdayTextProvider;              //@synthesize weekdayTextProvider=_weekdayTextProvider - In the implementation block
@property (nonatomic,copy) CLKDateTextProvider * dayTextProvider;                  //@synthesize dayTextProvider=_dayTextProvider - In the implementation block
@property (assign,nonatomic) unsigned long long highlightMode;                     //@synthesize highlightMode=_highlightMode - In the implementation block
+(id)templateWithWeekdayTextProvider:(id)arg1 dayTextProvider:(id)arg2 ;
-(unsigned long long)highlightMode;
-(void)setHighlightMode:(unsigned long long)arg1 ;
-(CLKDateTextProvider *)weekdayTextProvider;
-(CLKDateTextProvider *)dayTextProvider;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(long long)compatibleFamily;
-(void)_enumerateIntegerKeysWithBlock:(/*^block*/id)arg1 ;
-(void)setHighlightLine2:(BOOL)arg1 ;
-(BOOL)highlightLine2;
-(void)setWeekdayTextProvider:(CLKDateTextProvider *)arg1 ;
-(void)setDayTextProvider:(CLKDateTextProvider *)arg1 ;
-(id)initWithWeekdayTextProvider:(id)arg1 dayTextProvider:(id)arg2 ;
@end

