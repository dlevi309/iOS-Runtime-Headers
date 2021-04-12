/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@protocol WeatherServiceProtocol <WeatherServiceInternalProtocol>
@required
-(void)forecast:(unsigned long long)arg1 forLocation:(id)arg2 locale:(id)arg3 taskIdentifier:(id)arg4;
-(void)forecastForLocation:(id)arg1 locale:(id)arg2 onDate:(id)arg3 options:(id)arg4 taskIdentifier:(id)arg5;
-(void)locationForSearchCompletion:(id)arg1 taskIdentifier:(id)arg2;
-(void)dailyForecastForLocation:(id)arg1 locale:(id)arg2 taskIdentifier:(id)arg3;
-(void)locationForCoordinate:(CLLocationCoordinate2D)arg1 taskIdentifier:(id)arg2;
-(void)cancelTaskWithIdentifier:(id)arg1;
-(void)invalidateCache:(id)arg1;
-(void)replaceTemperatureUnitWith:(int)arg1 identifier:(id)arg2;
-(void)forecast:(unsigned long long)arg1 forLocation:(id)arg2 withUnits:(int)arg3 locale:(id)arg4 taskIdentifier:(id)arg5;
-(void)temperatureUnitWithIdentifier:(id)arg1;
-(void)locationForString:(id)arg1 taskIdentifier:(id)arg2;
-(void)hourlyForecastForLocation:(id)arg1 locale:(id)arg2 taskIdentifier:(id)arg3;
-(void)airQualityForLocation:(id)arg1 locale:(id)arg2 options:(id)arg3 taskIdentifier:(id)arg4;
-(void)reachabilityConfigurationForIdentifier:(id)arg1;

@end

