/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@protocol WeatherServiceProtocol <WeatherServiceInternalProtocol>
@required
-(void)cancelTaskWithIdentifier:(id)arg1;
-(void)airQualityForLocation:(id)arg1 locale:(id)arg2 options:(id)arg3 taskIdentifier:(id)arg4;
-(void)forecastForLocation:(id)arg1 locale:(id)arg2 atDate:(id)arg3 options:(id)arg4 taskIdentifier:(id)arg5;
-(void)hourlyForecastForLocation:(id)arg1 locale:(id)arg2 taskIdentifier:(id)arg3;
-(void)dailyForecastForLocation:(id)arg1 locale:(id)arg2 taskIdentifier:(id)arg3;
-(void)forecast:(unsigned long long)arg1 forLocation:(id)arg2 locale:(id)arg3 taskIdentifier:(id)arg4;
-(void)locationForString:(id)arg1 taskIdentifier:(id)arg2;
-(void)locationForCoordinate:(CLLocationCoordinate2D)arg1 taskIdentifier:(id)arg2;
-(void)locationForSearchCompletion:(id)arg1 taskIdentifier:(id)arg2;
-(void)temperatureUnitWithIdentifier:(id)arg1;
-(void)replaceTemperatureUnitWith:(int)arg1 identifier:(id)arg2;
-(void)reachabilityConfigurationForIdentifier:(id)arg1;
-(void)invalidateCache:(id)arg1;

@end

