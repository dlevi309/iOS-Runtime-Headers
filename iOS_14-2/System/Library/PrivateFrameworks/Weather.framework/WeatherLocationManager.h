/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <Weather/Weather-Structs.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol CLLocationManagerDelegate;
@class NSString, CLLocationManager, NSTimer, WeatherPreferences, NSDate;

@interface WeatherLocationManager : NSObject <CLLocationManagerDelegate> {

	BOOL _locationTrackingIsReady;
	BOOL _locationUpdatesEnabled;
	BOOL _isInternalBuild;
	int _authorizationStatus;
	float _lastLocationAccuracy;
	NSString* _effectiveBundleIdentifier;
	id<CLLocationManagerDelegate> _delegate;
	CLLocationManager* _locationManager;
	unsigned long long _updateInterval;
	double _oldestAllowedUpdateTime;
	NSTimer* _delayedUpdateTimer;
	NSTimer* _accuracyFallbackTimer;
	WeatherPreferences* _preferences;
	NSDate* _lastLocationTimeStamp;
	double _lastLocationUpdateTime;
	double _nextPlannedUpdate;
	CLLocationCoordinate2D _lastLocationCoord;

}

@property (nonatomic,copy,readonly) NSString * effectiveBundleIdentifier;                //@synthesize effectiveBundleIdentifier=_effectiveBundleIdentifier - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManager;                        //@synthesize locationManager=_locationManager - In the implementation block
@property (assign,nonatomic) int authorizationStatus;                                    //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
@property (assign,nonatomic) BOOL locationUpdatesEnabled;                                //@synthesize locationUpdatesEnabled=_locationUpdatesEnabled - In the implementation block
@property (assign,nonatomic) BOOL locationTrackingIsReady;                               //@synthesize locationTrackingIsReady=_locationTrackingIsReady - In the implementation block
@property (assign,nonatomic) unsigned long long updateInterval;                          //@synthesize updateInterval=_updateInterval - In the implementation block
@property (assign,nonatomic) double oldestAllowedUpdateTime;                             //@synthesize oldestAllowedUpdateTime=_oldestAllowedUpdateTime - In the implementation block
@property (nonatomic,retain) NSTimer * delayedUpdateTimer;                               //@synthesize delayedUpdateTimer=_delayedUpdateTimer - In the implementation block
@property (nonatomic,retain) NSTimer * accuracyFallbackTimer;                            //@synthesize accuracyFallbackTimer=_accuracyFallbackTimer - In the implementation block
@property (nonatomic,retain) WeatherPreferences * preferences;                           //@synthesize preferences=_preferences - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D lastLocationCoord;                   //@synthesize lastLocationCoord=_lastLocationCoord - In the implementation block
@property (nonatomic,copy) NSDate * lastLocationTimeStamp;                               //@synthesize lastLocationTimeStamp=_lastLocationTimeStamp - In the implementation block
@property (assign,nonatomic) float lastLocationAccuracy;                                 //@synthesize lastLocationAccuracy=_lastLocationAccuracy - In the implementation block
@property (assign,nonatomic) double lastLocationUpdateTime;                              //@synthesize lastLocationUpdateTime=_lastLocationUpdateTime - In the implementation block
@property (assign,nonatomic) double nextPlannedUpdate;                                   //@synthesize nextPlannedUpdate=_nextPlannedUpdate - In the implementation block
@property (assign,nonatomic) BOOL isInternalBuild;                                       //@synthesize isInternalBuild=_isInternalBuild - In the implementation block
@property (assign,nonatomic,__weak) id<CLLocationManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double distanceFilter; 
@property (nonatomic,readonly) BOOL limitsPrecision; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearSharedLocationManager;
+(id)sharedWeatherLocationManager;
+(int)locationManagerAuthorizationWithEffectiveBundleId:(id)arg1 ;
-(unsigned long long)updateInterval;
-(void)setAuthorizationStatus:(int)arg1 ;
-(void)setUpdateInterval:(unsigned long long)arg1 ;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(CLLocationManager *)locationManager;
-(int)forceLoadingAuthorizationStatus;
-(NSString *)effectiveBundleIdentifier;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)setOldestAllowedUpdateTime:(double)arg1 ;
-(id)init;
-(void)setLastLocationCoord:(CLLocationCoordinate2D)arg1 ;
-(id<CLLocationManagerDelegate>)delegate;
-(void)setLastLocationTimeStamp:(NSDate *)arg1 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)accuracyFallbackTimerDidFire:(id)arg1 ;
-(void)setIsInternalBuild:(BOOL)arg1 ;
-(id)location;
-(WeatherPreferences *)preferences;
-(void)stopLocationUpdate;
-(double)distanceFilter;
-(CLLocationCoordinate2D)lastLocationCoord;
-(int)authorizationStatus;
-(void)setPreferences:(WeatherPreferences *)arg1 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(NSDate *)lastLocationTimeStamp;
-(void)setLocationTrackingActive:(BOOL)arg1 ;
-(void)forceLocationManagerAuthorization;
-(BOOL)localWeatherAuthorized;
-(double)lastLocationUpdateTime;
-(void)setDelegate:(id<CLLocationManagerDelegate>)arg1 ;
-(void)setLocationUpdatesEnabled:(BOOL)arg1 ;
-(void)forceLocationUpdate;
-(void)askForLocationManagerAuthorization;
-(BOOL)hasCrossedHourBoundary;
-(BOOL)isInternalBuild;
-(void)monitorLocationAuthorization;
-(double)nextPlannedUpdate;
-(NSTimer *)accuracyFallbackTimer;
-(void)delayedUpdateTimerDidFire:(id)arg1 ;
-(id)initWithPreferences:(id)arg1 ;
-(void)scheduleDelayedUpdate:(double)arg1 ;
-(void)clearLocalWeatherUpdateState;
-(NSTimer *)delayedUpdateTimer;
-(BOOL)isCacheOutOfDate;
-(BOOL)locationUpdatesEnabled;
-(void)setDelayedUpdateTimer:(NSTimer *)arg1 ;
-(void)setLocationTrackingReady:(BOOL)arg1 activelyTracking:(BOOL)arg2 watchKitExtension:(BOOL)arg3 shouldRequestAuthorization:(BOOL)arg4 ;
-(void)setLastLocationUpdateTime:(double)arg1 ;
-(void)updateLocationWithNoConditionCheck;
-(BOOL)limitsPrecision;
-(void)setLastLocationAccuracy:(float)arg1 ;
-(void)setLocationTrackingReady:(BOOL)arg1 activelyTracking:(BOOL)arg2 watchKitExtension:(BOOL)arg3 ;
-(void)setLocationTrackingIsReady:(BOOL)arg1 ;
-(double)oldestAllowedUpdateTime;
-(BOOL)isLocationWithInRange:(id)arg1 ;
-(void)cancelDelayedUpdateTimer;
-(void)setNextPlannedUpdate:(double)arg1 ;
-(void)clearLastLocationUpdateTime;
-(void)cancelAccuracyFallbackTimer;
-(id)initWithPreferences:(id)arg1 effectiveBundleIdentifier:(id)arg2 ;
-(void)updateLocation:(id)arg1 ;
-(float)lastLocationAccuracy;
-(BOOL)isLocalStaleOrOutOfDate;
-(BOOL)locationTrackingIsReady;
-(void)dealloc;
-(void)setAccuracyFallbackTimer:(NSTimer *)arg1 ;
@end

