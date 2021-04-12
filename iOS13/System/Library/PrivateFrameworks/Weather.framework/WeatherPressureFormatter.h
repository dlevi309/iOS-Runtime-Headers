/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <Foundation/NSFormatter.h>

@class NSLocale;

@interface WeatherPressureFormatter : NSFormatter {

	NSLocale* _locale;

}

@property (nonatomic,retain) NSLocale * locale;              //@synthesize locale=_locale - In the implementation block
+(id)convenienceFormatter;
-(id)init;
-(void)dealloc;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(id)stringFromMillibars:(float)arg1 ;
-(void*)createNumberFormatter;
-(void)resetFormatter;
-(id)stringFromInchesHG:(float)arg1 ;
-(int)pressureUnit;
-(float)convertMBarPressure:(float)arg1 toUnit:(int)arg2 ;
-(id)formatStringForPressure:(float)arg1 inUnit:(int)arg2 ;
-(id)fallbackStringForPressure:(float)arg1 ;
-(float)convertInchesHGPressure:(float)arg1 toUnit:(int)arg2 ;
-(id)stringFromPressure:(float)arg1 isDataMetric:(BOOL)arg2 ;
@end

