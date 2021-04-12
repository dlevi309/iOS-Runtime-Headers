/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WFWeatherEventConfig;

@interface WFWeatherEventsConfig : NSObject <NSCopying> {

	WFWeatherEventConfig* _changeInConditions;
	WFWeatherEventConfig* _nextHourPrecipitation;
	WFWeatherEventConfig* _severeWeather;

}

@property (nonatomic,retain) WFWeatherEventConfig * changeInConditions;                 //@synthesize changeInConditions=_changeInConditions - In the implementation block
@property (nonatomic,retain) WFWeatherEventConfig * nextHourPrecipitation;              //@synthesize nextHourPrecipitation=_nextHourPrecipitation - In the implementation block
@property (nonatomic,retain) WFWeatherEventConfig * severeWeather;                      //@synthesize severeWeather=_severeWeather - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(WFWeatherEventConfig *)nextHourPrecipitation;
-(WFWeatherEventConfig *)changeInConditions;
-(void)setChangeInConditions:(WFWeatherEventConfig *)arg1 ;
-(WFWeatherEventConfig *)severeWeather;
-(void)setSevereWeather:(WFWeatherEventConfig *)arg1 ;
-(void)setNextHourPrecipitation:(WFWeatherEventConfig *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

