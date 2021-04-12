/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTService.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <libobjc.A.dylib/RTPurgable.h>

@protocol OS_dispatch_source;
@class CLLocation, NSMutableArray, NSObject, RTPowerAssertion, RTInvocationDispatcher, CLLocationManager, CLLocationManagerRoutine, RTAuthorizationManager, RTLocationStore, RTPlatform, RTDefaultsManager, NSString;

@interface RTLocationManager : RTService <CLLocationManagerDelegate, RTPurgable> {

	BOOL _updating;
	BOOL _leechingLocations;
	BOOL _monitoringLocations;
	BOOL _enabled;
	BOOL _supported;
	BOOL _locationStoreAvailable;
	BOOL _persistingLocations;
	CLLocation* _lastLocation;
	NSMutableArray* _currentLocationHandlers;
	NSObject*<OS_dispatch_source> _stopUpdatingLocationTimer;
	RTPowerAssertion* _powerAssertion;
	RTInvocationDispatcher* _dispatcher;
	CLLocationManager* _locationManager;
	CLLocationManagerRoutine* _locationManagerRoutine;
	RTAuthorizationManager* _authorizationManager;
	RTLocationStore* _locationStore;
	RTPlatform* _platform;
	RTDefaultsManager* _defaultsManager;

}

@property (nonatomic,retain) CLLocation * lastLocation;                                            //@synthesize lastLocation=_lastLocation - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentLocationHandlers;                             //@synthesize currentLocationHandlers=_currentLocationHandlers - In the implementation block
@property (assign,nonatomic) BOOL updating;                                                        //@synthesize updating=_updating - In the implementation block
@property (assign,nonatomic) BOOL leechingLocations;                                               //@synthesize leechingLocations=_leechingLocations - In the implementation block
@property (assign,nonatomic) BOOL monitoringLocations;                                             //@synthesize monitoringLocations=_monitoringLocations - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> stopUpdatingLocationTimer;              //@synthesize stopUpdatingLocationTimer=_stopUpdatingLocationTimer - In the implementation block
@property (nonatomic,retain) RTPowerAssertion * powerAssertion;                                    //@synthesize powerAssertion=_powerAssertion - In the implementation block
@property (nonatomic,retain) RTInvocationDispatcher * dispatcher;                                  //@synthesize dispatcher=_dispatcher - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManager;                                  //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) CLLocationManagerRoutine * locationManagerRoutine;                    //@synthesize locationManagerRoutine=_locationManagerRoutine - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                         //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL supported;                                                       //@synthesize supported=_supported - In the implementation block
@property (assign,nonatomic) BOOL locationStoreAvailable;                                          //@synthesize locationStoreAvailable=_locationStoreAvailable - In the implementation block
@property (assign,nonatomic) BOOL persistingLocations;                                             //@synthesize persistingLocations=_persistingLocations - In the implementation block
@property (nonatomic,retain) RTAuthorizationManager * authorizationManager;                        //@synthesize authorizationManager=_authorizationManager - In the implementation block
@property (nonatomic,retain) RTLocationStore * locationStore;                                      //@synthesize locationStore=_locationStore - In the implementation block
@property (nonatomic,retain) RTPlatform * platform;                                                //@synthesize platform=_platform - In the implementation block
@property (nonatomic,retain) RTDefaultsManager * defaultsManager;                                  //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsNotificationName:(id)arg1 ;
-(id)init;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(RTPlatform *)platform;
-(void)setPlatform:(RTPlatform *)arg1 ;
-(void)setLocationManagerRoutine:(CLLocationManagerRoutine *)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(CLLocationManagerRoutine *)locationManagerRoutine;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(BOOL)updating;
-(void)setUpdating:(BOOL)arg1 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)_setup;
-(void)_registerNotifications;
-(void)_unregisterNotifications;
-(void)setLastLocation:(CLLocation *)arg1 ;
-(CLLocation *)lastLocation;
-(BOOL)supported;
-(void)_shutdown;
-(void)setSupported:(BOOL)arg1 ;
-(RTInvocationDispatcher *)dispatcher;
-(void)setDispatcher:(RTInvocationDispatcher *)arg1 ;
-(CLLocationManager *)locationManager;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(RTPowerAssertion *)powerAssertion;
-(void)setPowerAssertion:(RTPowerAssertion *)arg1 ;
-(void)_createLocationManager;
-(RTAuthorizationManager *)authorizationManager;
-(RTLocationStore *)locationStore;
-(RTDefaultsManager *)defaultsManager;
-(void)onUserSessionChangeNotification:(id)arg1 ;
-(void)shouldPersistLocations;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)fetchStoredLocationsWithContext:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setAuthorizationManager:(RTAuthorizationManager *)arg1 ;
-(void)setLocationStore:(RTLocationStore *)arg1 ;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(id)initWithAuthorizationManager:(id)arg1 defaultsManager:(id)arg2 locationStore:(id)arg3 platform:(id)arg4 routineLocationManager:(id)arg5 ;
-(void)performPurgeOfType:(long long)arg1 referenceDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchStoredLocationsWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)submitHarvestSample:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchCachedLocationWithHandler:(/*^block*/id)arg1 ;
-(void)fetchCurrentLocationWithHandler:(/*^block*/id)arg1 ;
-(void)fetchStoredLocationsCountFromDate:(id)arg1 toDate:(id)arg2 uncertainty:(double)arg3 limit:(unsigned long long)arg4 handler:(/*^block*/id)arg5 ;
-(void)injectLocations:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)onStopUpdatingLocationTimerExpiry;
-(void)onAuthorizationNotification:(id)arg1 ;
-(void)onLocationStoreNotification:(id)arg1 ;
-(void)shouldLeechLocations;
-(void)shouldMonitorLocations;
-(NSMutableArray *)currentLocationHandlers;
-(void)setLeechingLocations:(BOOL)arg1 ;
-(void)setMonitoringLocations:(BOOL)arg1 ;
-(void)setPersistingLocations:(BOOL)arg1 ;
-(BOOL)persistingLocations;
-(BOOL)locationStoreAvailable;
-(void)_storeLocations:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchStoredLocationsCountFromDate:(id)arg1 toDate:(id)arg2 uncertainty:(double)arg3 limit:(unsigned long long)arg4 handler:(/*^block*/id)arg5 ;
-(void)_fetchStoredLocationsWithContext:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchStoredLocationsWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_removeLocationsPredating:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setLocationStoreAvailable:(BOOL)arg1 ;
-(void)setCurrentLocationHandlers:(NSMutableArray *)arg1 ;
-(BOOL)leechingLocations;
-(BOOL)monitoringLocations;
-(NSObject*<OS_dispatch_source>)stopUpdatingLocationTimer;
-(void)setStopUpdatingLocationTimer:(NSObject*<OS_dispatch_source>)arg1 ;
@end

