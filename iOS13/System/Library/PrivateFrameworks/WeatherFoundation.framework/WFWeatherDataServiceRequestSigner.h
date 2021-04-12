/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@interface WFWeatherDataServiceRequestSigner : NSObject
+(void)signRequest:(id)arg1 withDate:(id)arg2 ;
+(void)signRequest:(id)arg1 withSecret:(id)arg2 andDate:(id)arg3 ;
+(id)buildAuthHeader:(id)arg1 withSecret:(id)arg2 andDate:(id)arg3 ;
+(id)roundDate:(id)arg1 toMinutes:(unsigned long long)arg2 ;
@end

