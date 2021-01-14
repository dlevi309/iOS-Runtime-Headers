/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <libobjc.A.dylib/WFForecastRequestFormatter.h>

@class NSString;

@interface WFWeatherChannelRequestFormatterV3 : NSObject <WFForecastRequestFormatter>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)hostURLForService;
+(id)forecastRequest:(unsigned long long)arg1 forLocation:(id)arg2 withUnits:(int)arg3 locale:(id)arg4 date:(id)arg5 rules:(id)arg6 ;
+(id)forecastRequest:(id)arg1 forLocation:(id)arg2 locale:(id)arg3 date:(id)arg4 queryItems:(id)arg5 rules:(id)arg6 ;
+(id)aqiRequestForScaleNamed:(id)arg1 language:(id)arg2 ;
+(id)forecastRequestForComponents:(id)arg1 location:(id)arg2 locale:(id)arg3 date:(id)arg4 queryItems:(id)arg5 ;
+(id)forecastRequest:(unsigned long long)arg1 forLocation:(id)arg2 locale:(id)arg3 date:(id)arg4 ;
@end

