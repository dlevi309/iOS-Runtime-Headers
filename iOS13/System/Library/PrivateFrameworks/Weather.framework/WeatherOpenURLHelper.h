/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/


@interface WeatherOpenURLHelper : NSObject
+(id)URLForWeatherCityComponents:(id)arg1 ;
+(BOOL)handleOpenURL:(id)arg1 withContainerViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)cityFromURLComponents:(id)arg1 listedCities:(id)arg2 ;
+(void)displayCity:(id)arg1 usingController:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)presentAddTransientCityDialog:(id)arg1 usingController:(id)arg2 ;
+(id)transientCityFromURLComponents:(id)arg1 ;
+(id)URLForCity:(id)arg1 ;
+(BOOL)handleOpenURL:(id)arg1 withContainerViewController:(id)arg2 ;
@end

