/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <Weather/Weather-Structs.h>
#import <Weather/TWCCityUpdater.h>

@class City, CLGeocoder;

@interface TWCLocationUpdater : TWCCityUpdater {

	City* _currentCity;
	CLGeocoder* _reverseGeocoder;
	ct_green_tea_logger_sRef _greenTeaLogger;

}

@property (nonatomic,retain) CLGeocoder * reverseGeocoder;                         //@synthesize reverseGeocoder=_reverseGeocoder - In the implementation block
@property (assign,nonatomic) ct_green_tea_logger_sRef greenTeaLogger;              //@synthesize greenTeaLogger=_greenTeaLogger - In the implementation block
@property (nonatomic,retain) City * currentCity;                                   //@synthesize currentCity=_currentCity - In the implementation block
+(id)sharedLocationUpdater;
-(void)updateWeatherForLocation:(id)arg1 city:(id)arg2 ;
-(void)setReverseGeocoder:(CLGeocoder *)arg1 ;
-(id)init;
-(void)enableProgressIndicator:(BOOL)arg1 ;
-(void)setGreenTeaLogger:(ct_green_tea_logger_sRef)arg1 ;
-(void)_updateWeatherForLocation:(id)arg1 city:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_completeReverseGeocodeForLocation:(id)arg1 currentCity:(id)arg2 geocodeError:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)parsedResultCity:(id)arg1 ;
-(void)_geocodeLocation:(id)arg1 currentCity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateWeatherForCity:(id)arg1 ;
-(CLGeocoder *)reverseGeocoder;
-(City *)currentCity;
-(void)updateWeatherForCities:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(ct_green_tea_logger_sRef)greenTeaLogger;
-(void)dealloc;
-(void)setCurrentCity:(City *)arg1 ;
-(void)updateWeatherForLocation:(id)arg1 city:(id)arg2 isFromFrameworkClient:(BOOL)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
@end

