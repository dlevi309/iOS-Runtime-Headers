/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	WeatherPreferences* _preferences;
	/*^block*/id _WeatherLocationManagerGenerator;

}

@property (nonatomic,retain) WFGeocodeRequest * geocodeRequest;                     //@synthesize geocodeRequest=_geocodeRequest - In the implementation block
@property (assign,nonatomic) BOOL isLocationTrackingEnabled;                        //@synthesize isLocationTrackingEnabled=_isLocationTrackingEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long citySource;                         //@synthesize citySource=_citySource - In the implementation block
@property (nonatomic,retain) WeatherLocationManager * locationManager;              //@synthesize locationManager=_locationManager - In the implementation block
@property (assign,nonatomic) BOOL stopUpdateIfNeeded;                               //@synthesize stopUpdateIfNeeded=_stopUpdateIfNeeded - In the implementation block
@property (nonatomic,retain) WeatherPreferences * preferences;                      //@synthesize preferences=_preferences - In the implementation block
@property (nonatomic,copy) id WeatherLocationManagerGenerator;                      //@synthesize WeatherLocationManagerGenerator=_WeatherLocationManagerGenerator - In the implementation block
@property (assign,nonatomic) BOOL locationServicesActive;                           //@synthesize locationServicesActive=_locationServicesActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)setPreferences:(WeatherPreferences *)arg1 ;
-(WeatherPreferences *)preferences;
-(WeatherLocationManager *)locationManager;
-(void)setLocationManager:(WeatherLocationManager *)arg1 ;
-(id)initWithPreferences:(id)arg1 effectiveBundleIdentifier:(id)arg2 ;
-(void)setLocationServicesActive:(BOOL)arg1 ;
-(id)forecastModel;
-(void)_executeLocationUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)_willDeliverForecastModel:(id)arg1 ;
-(void)_persistStateWithModel:(id)arg1 ;
-(void)checkIfNeedsToUpdate;
-(void)clearLocationUpdateState;
-(void)weatherPreferencesWereSynchronized;
-(void)setWeatherLocationManagerGenerator:(id)arg1 ;
-(void)setStopUpdateIfNeeded:(BOOL)arg1 ;
-(void)setCitySource:(unsigned long long)arg1 fireNotification:(BOOL)arg2 ;
-(void)_teardownLocationManager;
-(BOOL)_reloadForecastData:(BOOL)arg1 ;
-(void)_kickstartLocationManager;
-(void)setIsLocationTrackingEnabled:(BOOL)arg1 ;
-(void)setCitySource:(unsigned long long)arg1 ;
-(id)WeatherLocationManagerGenerator;
-(BOOL)updateLocationTrackingStatus;
-(BOOL)isLocationTrackingEnabled;
-(unsigned long long)citySource;
-(void)_executeLocationUpdateForLocalWeatherCityWithCompletion:(/*^block*/id)arg1 ;
-(void)_executeLocationUpdateForFirstWeatherCityWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldNotUseUpdatedLocation;
-(BOOL)stopUpdateIfNeeded;
-(WFGeocodeRequest *)geocodeRequest;
-(void)setGeocodeRequest:(WFGeocodeRequest *)arg1 ;
-(void)ubiquitousDefaultsDidChange:(id)arg1 ;
-(void)syncLastUpdateTime;
-(BOOL)locationServicesActive;
@end

