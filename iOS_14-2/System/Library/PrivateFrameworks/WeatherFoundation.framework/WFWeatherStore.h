/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@protocol WFWeatherStore <NSObject>
@required
-(void)forecast:(unsigned long long)arg1 forLocation:(id)arg2 locale:(id)arg3 requestIdentifier:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)cancelTaskWithIdentifier:(id)arg1;
-(void)forecast:(unsigned long long)arg1 forLocation:(id)arg2 withUnits:(int)arg3 locale:(id)arg4 requestIdentifier:(id)arg5 completionHandler:(/*^block*/id)arg6;
-(void)airQualityForLocation:(id)arg1 locale:(id)arg2 requestIdentifier:(id)arg3 options:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)forecastForLocation:(id)arg1 locale:(id)arg2 onDate:(id)arg3 requestIdentifier:(id)arg4 options:(id)arg5 completionHandler:(/*^block*/id)arg6;
-(void)hourlyForecastForLocation:(id)arg1 locale:(id)arg2 requestIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)dailyForecastForLocation:(id)arg1 locale:(id)arg2 requestIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4;

@end

