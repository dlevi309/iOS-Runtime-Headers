/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(WFWeatherConditions *)forecast;
-(NSData *)rawAPIData;
-(void)setRawAPIData:(NSData *)arg1 ;
-(void)setResponseWasFromCache:(BOOL)arg1 ;
-(BOOL)responseWasFromCache;
-(unsigned long long)forecastType;
-(void)setForecastType:(unsigned long long)arg1 ;
-(void)setForecast:(WFWeatherConditions *)arg1 ;
@end

