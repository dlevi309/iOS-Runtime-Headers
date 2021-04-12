/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <Foundation/NSOperation.h>

@class City, WFLocation, WACurrentForecast, WFAirQualityConditions, NSArray, NSDate, NSDictionary, NSError, WFWeatherConditions, WFNextHourPrecipitation, WFAggregateCommonRequest, NSCalendar, NSLocale, NSString, NSData, WFServiceConnection, WAForecastModel;

@interface WAForecastOperation : NSOperation {

	BOOL _isDay;
	BOOL _shouldAttachRawAPIData;
	int _units;
	City* _city;
	WFLocation* _location;
	WACurrentForecast* _currentConditions;
	WFAirQualityConditions* _airQualityConditions;
	NSArray* _hourlyForecasts;
	NSArray* _dailyForecasts;
	NSDate* _sunrise;
	NSDate* _sunset;
	NSDictionary* _links;
	NSError* _error;
	WFWeatherConditions* _currentWeatherConditions;
	NSArray* _dailyForecastConditions;
	NSArray* _hourlyForecastConditions;
	NSArray* _severeWeatherEvents;
	NSArray* _changeForecasts;
	WFNextHourPrecipitation* _nextHourPrecipitation;
	WFAggregateCommonRequest* _aggregateRequest;
	NSCalendar* _calendar;
	NSLocale* _locale;
	NSString* _trackingParameter;
	NSData* _rawAPIData;
	WFServiceConnection* _connection;

}

