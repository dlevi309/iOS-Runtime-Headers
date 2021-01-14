/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <libobjc.A.dylib/WFForecastRequestFormatter.h>

@class NSString;

@interface WFWeatherChannelRequestFormatterV2 : NSObject <WFForecastRequestFormatter>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)hostURLForService;
+(id)forecastRequest:(unsigned long long)arg1 forLocation:(id)arg2 withUnits:(int)arg3 locale:(id)arg4 date:(id)arg5 rules:(id)arg6 ;
+(id)airQualityRequestForLocation:(id)arg1 locale:(id)arg2 ;
+(id)forecastRequestForRequest:(id)arg1 queryItems:(id)arg2 forLocation:(id)arg3 rules:(id)arg4 ;
+(id)forecastRequestForURL:(id)arg1 queryItems:(id)arg2 ;
+(id)aqiRequestForScaleNamed:(id)arg1 language:(id)arg2 ;
+(id)forecastRequest:(unsigned long long)arg1 forLocation:(id)arg2 locale:(id)arg3 date:(id)arg4 ;
@end

