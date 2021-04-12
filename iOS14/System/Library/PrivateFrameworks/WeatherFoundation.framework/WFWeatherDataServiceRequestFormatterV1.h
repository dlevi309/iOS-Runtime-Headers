/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <libobjc.A.dylib/WFForecastRequestFormatter.h>
#import <libobjc.A.dylib/WFForecastRequestFormatterMultiHost.h>

@class NSString;

@interface WFWeatherDataServiceRequestFormatterV1 : NSObject <WFForecastRequestFormatter, WFForecastRequestFormatterMultiHost>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)hostURLForEnvironment:(id)arg1 ;
+(id)hostURLForService;
+(id)forecastRequest:(unsigned long long)arg1 forLocation:(id)arg2 withUnits:(int)arg3 locale:(id)arg4 date:(id)arg5 rules:(id)arg6 ;
+(id)aqiRequestForScaleNamed:(id)arg1 language:(id)arg2 ;
+(id)geocodePathForLocation:(id)arg1 rules:(id)arg2 ;
+(id)forecastRequest:(unsigned long long)arg1 forLocation:(id)arg2 locale:(id)arg3 date:(id)arg4 ;
@end