@property (nonatomic,retain) WFWeatherConditions * currentWeatherConditions;               //@synthesize currentWeatherConditions=_currentWeatherConditions - In the implementation block
@property (nonatomic,retain) WACurrentForecast * currentConditions;                        //@synthesize currentConditions=_currentConditions - In the implementation block
@property (nonatomic,retain) WFAirQualityConditions * airQualityConditions;                //@synthesize airQualityConditions=_airQualityConditions - In the implementation block
@property (nonatomic,retain) NSArray * dailyForecastConditions;                            //@synthesize dailyForecastConditions=_dailyForecastConditions - In the implementation block
@property (nonatomic,retain) NSArray * hourlyForecastConditions;                           //@synthesize hourlyForecastConditions=_hourlyForecastConditions - In the implementation block
@property (nonatomic,retain) NSArray * hourlyForecasts;                                    //@synthesize hourlyForecasts=_hourlyForecasts - In the implementation block
@property (nonatomic,retain) NSArray * dailyForecasts;                                     //@synthesize dailyForecasts=_dailyForecasts - In the implementation block
@property (nonatomic,retain) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSDate * sunset;                                              //@synthesize sunset=_sunset - In the implementation block
@property (nonatomic,retain) NSDate * sunrise;                                             //@synthesize sunrise=_sunrise - In the implementation block
@property (nonatomic,retain) WFLocation * location;                                        //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSDictionary * links;                                         //@synthesize links=_links - In the implementation block
@property (nonatomic,retain) NSArray * severeWeatherEvents;                                //@synthesize severeWeatherEvents=_severeWeatherEvents - In the implementation block
@property (nonatomic,retain) NSArray * changeForecasts;                                    //@synthesize changeForecasts=_changeForecasts - In the implementation block
@property (nonatomic,retain) WFNextHourPrecipitation * nextHourPrecipitation;              //@synthesize nextHourPrecipitation=_nextHourPrecipitation - In the implementation block
@property (nonatomic,retain) WFAggregateCommonRequest * aggregateRequest;                  //@synthesize aggregateRequest=_aggregateRequest - In the implementation block
@property (assign,nonatomic) BOOL isDay;                                                   //@synthesize isDay=_isDay - In the implementation block
@property (nonatomic,retain) NSCalendar * calendar;                                        //@synthesize calendar=_calendar - In the implementation block
@property (retain) NSLocale * locale;                                                      //@synthesize locale=_locale - In the implementation block
@property (retain) NSString * trackingParameter;                                           //@synthesize trackingParameter=_trackingParameter - In the implementation block
@property (assign,nonatomic) BOOL shouldAttachRawAPIData;                                  //@synthesize shouldAttachRawAPIData=_shouldAttachRawAPIData - In the implementation block
@property (nonatomic,retain) NSData * rawAPIData;                                          //@synthesize rawAPIData=_rawAPIData - In the implementation block
@property (nonatomic,retain) City * city;                                                  //@synthesize city=_city - In the implementation block
@property (assign,nonatomic) int units;                                                    //@synthesize units=_units - In the implementation block
@property (nonatomic,retain) WFServiceConnection * connection;                             //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) WAForecastModel * forecastModel; 
-(int)units;
-(void)setTrackingParameter:(NSString *)arg1 ;
-(WFAirQualityConditions *)airQualityConditions;
-(NSString *)trackingParameter;
-(NSArray *)severeWeatherEvents;
-(BOOL)isDay;
-(void)setAirQualityConditions:(WFAirQualityConditions *)arg1 ;
-(void)setChangeForecasts:(NSArray *)arg1 ;
-(void)setUnits:(int)arg1 ;
-(BOOL)_needsGeolocation;
-(void)setRawAPIData:(NSData *)arg1 ;
-(void)setIsDay:(BOOL)arg1 ;
-(NSData *)rawAPIData;
-(NSDate *)sunset;
-(City *)city;
-(WFWeatherConditions *)currentWeatherConditions;
-(void)setCity:(City *)arg1 ;
-(NSLocale *)locale;
-(void)setCurrentConditions:(WACurrentForecast *)arg1 ;
-(id)initWithCity:(id)arg1 withUnits:(int)arg2 onConnection:(id)arg3 ;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(id)initWithLocation:(id)arg1 onConnection:(id)arg2 ;
-(void)setAggregateRequest:(WFAggregateCommonRequest *)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSDate *)sunrise;
-(void)setSunrise:(NSDate *)arg1 ;
-(WFLocation *)location;
-(NSCalendar *)calendar;
-(WAForecastModel *)forecastModel;
-(NSArray *)dailyForecastConditions;
-(void)setDailyForecastConditions:(NSArray *)arg1 ;
-(void)setSevereWeatherEvents:(NSArray *)arg1 ;
-(WFAggregateCommonRequest *)aggregateRequest;
-(void)setSunset:(NSDate *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(WFNextHourPrecipitation *)nextHourPrecipitation;
-(void)setLocation:(WFLocation *)arg1 ;
-(void)main;
-(WFServiceConnection *)connection;
-(void)setCurrentWeatherConditions:(WFWeatherConditions *)arg1 ;
-(NSArray *)changeForecasts;
-(void)setHourlyForecasts:(NSArray *)arg1 ;
-(void)_determineSunriseAndSunset;
-(void)setHourlyForecastConditions:(NSArray *)arg1 ;
-(NSArray *)hourlyForecasts;
-(NSDictionary *)links;
-(void)_failWithError:(id)arg1 ;
-(void)_mapReferralLinks;
-(WACurrentForecast *)currentConditions;
-(void)setDailyForecasts:(NSArray *)arg1 ;
-(id)initWithCity:(id)arg1 onConnection:(id)arg2 ;
-(void)setConnection:(WFServiceConnection *)arg1 ;
-(void)setNextHourPrecipitation:(WFNextHourPrecipitation *)arg1 ;
-(void)cancel;
-(NSArray *)dailyForecasts;
-(BOOL)shouldAttachRawAPIData;
-(BOOL)shouldRequestChangeInConditions;
-(void)setLinks:(NSDictionary *)arg1 ;
-(void)setShouldAttachRawAPIData:(BOOL)arg1 ;
-(NSArray *)hourlyForecastConditions;
@end

