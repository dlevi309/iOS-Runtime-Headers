/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)forecastRequest:(unsigned long long)arg1 forLocation:(id)arg2 locale:(id)arg3 date:(id)arg4 rules:(id)arg5 ;
+(id)forecastRequest:(unsigned long long)arg1 forLocation:(id)arg2 locale:(id)arg3 date:(id)arg4 ;
+(id)airQualityRequestForLocation:(id)arg1 locale:(id)arg2 ;
+(id)forecastRequestForRequest:(id)arg1 queryItems:(id)arg2 forLocation:(id)arg3 rules:(id)arg4 ;
+(id)forecastRequestForURL:(id)arg1 queryItems:(id)arg2 ;
@end

