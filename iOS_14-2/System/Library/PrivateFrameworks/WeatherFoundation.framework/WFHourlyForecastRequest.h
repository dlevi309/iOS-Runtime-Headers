/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WFAggregateForecastRequest.h>

@class NSLocale;

@interface WFHourlyForecastRequest : WFAggregateForecastRequest {

	NSLocale* _locale;

}

@property (nonatomic,retain) NSLocale * locale;              //@synthesize locale=_locale - In the implementation block
-(void)startWithService:(id)arg1 ;
-(id)initWithLocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSLocale *)locale;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)description;
@end

