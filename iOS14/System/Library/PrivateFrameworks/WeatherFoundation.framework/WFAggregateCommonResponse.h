/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <WeatherFoundation/WFResponse.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFAirQualityConditions, WFWeatherConditions, NSArray, WFNextHourPrecipitation, NSData;

@interface WFAggregateCommonResponse : WFResponse <NSCopying, NSSecureCoding> {

	BOOL _responseWasFromCache;
	WFAirQualityConditions* _airQualityObservations;
	WFWeatherConditions* _currentObservations;
	NSArray* _lastTwentyFourHoursOfObservations;
	NSArray* _hourlyForecastedConditions;
	NSArray* _dailyForecastedConditions;
	NSArray* _dailyPollenForecastedConditions;
	NSArray* _changeForecasts;
	NSArray* _severeWeatherEvents;
	WFNextHourPrecipitation* _nextHourPrecipitation;
	NSData* _rawAPIData;

}

@property (nonatomic,retain) WFAirQualityConditions * airQualityObservations;              //@synthesize airQualityObservations=_airQualityObservations - In the implementation block
@property (nonatomic,retain) WFWeatherConditions * currentObservations;                    //@synthesize currentObservations=_currentObservations - In the implementation block
@property (nonatomic,retain) NSArray * lastTwentyFourHoursOfObservations;                  //@synthesize lastTwentyFourHoursOfObservations=_lastTwentyFourHoursOfObservations - In the implementation block
@property (nonatomic,retain) NSArray * hourlyForecastedConditions;                         //@synthesize hourlyForecastedConditions=_hourlyForecastedConditions - In the implementation block
@property (nonatomic,retain) NSArray * dailyForecastedConditions;                          //@synthesize dailyForecastedConditions=_dailyForecastedConditions - In the implementation block
@property (nonatomic,retain) NSArray * dailyPollenForecastedConditions;                    //@synthesize dailyPollenForecastedConditions=_dailyPollenForecastedConditions - In the implementation block
@property (nonatomic,retain) NSArray * changeForecasts;                                    //@synthesize changeForecasts=_changeForecasts - In the implementation block
@property (nonatomic,retain) NSArray * severeWeatherEvents;                                //@synthesize severeWeatherEvents=_severeWeatherEvents - In the implementation block
@property (nonatomic,retain) WFNextHourPrecipitation * nextHourPrecipitation;              //@synthesize nextHourPrecipitation=_nextHourPrecipitation - In the implementation block
@property (assign,nonatomic) BOOL responseWasFromCache;                                    //@synthesize responseWasFromCache=_responseWasFromCache - In the implementation block
@property (nonatomic,retain) NSData * rawAPIData;                                          //@synthesize rawAPIData=_rawAPIData - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)severeWeatherEvents;
-(void)setDailyPollenForecastedConditions:(NSArray *)arg1 ;
-(void)setChangeForecasts:(NSArray *)arg1 ;
-(BOOL)responseWasFromCache;
-(void)setRawAPIData:(NSData *)arg1 ;
-(NSData *)rawAPIData;
-(WFWeatherConditions *)currentObservations;
-(void)setCurrentObservations:(WFWeatherConditions *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSevereWeatherEvents:(NSArray *)arg1 ;
-(WFNextHourPrecipitation *)nextHourPrecipitation;
-(void)setHourlyForecastedConditions:(NSArray *)arg1 ;
-(void)setAirQualityObservations:(WFAirQualityConditions *)arg1 ;
-(void)setLastTwentyFourHoursOfObservations:(NSArray *)arg1 ;
-(NSArray *)lastTwentyFourHoursOfObservations;
-(NSArray *)hourlyForecastedConditions;
-(NSArray *)changeForecasts;
-(NSArray *)dailyPollenForecastedConditions;
-(void)setDailyForecastedConditions:(NSArray *)arg1 ;
-(void)setResponseWasFromCache:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)dailyForecastedConditions;
-(WFAirQualityConditions *)airQualityObservations;
-(void)setNextHourPrecipitation:(WFNextHourPrecipitation *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

