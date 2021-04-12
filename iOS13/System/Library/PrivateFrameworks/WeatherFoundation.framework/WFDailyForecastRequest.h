/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WFAggregateForecastRequest.h>

@class NSLocale;

@interface WFDailyForecastRequest : WFAggregateForecastRequest {

	NSLocale* _locale;

}

@property (nonatomic,retain) NSLocale * locale;              //@synthesize locale=_locale - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)initWithLocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startWithService:(id)arg1 ;
@end

