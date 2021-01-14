/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <Weather/WATodayModel.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <libobjc.A.dylib/SynchronizedDefaultsDelegate.h>

@class WeatherLocationManager, WFGeocodeRequest, WeatherPreferences, NSString;

@interface WATodayAutoupdatingLocationModel : WATodayModel <CLLocationManagerDelegate, SynchronizedDefaultsDelegate> {

	BOOL _isLocationTrackingEnabled;
	BOOL _locationServicesActive;
	BOOL _stopUpdateIfNeeded;
	WeatherLocationManager* _locationManager;
	WFGeocodeRequest* _geocodeRequest;
	unsigned long long _citySource;
	unsigned long long _fallbackCitySource;
	WeatherPreferences* _preferences;
	/*^block*/id _WeatherLocationManagerGenerator;

}

@property (nonatomic,retain) WFGeocodeRequest * geocodeRequest;                     //@synthesize geocodeRequest=_geocodeRequest - In the implementation block
@property (assign,nonatomic) BOOL isLocationTrackingEnabled;                        //@synthesize isLocationTrackingEnabled=_isLocationTrackingEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long citySource;                         //@synthesize citySource=_citySource - In the implementation block
@property (assign,nonatomic) unsigned long long fallbackCitySource;                 //@synthesize fallbackCitySource=_fallbackCitySource - In the implementation block
@property (nonatomic,retain) WeatherLocationManager * locationManager;              //@synthesize locationManager=_locationManager - In the implementation block
@property (assign,nonatomic) BOOL stopUpdateIfNeeded;                               //@synthesize stopUpdateIfNeeded=_stopUpdateIfNeeded - In the implementation block
@property (nonatomic,retain) WeatherPreferences * preferences;                      //@synthesize preferences=_preferences - In the implementation block
@property (nonatomic,copy) id WeatherLocationManagerGenerator;                      //@synthesize WeatherLocationManagerGenerator=_WeatherLocationManagerGenerator - In the implementation block
@property (assign,nonatomic) BOOL locationServicesActive;                           //@synthesize locationServicesActive=_locationServicesActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clearLocationUpdateState;
-(void)setLocationManager:(WeatherLocationManager *)arg1 ;
-(WeatherLocationManager *)locationManager;
-(void)syncLastUpdateTime;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)_kickstartLocationManager;
-(id)init;
-(void)_executeLocationUpdateForLocalWeatherCityWithCompletion:(/*^block*/id)arg1 ;
-(void)setFallbackCitySource:(unsigned long long)arg1 ;
-(BOOL)shouldNotUseUpdatedLocation;
-(void)configureWithLocationServicesActive:(BOOL)arg1 ;
-(WeatherPreferences *)preferences;
-(void)setCitySource:(unsigned long long)arg1 fireNotification:(BOOL)arg2 ;
-(id)forecastModel;
-(void)setPreferences:(WeatherPreferences *)arg1 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(BOOL)updateLocationTrackingStatus;
-(id)WeatherLocationManagerGenerator;
-(BOOL)isLocationTrackingEnabled;
-(void)_teardownLocationManager;
-(unsigned long long)citySource;
-(BOOL)stopUpdateIfNeeded;
-(void)ubiquitousDefaultsDidChange:(id)arg1 ;
-(void)setIsLocationTrackingEnabled:(BOOL)arg1 ;
-(BOOL)_reloadForecastData:(BOOL)arg1 ;
-(void)_executeLocationUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)_executeLocationUpdateForFirstWeatherCityWithCompletion:(/*^block*/id)arg1 ;
-(void)setCitySource:(unsigned long long)arg1 ;
-(WFGeocodeRequest *)geocodeRequest;
-(void)configureWithInitialCitySource:(unsigned long long)arg1 locationServicesActive:(BOOL)arg2 ;
-(void)weatherPreferencesWereSynchronized;
-(void)_persistStateWithModel:(id)arg1 ;
-(void)setStopUpdateIfNeeded:(BOOL)arg1 ;
-(void)setLocationServicesActive:(BOOL)arg1 ;
-(void)setGeocodeRequest:(WFGeocodeRequest *)arg1 ;
-(BOOL)locationServicesActive;
-(unsigned long long)fallbackCitySource;
-(id)initWithPreferences:(id)arg1 effectiveBundleIdentifier:(id)arg2 ;
-(void)setWeatherLocationManagerGenerator:(id)arg1 ;
-(void)checkIfNeedsToUpdate;
-(void)_willDeliverForecastModel:(id)arg1 ;
-(void)dealloc;
@end

