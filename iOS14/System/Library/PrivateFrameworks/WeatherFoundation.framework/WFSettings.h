/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

@class NSString, NSSet, WFWeatherEventsConfig, NSDictionary, NSURL;


@protocol WFSettings <NSObject,NSCopying>
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
@required
-(WFWeatherEventsConfig *)weatherEventsConfig;
-(NSString *)apiVersion;
-(unsigned long long)networkSwitchExpirationTimeInSeconds;
-(double)userIdentifierResetTimeInterval;
-(NSDictionary *)widgetRefreshPolicy;
-(NSURL *)appAnalyticsEndpointUrl;
-(NSString *)apiVersionFallback;
-(float)telemetrySamplingRate;
-(float)dataSamplingRate;
-(unsigned long long)networkFailedAttemptsLimit;
-(unsigned long long)locationNumDecimalsOfPrecision;
-(NSSet *)aqiEnabledCountryCodes;
-(double)privateUserIdentifierResetTimeInterval;

@end

