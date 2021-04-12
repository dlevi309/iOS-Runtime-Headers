/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WFResponse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFWeatherConditions, NSData;

@interface WFForecastResponse : WFResponse <NSSecureCoding> {

	BOOL _responseWasFromCache;
	WFWeatherConditions* _forecast;
	unsigned long long _forecastType;
	NSData* _rawAPIData;

}

@property (nonatomic,retain) WFWeatherConditions * forecast;               //@synthesize forecast=_forecast - In the implementation block
@property (assign,nonatomic) unsigned long long forecastType;              //@synthesize forecastType=_forecastType - In the implementation block
@property (assign,nonatomic) BOOL responseWasFromCache;                    //@synthesize responseWasFromCache=_responseWasFromCache - In the implementation block
@property (nonatomic,retain) NSData * rawAPIData;                          //@synthesize rawAPIData=_rawAPIData - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)responseWasFromCache;
-(void)setForecastType:(unsigned long long)arg1 ;
-(void)setRawAPIData:(NSData *)arg1 ;
-(unsigned long long)forecastType;
-(NSData *)rawAPIData;
-(WFWeatherConditions *)forecast;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setForecast:(WFWeatherConditions *)arg1 ;
-(void)setResponseWasFromCache:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

