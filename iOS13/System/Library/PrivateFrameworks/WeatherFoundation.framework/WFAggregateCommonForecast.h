/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@class WFAirQualityConditions, WFWeatherConditions, NSArray;

@interface WFAggregateCommonForecast : NSObject {

	WFAirQualityConditions* _airQualityObservations;
	WFWeatherConditions* _currentObservations;
	NSArray* _lastTwentyFourHoursOfObservations;
	NSArray* _hourlyForecastedConditions;
	NSArray* _dailyForecastedConditions;
	NSArray* _dailyPollenForecastedConditions;

}

@property (nonatomic,retain) WFAirQualityConditions * airQualityObservations;              //@synthesize airQualityObservations=_airQualityObservations - In the implementation block
@property (nonatomic,retain) WFWeatherConditions * currentObservations;                    //@synthesize currentObservations=_currentObservations - In the implementation block
@property (nonatomic,retain) NSArray * lastTwentyFourHoursOfObservations;                  //@synthesize lastTwentyFourHoursOfObservations=_lastTwentyFourHoursOfObservations - In the implementation block
@property (nonatomic,retain) NSArray * hourlyForecastedConditions;                         //@synthesize hourlyForecastedConditions=_hourlyForecastedConditions - In the implementation block
@property (nonatomic,retain) NSArray * dailyForecastedConditions;                          //@synthesize dailyForecastedConditions=_dailyForecastedConditions - In the implementation block
@property (nonatomic,retain) NSArray * dailyPollenForecastedConditions;                    //@synthesize dailyPollenForecastedConditions=_dailyPollenForecastedConditions - In the implementation block
-(void)setAirQualityObservations:(WFAirQualityConditions *)arg1 ;
-(WFAirQualityConditions *)airQualityObservations;
-(NSArray *)lastTwentyFourHoursOfObservations;
-(void)setLastTwentyFourHoursOfObservations:(NSArray *)arg1 ;
-(void)setCurrentObservations:(WFWeatherConditions *)arg1 ;
-(void)setHourlyForecastedConditions:(NSArray *)arg1 ;
-(void)setDailyForecastedConditions:(NSArray *)arg1 ;
-(void)setDailyPollenForecastedConditions:(NSArray *)arg1 ;
-(WFWeatherConditions *)currentObservations;
-(NSArray *)hourlyForecastedConditions;
-(NSArray *)dailyForecastedConditions;
-(NSArray *)dailyPollenForecastedConditions;
@end

