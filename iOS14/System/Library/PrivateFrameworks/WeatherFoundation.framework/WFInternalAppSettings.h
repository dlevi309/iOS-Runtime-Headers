/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/WFSettings.h>

@class NSString, NSSet, WFWeatherEventsConfig, NSDictionary, NSURL;

@interface WFInternalAppSettings : NSObject <WFSettings>

@property (nonatomic,readonly) NSString * apiVersion; 
@property (nonatomic,readonly) NSSet * aqiEnabledCountryCodes; 
@property (nonatomic,readonly) NSString * apiVersionFallback; 
@property (nonatomic,readonly) unsigned long long networkFailedAttemptsLimit; 
@property (nonatomic,readonly) unsigned long long networkSwitchExpirationTimeInSeconds; 
@property (nonatomic,readonly) unsigned long long locationNumDecimalsOfPrecision; 
@property (nonatomic,readonly) WFWeatherEventsConfig * weatherEventsConfig; 
@property (nonatomic,readonly) NSDictionary * widgetRefreshPolicy; 
@property (nonatomic,readonly) NSURL * appAnalyticsEndpointUrl; 
@property (nonatomic,readonly) float dataSamplingRate; 
@property (nonatomic,readonly) float telemetrySamplingRate; 
@property (nonatomic,readonly) double userIdentifierResetTimeInterval; 
@property (nonatomic,readonly) double privateUserIdentifierResetTimeInterval; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WFWeatherEventsConfig *)weatherEventsConfig;
-(NSString *)apiVersion;
-(NSString *)description;
-(unsigned long long)networkSwitchExpirationTimeInSeconds;
-(double)userIdentifierResetTimeInterval;
-(NSURL *)appAnalyticsEndpointUrl;
-(NSString *)apiVersionFallback;
-(float)telemetrySamplingRate;
-(float)dataSamplingRate;
-(unsigned long long)networkFailedAttemptsLimit;
-(unsigned long long)locationNumDecimalsOfPrecision;
-(NSSet *)aqiEnabledCountryCodes;
-(double)privateUserIdentifierResetTimeInterval;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

