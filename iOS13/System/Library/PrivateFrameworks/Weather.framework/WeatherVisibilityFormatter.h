/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <Foundation/NSLengthFormatter.h>

@class NSLocale;

@interface WeatherVisibilityFormatter : NSLengthFormatter {

	NSLocale* _locale;

}

@property (nonatomic,retain) NSLocale * locale;              //@synthesize locale=_locale - In the implementation block
+(id)convenienceFormatter;
-(id)init;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)stringFromDistance:(double)arg1 isDataMetric:(BOOL)arg2 ;
-(id)stringFromKilometers:(double)arg1 ;
-(id)stringFromMiles:(double)arg1 ;
@end

