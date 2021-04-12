/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <Foundation/NSFormatter.h>

@class NSLocale, NSDictionary;

@interface WeatherWindSpeedFormatter : NSFormatter {

	NSLocale* _locale;
	NSDictionary* _directionSubstringAttributes;

}

@property (retain) NSLocale * locale;                                        //@synthesize locale=_locale - In the implementation block
@property (retain) NSDictionary * directionSubstringAttributes;              //@synthesize directionSubstringAttributes=_directionSubstringAttributes - In the implementation block
+(id)convenienceFormatter;
-(id)stringForObjectValue:(id)arg1 ;
-(NSLocale *)locale;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)init;
-(int)windSpeedUnit;
-(id)attributedFormattedStringForSpeed:(float)arg1 direction:(float)arg2 ;
-(double)speedByConvertingToUserUnit:(double)arg1 ;
-(id)stringForWindDirection:(float)arg1 shortDescription:(BOOL)arg2 ;
-(id)fallbackUnitString;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(void)setDirectionSubstringAttributes:(NSDictionary *)arg1 ;
-(id)stringForWindSpeed:(float)arg1 ;
-(id)speedStringByConvertingToUserUnits:(float)arg1 ;
-(id)formattedStringForSpeed:(float)arg1 direction:(float)arg2 ;
-(NSDictionary *)directionSubstringAttributes;
-(id)formattedStringForSpeed:(float)arg1 direction:(float)arg2 shortDescription:(BOOL)arg3 ;
-(id)fallbackStringForWindSpeed:(float)arg1 ;
-(id)templateStringForSpeed:(float)arg1 direction:(float)arg2 ;
@end

