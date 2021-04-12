/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <Weather/Weather-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class City, WFLocation, WACurrentForecast, WFAirQualityConditions, NSArray, NSDate, NSURL, WFWeatherConditions;

@interface WAForecastModel : NSObject <NSCopying> {

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
	WFWeatherConditions* _underlyingCurrentConditions;
	NSArray* _underlyingHourlyConditions;
	NSArray* _underlyingDailyConditions;

}

@property (nonatomic,retain) City * city;                                                    //@synthesize city=_city - In the implementation block
@property (nonatomic,retain) WFLocation * location;                                          //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) WACurrentForecast * currentConditions;                          //@synthesize currentConditions=_currentConditions - In the implementation block
@property (nonatomic,retain) WFAirQualityConditions * airQualityConditions;                  //@synthesize airQualityConditions=_airQualityConditions - In the implementation block
@property (nonatomic,copy) NSArray * hourlyForecasts;                                        //@synthesize hourlyForecasts=_hourlyForecasts - In the implementation block
@property (nonatomic,copy) NSArray * dailyForecasts;                                         //@synthesize dailyForecasts=_dailyForecasts - In the implementation block
@property (nonatomic,retain) NSDate * sunrise;                                               //@synthesize sunrise=_sunrise - In the implementation block
@property (nonatomic,retain) NSDate * sunset;                                                //@synthesize sunset=_sunset - In the implementation block
@property (nonatomic,retain) NSURL * deepLink;                                               //@synthesize deepLink=_deepLink - In the implementation block
@property (nonatomic,retain) NSURL * link;                                                   //@synthesize link=_link - In the implementation block
@property (nonatomic,retain) WFWeatherConditions * underlyingCurrentConditions;              //@synthesize underlyingCurrentConditions=_underlyingCurrentConditions - In the implementation block
@property (nonatomic,retain) NSArray * underlyingHourlyConditions;                           //@synthesize underlyingHourlyConditions=_underlyingHourlyConditions - In the implementation block
@property (nonatomic,retain) NSArray * underlyingDailyConditions;                            //@synthesize underlyingDailyConditions=_underlyingDailyConditions - In the implementation block
@property (nonatomic,readonly) BOOL isPopulated; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(WFLocation *)location;
-(City *)city;
-(void)setLocation:(WFLocation *)arg1 ;
-(NSURL *)link;
-(void)setLink:(NSURL *)arg1 ;
-(NSDate *)sunrise;
-(NSDate *)sunset;
-(void)setCity:(City *)arg1 ;
-(NSURL *)deepLink;
-(void)setDeepLink:(NSURL *)arg1 ;
-(WACurrentForecast *)currentConditions;
-(void)setSunrise:(NSDate *)arg1 ;
-(void)setSunset:(NSDate *)arg1 ;
-(void)setCurrentConditions:(WACurrentForecast *)arg1 ;
-(NSArray *)dailyForecasts;
-(void)setDailyForecasts:(NSArray *)arg1 ;
-(NSArray *)hourlyForecasts;
-(void)setHourlyForecasts:(NSArray *)arg1 ;
-(void)setAirQualityConditions:(WFAirQualityConditions *)arg1 ;
-(BOOL)isPopulated;
-(WFAirQualityConditions *)airQualityConditions;
-(void)setUnderlyingCurrentConditions:(WFWeatherConditions *)arg1 ;
-(void)setUnderlyingHourlyConditions:(NSArray *)arg1 ;
-(void)setUnderlyingDailyConditions:(NSArray *)arg1 ;
-(WFWeatherConditions *)underlyingCurrentConditions;
-(NSArray *)underlyingHourlyConditions;
-(NSArray *)underlyingDailyConditions;
@end

