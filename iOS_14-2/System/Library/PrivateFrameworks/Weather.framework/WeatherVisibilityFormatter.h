/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <Foundation/NSLengthFormatter.h>

@class NSLocale;

@interface WeatherVisibilityFormatter : NSLengthFormatter {

	NSLocale* _locale;

}

@property (nonatomic,retain) NSLocale * locale;              //@synthesize locale=_locale - In the implementation block
+(id)convenienceFormatter;
-(NSLocale *)locale;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)init;
-(id)stringFromMiles:(double)arg1 ;
-(id)stringFromKilometers:(double)arg1 ;
-(id)stringFromDistance:(double)arg1 isDataMetric:(BOOL)arg2 ;
@end

