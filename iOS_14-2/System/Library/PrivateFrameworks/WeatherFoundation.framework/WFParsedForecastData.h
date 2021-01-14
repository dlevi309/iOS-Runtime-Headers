/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@class NSData, WFAirQualityConditions, WFWeatherConditions, NSArray, WFNextHourPrecipitation;

@interface WFParsedForecastData : NSObject {

	NSData* _rawData;
	WFAirQualityConditions* _airQualityObservations;
	WFWeatherConditions* _currentConditions;
	NSArray* _lastTwentyFourHoursOfObservations;
	NSArray* _dailyForecasts;
	NSArray* _hourlyForecasts;
	NSArray* _pollenForecasts;
	NSArray* _changeForecasts;
	NSArray* _severeWeatherEvents;
	WFNextHourPrecipitation* _nextHourPrecipitation;

}

@property (nonatomic,retain) NSData * rawData;                                             //@synthesize rawData=_rawData - In the implementation block
@property (nonatomic,retain) WFAirQualityConditions * airQualityObservations;              //@synthesize airQualityObservations=_airQualityObservations - In the implementation block
@property (nonatomic,retain) WFWeatherConditions * currentConditions;                      //@synthesize currentConditions=_currentConditions - In the implementation block
@property (nonatomic,retain) NSArray * lastTwentyFourHoursOfObservations;                  //@synthesize lastTwentyFourHoursOfObservations=_lastTwentyFourHoursOfObservations - In the implementation block
@property (nonatomic,retain) NSArray * dailyForecasts;                                     //@synthesize dailyForecasts=_dailyForecasts - In the implementation block
@property (nonatomic,retain) NSArray * hourlyForecasts;                                    //@synthesize hourlyForecasts=_hourlyForecasts - In the implementation block
@property (nonatomic,retain) NSArray * pollenForecasts;                                    //@synthesize pollenForecasts=_pollenForecasts - In the implementation block
@property (nonatomic,retain) NSArray * changeForecasts;                                    //@synthesize changeForecasts=_changeForecasts - In the implementation block
@property (nonatomic,retain) NSArray * severeWeatherEvents;                                //@synthesize severeWeatherEvents=_severeWeatherEvents - In the implementation block
@property (nonatomic,retain) WFNextHourPrecipitation * nextHourPrecipitation;              //@synthesize nextHourPrecipitation=_nextHourPrecipitation - In the implementation block
-(NSArray *)severeWeatherEvents;
-(void)setChangeForecasts:(NSArray *)arg1 ;
-(void)setCurrentConditions:(WFWeatherConditions *)arg1 ;
-(NSArray *)pollenForecasts;
-(NSData *)rawData;
-(void)setSevereWeatherEvents:(NSArray *)arg1 ;
-(void)setPollenForecasts:(NSArray *)arg1 ;
-(WFNextHourPrecipitation *)nextHourPrecipitation;
-(void)setRawData:(NSData *)arg1 ;
-(void)setAirQualityObservations:(WFAirQualityConditions *)arg1 ;
-(void)setLastTwentyFourHoursOfObservations:(NSArray *)arg1 ;
-(NSArray *)lastTwentyFourHoursOfObservations;
-(NSArray *)changeForecasts;
-(void)setHourlyForecasts:(NSArray *)arg1 ;
-(id)objectForForecastType:(unsigned long long)arg1 ;
-(NSArray *)hourlyForecasts;
-(WFAirQualityConditions *)airQualityObservations;
-(WFWeatherConditions *)currentConditions;
-(void)setDailyForecasts:(NSArray *)arg1 ;
-(void)setNextHourPrecipitation:(WFNextHourPrecipitation *)arg1 ;
-(NSArray *)dailyForecasts;
@end

