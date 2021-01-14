/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/


@class NSMutableDictionary, NSLocale, NSCalendar, NSDictionary;

@interface CCVegaExpressionFunctions : NSObject {

	NSMutableDictionary* _cache;
	NSLocale* _locale;
	NSCalendar* _calendar;
	NSDictionary* _fontOptions;

}

@property (retain) NSLocale * locale; 
@property (retain) NSCalendar * calendar; 
@property (retain) NSDictionary * fontOptions; 
+(id)functionNames;
-(NSLocale *)locale;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)init;
-(NSCalendar *)calendar;
-(NSDictionary *)fontOptions;
-(/*^block*/id)nativeNumberFormat;
-(/*^block*/id)nativeDateComponentsFormat;
-(/*^block*/id)nativeDateFormat;
-(/*^block*/id)nativeTextMetrics;
-(/*^block*/id)nativeFontMetrics;
-(id)keyForKind:(id)arg1 options:(id)arg2 ;
-(id)makeReturnValue:(id)arg1 ;
-(id)numberFormatterFromOptions:(id)arg1 ;
-(unsigned long long)calendarUnitFromString:(id)arg1 ;
-(id)dateComponentsFormatterFromOptions:(id)arg1 ;
-(unsigned long long)dateFormatterStyleFromString:(id)arg1 ;
-(id)dateFormatterFromOptions:(id)arg1 ;
-(id)fontFromJSFontDesc:(id)arg1 options:(id)arg2 ;
-(void)setFontOptions:(NSDictionary *)arg1 ;
-(void)registerFunctionsToClient:(id)arg1 ;
@end

