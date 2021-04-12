/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id<WeatherUpdaterDelegate>)delegate;
-(void)setDelegate:(id<WeatherUpdaterDelegate>)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(void)cancel;
-(BOOL)isUpdatingCity:(id)arg1 ;
-(void)updateWeatherForCity:(id)arg1 ;
-(NSString *)trackingParameter;
-(void)setTrackingParameter:(NSString *)arg1 ;
-(void)setForecastModelController:(WAForecastModelController *)arg1 ;
-(WAForecastModelController *)forecastModelController;
-(void)updateWeatherForCities:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updateWeatherForCities:(id)arg1 ;
@end

