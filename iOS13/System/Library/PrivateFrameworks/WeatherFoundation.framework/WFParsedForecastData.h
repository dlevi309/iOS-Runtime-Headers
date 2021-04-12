/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@class NSData, WFAirQualityConditions, WFWeatherConditions, NSArray;

@interface WFParsedForecastData : NSObject {

	NSData* _rawData;
	WFAirQualityConditions* _airQualityObservations;
	WFWeatherConditions* _currentConditions;
	NSArray* _lastTwentyFourHoursOfObservations;
	NSArray* _dailyForecasts;
	NSArray* _hourlyForecasts;
	NSArray* _pollenForecasts;

}

@property (nonatomic,retain) NSData * rawData;                                             //@synthesize rawData=_rawData - In the implementation block
@property (nonatomic,retain) WFAirQualityConditions * airQualityObservations;              //@synthesize airQualityObservations=_airQualityObservations - In the implementation block
@property (nonatomic,retain) WFWeatherConditions * currentConditions;                      //@synthesize currentConditions=_currentConditions - In the implementation block
@property (nonatomic,retain) NSArray * lastTwentyFourHoursOfObservations;                  //@synthesize lastTwentyFourHoursOfObservations=_lastTwentyFourHoursOfObservations - In the implementation block
@property (nonatomic,retain) NSArray * dailyForecasts;                                     //@synthesize dailyForecasts=_dailyForecasts - In the implementation block
@property (nonatomic,retain) NSArray * hourlyForecasts;                                    //@synthesize hourlyForecasts=_hourlyForecasts - In the implementation block
@property (nonatomic,retain) NSArray * pollenForecasts;                                    //@synthesize pollenForecasts=_pollenForecasts - In the implementation block
-(NSData *)rawData;
-(void)setRawData:(NSData *)arg1 ;
-(WFWeatherConditions *)currentConditions;
-(void)setCurrentConditions:(WFWeatherConditions *)arg1 ;
-(NSArray *)dailyForecasts;
-(void)setDailyForecasts:(NSArray *)arg1 ;
-(NSArray *)hourlyForecasts;
-(void)setHourlyForecasts:(NSArray *)arg1 ;
-(void)setAirQualityObservations:(WFAirQualityConditions *)arg1 ;
-(WFAirQualityConditions *)airQualityObservations;
-(NSArray *)lastTwentyFourHoursOfObservations;
-(NSArray *)pollenForecasts;
-(id)objectForForecastType:(unsigned long long)arg1 ;
-(void)setLastTwentyFourHoursOfObservations:(NSArray *)arg1 ;
-(void)setPollenForecasts:(NSArray *)arg1 ;
@end

