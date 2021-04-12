/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <Weather/Weather-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class City, WFLocation, WACurrentForecast, WFAirQualityConditions, NSArray, NSDate, NSURL, WFNextHourPrecipitation, WFWeatherConditions;

@interface WAForecastModel : NSObject <NSCopying> {

	int _unit;
	City* _city;
	WFLocation* _location;
	WACurrentForecast* _currentConditions;
	WFAirQualityConditions* _airQualityConditions;
	NSArray* _hourlyForecasts;
	NSArray* _dailyForecasts;
	NSDate* _sunrise;
	NSDate* _sunset;
	NSURL* _deepLink;
	NSURL* _link;
	NSArray* _severeWeatherEvents;
	NSArray* _changeForecasts;
	WFNextHourPrecipitation* _nextHourPrecipitation;
	WFWeatherConditions* _underlyingCurrentConditions;
	NSArray* _underlyingHourlyConditions;
	NSArray* _underlyingDailyConditions;

}

@property (nonatomic,retain) City * city;                                                    //@synthesize city=_city - In the implementation block
@property (assign,nonatomic) int unit;                                                       //@synthesize unit=_unit - In the implementation block
@property (nonatomic,retain) WFLocation * location;                                          //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) WACurrentForecast * currentConditions;                          //@synthesize currentConditions=_currentConditions - In the implementation block
@property (nonatomic,retain) WFAirQualityConditions * airQualityConditions;                  //@synthesize airQualityConditions=_airQualityConditions - In the implementation block
@property (nonatomic,copy) NSArray * hourlyForecasts;                                        //@synthesize hourlyForecasts=_hourlyForecasts - In the implementation block
@property (nonatomic,copy) NSArray * dailyForecasts;                                         //@synthesize dailyForecasts=_dailyForecasts - In the implementation block
@property (nonatomic,retain) NSDate * sunrise;                                               //@synthesize sunrise=_sunrise - In the implementation block
@property (nonatomic,retain) NSDate * sunset;                                                //@synthesize sunset=_sunset - In the implementation block
@property (nonatomic,retain) NSURL * deepLink;                                               //@synthesize deepLink=_deepLink - In the implementation block
@property (nonatomic,retain) NSURL * link;                                                   //@synthesize link=_link - In the implementation block
@property (nonatomic,copy) NSArray * severeWeatherEvents;                                    //@synthesize severeWeatherEvents=_severeWeatherEvents - In the implementation block
@property (nonatomic,copy) NSArray * changeForecasts;                                        //@synthesize changeForecasts=_changeForecasts - In the implementation block
@property (nonatomic,copy) WFNextHourPrecipitation * nextHourPrecipitation;                  //@synthesize nextHourPrecipitation=_nextHourPrecipitation - In the implementation block
@property (nonatomic,retain) WFWeatherConditions * underlyingCurrentConditions;              //@synthesize underlyingCurrentConditions=_underlyingCurrentConditions - In the implementation block
@property (nonatomic,retain) NSArray * underlyingHourlyConditions;                           //@synthesize underlyingHourlyConditions=_underlyingHourlyConditions - In the implementation block
@property (nonatomic,retain) NSArray * underlyingDailyConditions;                            //@synthesize underlyingDailyConditions=_underlyingDailyConditions - In the implementation block
@property (nonatomic,readonly) BOOL isPopulated; 
-(NSURL *)link;
-(WFAirQualityConditions *)airQualityConditions;
-(NSArray *)severeWeatherEvents;
-(void)setAirQualityConditions:(WFAirQualityConditions *)arg1 ;
-(void)setChangeForecasts:(NSArray *)arg1 ;
-(void)setLink:(NSURL *)arg1 ;
-(NSDate *)sunset;
-(City *)city;
-(void)setCity:(City *)arg1 ;
-(void)setCurrentConditions:(WACurrentForecast *)arg1 ;
-(NSDate *)sunrise;
-(NSArray *)underlyingHourlyConditions;
-(void)setSunrise:(NSDate *)arg1 ;
-(WFLocation *)location;
-(void)setSevereWeatherEvents:(NSArray *)arg1 ;
-(void)setSunset:(NSDate *)arg1 ;
-(NSArray *)underlyingDailyConditions;
-(void)setUnderlyingHourlyConditions:(NSArray *)arg1 ;
-(WFNextHourPrecipitation *)nextHourPrecipitation;
-(void)setLocation:(WFLocation *)arg1 ;
-(id)description;
-(NSArray *)changeForecasts;
-(void)setHourlyForecasts:(NSArray *)arg1 ;
-(int)unit;
-(unsigned long long)hash;
-(WFWeatherConditions *)underlyingCurrentConditions;
-(void)setDeepLink:(NSURL *)arg1 ;
-(NSArray *)hourlyForecasts;
-(BOOL)isPopulated;
-(WACurrentForecast *)currentConditions;
-(void)setUnit:(int)arg1 ;
-(void)setDailyForecasts:(NSArray *)arg1 ;
-(NSURL *)deepLink;
-(void)setNextHourPrecipitation:(WFNextHourPrecipitation *)arg1 ;
-(NSArray *)dailyForecasts;
-(void)setUnderlyingDailyConditions:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setUnderlyingCurrentConditions:(WFWeatherConditions *)arg1 ;
@end

