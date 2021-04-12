/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKDateTextProvider;

@interface CLKComplicationTemplateModularSmallDate : CLKComplicationTemplate {

	CLKDateTextProvider* _weekdayTextProvider;
	CLKDateTextProvider* _dayTextProvider;
	unsigned long long _highlightMode;

}

@property (nonatomic,copy) CLKDateTextProvider * weekdayTextProvider;              //@synthesize weekdayTextProvider=_weekdayTextProvider - In the implementation block
@property (nonatomic,copy) CLKDateTextProvider * dayTextProvider;                  //@synthesize dayTextProvider=_dayTextProvider - In the implementation block
@property (assign,nonatomic) unsigned long long highlightMode;                     //@synthesize highlightMode=_highlightMode - In the implementation block
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateIntegerKeysWithBlock:(/*^block*/id)arg1 ;
-(id)_initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2 ;
-(id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1 ;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(void)setHighlightMode:(unsigned long long)arg1 ;
-(unsigned long long)highlightMode;
-(void)setHighlightLine2:(BOOL)arg1 ;
-(BOOL)highlightLine2;
-(CLKDateTextProvider *)weekdayTextProvider;
-(void)setWeekdayTextProvider:(CLKDateTextProvider *)arg1 ;
-(CLKDateTextProvider *)dayTextProvider;
-(void)setDayTextProvider:(CLKDateTextProvider *)arg1 ;
@end

