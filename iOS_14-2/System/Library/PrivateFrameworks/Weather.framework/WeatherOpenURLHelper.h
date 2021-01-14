/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/


@interface WeatherOpenURLHelper : NSObject
+(id)cityFromURLComponents:(id)arg1 listedCities:(id)arg2 ;
+(BOOL)handleOpenURL:(id)arg1 withContainerViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)presentAddTransientCityDialog:(id)arg1 usingController:(id)arg2 ;
+(id)cityFromURL:(id)arg1 withContainerViewController:(id)arg2 ;
+(id)URLForCity:(id)arg1 ;
+(BOOL)handleOpenURL:(id)arg1 withContainerViewController:(id)arg2 ;
+(id)URLForWeatherCityComponents:(id)arg1 ;
+(void)displayCity:(id)arg1 usingController:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)transientCityFromURLComponents:(id)arg1 ;
@end

