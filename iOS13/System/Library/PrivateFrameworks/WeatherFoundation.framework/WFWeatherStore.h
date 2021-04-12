/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@protocol WFWeatherStore <NSObject>
@required
-(void)cancelTaskWithIdentifier:(id)arg1;
-(void)forecastForLocation:(id)arg1 locale:(id)arg2 atDate:(id)arg3 requestIdentifier:(id)arg4 options:(id)arg5 completionHandler:(/*^block*/id)arg6;
-(void)hourlyForecastForLocation:(id)arg1 locale:(id)arg2 requestIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)dailyForecastForLocation:(id)arg1 locale:(id)arg2 requestIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)forecast:(unsigned long long)arg1 forLocation:(id)arg2 locale:(id)arg3 requestIdentifier:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)airQualityForLocation:(id)arg1 locale:(id)arg2 requestIdentifier:(id)arg3 options:(id)arg4 completionHandler:(/*^block*/id)arg5;

@end

