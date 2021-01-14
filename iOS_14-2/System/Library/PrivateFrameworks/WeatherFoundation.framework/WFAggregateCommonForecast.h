/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@class WFAirQualityConditions, WFWeatherConditions, NSArray, WFNextHourPrecipitation;

@interface WFAggregateCommonForecast : NSObject {

	WFAirQualityConditions* _airQualityObservations;
	WFWeatherConditions* _currentObservations;
	NSArray* _lastTwentyFourHoursOfObservations;
	NSArray* _hourlyForecastedConditions;
	NSArray* _dailyForecastedConditions;
	NSArray* _dailyPollenForecastedConditions;
	NSArray* _severeWeatherEvents;
	NSArray* _changeForecasts;
	WFNextHourPrecipitation* _nextHourPrecipitation;

}

@property (nonatomic,retain) WFAirQualityConditions * airQualityObservations;              //@synthesize airQualityObservations=_airQualityObservations - In the implementation block
@property (nonatomic,retain) WFWeatherConditions * currentObservations;                    //@synthesize currentObservations=_currentObservations - In the implementation block
@property (nonatomic,retain) NSArray * lastTwentyFourHoursOfObservations;                  //@synthesize lastTwentyFourHoursOfObservations=_lastTwentyFourHoursOfObservations - In the implementation block
@property (nonatomic,retain) NSArray * hourlyForecastedConditions;                         //@synthesize hourlyForecastedConditions=_hourlyForecastedConditions - In the implementation block
@property (nonatomic,retain) NSArray * dailyForecastedConditions;                          //@synthesize dailyForecastedConditions=_dailyForecastedConditions - In the implementation block
@property (nonatomic,retain) NSArray * dailyPollenForecastedConditions;                    //@synthesize dailyPollenForecastedConditions=_dailyPollenForecastedConditions - In the implementation block
@property (nonatomic,retain) NSArray * severeWeatherEvents;                                //@synthesize severeWeatherEvents=_severeWeatherEvents - In the implementation block
@property (nonatomic,retain) NSArray * changeForecasts;                                    //@synthesize changeForecasts=_changeForecasts - In the implementation block
@property (nonatomic,retain) WFNextHourPrecipitation * nextHourPrecipitation;              //@synthesize nextHourPrecipitation=_nextHourPrecipitation - In the implementation block
-(NSArray *)severeWeatherEvents;
-(void)setDailyPollenForecastedConditions:(NSArray *)arg1 ;
-(void)setChangeForecasts:(NSArray *)arg1 ;
-(WFWeatherConditions *)currentObservations;
-(void)setCurrentObservations:(WFWeatherConditions *)arg1 ;
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
-(NSArray *)dailyForecastedConditions;
-(WFAirQualityConditions *)airQualityObservations;
-(void)setNextHourPrecipitation:(WFNextHourPrecipitation *)arg1 ;
@end

