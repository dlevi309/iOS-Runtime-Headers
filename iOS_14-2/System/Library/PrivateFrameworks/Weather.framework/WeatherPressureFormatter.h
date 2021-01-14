/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <Foundation/NSFormatter.h>

@class NSLocale;

@interface WeatherPressureFormatter : NSFormatter {

	NSLocale* _locale;

}

@property (nonatomic,retain) NSLocale * locale;              //@synthesize locale=_locale - In the implementation block
+(id)convenienceFormatter;
-(id)stringFromPressure:(float)arg1 isDataMetric:(BOOL)arg2 ;
-(id)stringForObjectValue:(id)arg1 ;
-(NSLocale *)locale;
-(id)stringFromMillibars:(float)arg1 ;
-(void)resetFormatter;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)init;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(float)convertMBarPressure:(float)arg1 toUnit:(int)arg2 ;
-(id)formatStringForPressure:(float)arg1 inUnit:(int)arg2 ;
-(float)convertInchesHGPressure:(float)arg1 toUnit:(int)arg2 ;
-(id)fallbackStringForPressure:(float)arg1 ;
-(id)stringFromInchesHG:(float)arg1 ;
-(int)pressureUnit;
-(void*)createNumberFormatter;
-(void)dealloc;
@end

