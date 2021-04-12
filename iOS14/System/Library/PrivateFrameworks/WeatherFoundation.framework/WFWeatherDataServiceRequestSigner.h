/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@interface WFWeatherDataServiceRequestSigner : NSObject
+(void)signRequest:(id)arg1 withDate:(id)arg2 ;
+(void)signRequest:(id)arg1 withSecret:(id)arg2 andDate:(id)arg3 ;
+(id)buildAuthHeader:(id)arg1 withSecret:(id)arg2 andDate:(id)arg3 ;
+(id)roundDate:(id)arg1 toMinutes:(unsigned long long)arg2 ;
@end

