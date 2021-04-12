/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/


@protocol WeatherUpdaterDelegate;
@class NSLocale, WAForecastModelController, NSString;

@interface TWCCityUpdater : NSObject {

	id<WeatherUpdaterDelegate> _delegate;
	NSLocale* _locale;
	WAForecastModelController* _forecastModelController;

}

@property (nonatomic,retain) WAForecastModelController * forecastModelController;              //@synthesize forecastModelController=_forecastModelController - In the implementation block
@property (assign,nonatomic,__weak) id<WeatherUpdaterDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                                //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSString * trackingParameter; 
+(id)sharedCityUpdater;
-(void)setTrackingParameter:(NSString *)arg1 ;
-(NSString *)trackingParameter;
-(NSLocale *)locale;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)init;
-(id<WeatherUpdaterDelegate>)delegate;
-(void)setDelegate:(id<WeatherUpdaterDelegate>)arg1 ;
-(void)updateWeatherForCity:(id)arg1 ;
-(BOOL)isUpdatingCity:(id)arg1 ;
-(WAForecastModelController *)forecastModelController;
-(void)updateWeatherForCities:(id)arg1 ;
-(void)updateWeatherForCities:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setForecastModelController:(WAForecastModelController *)arg1 ;
-(void)cancel;
@end

