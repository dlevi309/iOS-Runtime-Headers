/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <Foundation/NSLengthFormatter.h>

@class NSLocale;

@interface WeatherPrecipitationFormatter : NSLengthFormatter {

	NSLocale* _locale;

}

@property (nonatomic,retain) NSLocale * locale;              //@synthesize locale=_locale - In the implementation block
+(id)convenienceFormatter;
-(double)convertDistanceInMetric:(double)arg1 to:(long long)arg2 ;
-(id)stringForObjectValue:(id)arg1 ;
-(NSLocale *)locale;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)init;
-(double)convertDistanceInImperial:(double)arg1 to:(long long)arg2 ;
-(id)stringFromInches:(double)arg1 ;
-(id)stringFromCentimeters:(double)arg1 ;
-(long long)precipitationUnit;
-(id)stringFromDistance:(double)arg1 isDataMetric:(BOOL)arg2 ;
@end

