/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTService.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <libobjc.A.dylib/RTPurgable.h>
#import <libobjc.A.dylib/RTStoreManager.h>

@class NSMutableArray, RTTimer, RTPowerAssertion, RTInvocationDispatcher, CLLocationManager, CLLocationManagerRoutine, CLLocation, RTAuthorizationManager, RTLocationStore, RTPlatform, RTDefaultsManager, RTTimerManager, NSMutableDictionary, NSString;

@interface RTLocationManager : RTService <CLLocationManagerDelegate, RTPurgable, RTStoreManager> {

	BOOL _leechingLocations;
	BOOL _monitoringLocations;
	BOOL _updating;
	BOOL _enabled;
	BOOL _supported;
	BOOL _locationStoreAvailable;
	BOOL _persistingLocations;
	NSMutableArray* _currentLocationHandlers;
	RTTimer* _stopUpdatingLocationTimer;
	RTPowerAssertion* _powerAssertion;
	RTInvocationDispatcher* _dispatcher;
	CLLocationManager* _locationManager;
	CLLocationManagerRoutine* _locationManagerRoutine;
	CLLocation* _lastLocation;
	RTAuthorizationManager* _authorizationManager;
	RTLocationStore* _locationStore;
	RTPlatform* _platform;
	RTDefaultsManager* _defaultsManager;
	RTTimerManager* _timerManager;
	NSMutableDictionary* _regionEventHandlerDictionary;
	RTInvocationDispatcher* _regionEventDispatcher;

}

@property (nonatomic,retain) NSMutableArray * currentLocationHandlers;                        //@synthesize currentLocationHandlers=_currentLocationHandlers - In the implementation block
@property (assign,nonatomic) BOOL leechingLocations;                                          //@synthesize leechingLocations=_leechingLocations - In the implementation block
@property (assign,nonatomic) BOOL monitoringLocations;                                        //@synthesize monitoringLocations=_monitoringLocations - In the implementation block
@property (nonatomic,retain) RTTimer * stopUpdatingLocationTimer;                             //@synthesize stopUpdatingLocationTimer=_stopUpdatingLocationTimer - In the implementation block
@property (nonatomic,retain) RTPowerAssertion * powerAssertion;                               //@synthesize powerAssertion=_powerAssertion - In the implementation block
@property (nonatomic,retain) RTInvocationDispatcher * dispatcher;                             //@synthesize dispatcher=_dispatcher - In the implementation block
@property (assign,nonatomic) BOOL updating;                                                   //@synthesize updating=_updating - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManager;                             //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) CLLocationManagerRoutine * locationManagerRoutine;               //@synthesize locationManagerRoutine=_locationManagerRoutine - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                    //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL supported;                                                  //@synthesize supported=_supported - In the implementation block
@property (assign,nonatomic) BOOL locationStoreAvailable;                                     //@synthesize locationStoreAvailable=_locationStoreAvailable - In the implementation block
@property (assign,nonatomic) BOOL persistingLocations;                                        //@synthesize persistingLocations=_persistingLocations - In the implementation block
@property (nonatomic,retain) CLLocation * lastLocation;                                       //@synthesize lastLocation=_lastLocation - In the implementation block
@property (nonatomic,retain) RTAuthorizationManager * authorizationManager;                   //@synthesize authorizationManager=_authorizationManager - In the implementation block
@property (nonatomic,retain) RTLocationStore * locationStore;                                 //@synthesize locationStore=_locationStore - In the implementation block
@property (nonatomic,retain) RTPlatform * platform;                                           //@synthesize platform=_platform - In the implementation block
@property (nonatomic,retain) RTDefaultsManager * defaultsManager;                             //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,retain) RTTimerManager * timerManager;                                   //@synthesize timerManager=_timerManager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * regionEventHandlerDictionary;              //@synthesize regionEventHandlerDictionary=_regionEventHandlerDictionary - In the implementation block
@property (nonatomic,retain) RTInvocationDispatcher * regionEventDispatcher;                  //@synthesize regionEventDispatcher=_regionEventDispatcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)regionWithModifiedIdentifier:(id)arg1 forRegion:(id)arg2 ;
+(id)errorUnregisteredClientIdentifier:(id)arg1 ;
+(id)stringForRegionCallbackType:(long long)arg1 ;
+(id)errorUsedDelimiter;
+(id)clientRegionForRegion:(id)arg1 clientIdentifierPrefix:(id)arg2 ;
+(BOOL)supportsNotificationName:(id)arg1 ;
+(id)vendedClasses;
+(id)errorDuplicateClientIdentifier:(id)arg1 ;
+(id)regionIdentifierDelimiterString;
+(BOOL)isValidIdentifier:(id)arg1 ;
-(void)stopUpdatingLocation;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(BOOL)supported;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)performPurgeOfType:(long long)arg1 referenceDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startUpdatingLocation;
-(void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3 ;
-(CLLocation *)lastLocation;
-(BOOL)enabled;
-(void)locationManager:(id)arg1 didExitRegion:(id)arg2 ;
-(void)setStopUpdatingLocationTimer:(RTTimer *)arg1 ;
-(void)onLocationStoreNotification:(id)arg1 ;
-(void)shouldMonitorLocations;
-(void)setAuthorizationManager:(RTAuthorizationManager *)arg1 ;
-(RTPlatform *)platform;
-(void)_shutdown;
-(void)setLocationStore:(RTLocationStore *)arg1 ;
-(BOOL)_isClientIdentifierAvailable:(id)arg1 ;
-(RTPowerAssertion *)powerAssertion;
-(RTAuthorizationManager *)authorizationManager;
-(void)_setup;
-(void)injectLocations:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(CLLocationManager *)locationManager;
-(RTLocationStore *)locationStore;
-(RTInvocationDispatcher *)dispatcher;
-(void)setDispatcher:(RTInvocationDispatcher *)arg1 ;
-(CLLocationManagerRoutine *)locationManagerRoutine;
-(void)_registerNotifications;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(BOOL)updating;
-(void)_fetchStoredLocationsWithContext:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)init;
-(void)setPlatform:(RTPlatform *)arg1 ;
-(BOOL)persistingLocations;
-(void)setUpdating:(BOOL)arg1 ;
-(void)onStopUpdatingLocationTimerExpiry;
-(NSMutableArray *)currentLocationHandlers;
-(void)onUserSessionChangeNotification:(id)arg1 ;
-(BOOL)stopMonitoringForRegion:(id)arg1 clientIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)stopMonitoringAllRegionsForClientIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)unregisterForRegionEventsWithClientIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setMonitoringLocations:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setLeechingLocations:(BOOL)arg1 ;
-(RTInvocationDispatcher *)regionEventDispatcher;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)setCurrentLocationHandlers:(NSMutableArray *)arg1 ;
-(void)performCallbackForRegion:(id)arg1 regionEvent:(long long)arg2 callbackError:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)setPowerAssertion:(RTPowerAssertion *)arg1 ;
-(void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3 ;
-(void)_storeLocations:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setLocationStoreAvailable:(BOOL)arg1 ;
-(id)_prefixForClientIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)fetchStoredLocationsWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_clientIdentifierForRegion:(id)arg1 ;
-(void)fetchStoredLocationsWithContext:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_unregisterNotifications;
-(void)fetchCurrentLocationWithHandler:(/*^block*/id)arg1 ;
-(RTDefaultsManager *)defaultsManager;
-(RTTimerManager *)timerManager;
-(BOOL)_stopMonitoringAllRegionsForClientIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)setRegionEventDispatcher:(RTInvocationDispatcher *)arg1 ;
-(void)_fetchStoredLocationsCountFromDate:(id)arg1 toDate:(id)arg2 uncertainty:(double)arg3 limit:(unsigned long long)arg4 handler:(/*^block*/id)arg5 ;
-(void)registerForRegionEventsWithClientIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)_performCallbackForRegion:(id)arg1 regionEvent:(long long)arg2 callbackError:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)setLocationManagerRoutine:(CLLocationManagerRoutine *)arg1 ;
-(id)_regionForClientRegion:(id)arg1 clientIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)leechingLocations;
-(void)_registerForRegionEventsWithClientIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchStoredLocationsCountFromDate:(id)arg1 toDate:(id)arg2 uncertainty:(double)arg3 limit:(unsigned long long)arg4 handler:(/*^block*/id)arg5 ;
-(void)setTimerManager:(RTTimerManager *)arg1 ;
-(BOOL)_performCallbackForClientRegion:(id)arg1 clientIdentifier:(id)arg2 regionEvent:(long long)arg3 callbackError:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)setRegionEventHandlerDictionary:(NSMutableDictionary *)arg1 ;
-(void)fetchEnumerableObjectsWithOptions:(id)arg1 offset:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)setSupported:(BOOL)arg1 ;
-(void)_createLocationManager;
-(void)locationManager:(id)arg1 didEnterRegion:(id)arg2 ;
-(NSMutableDictionary *)regionEventHandlerDictionary;
-(void)_fetchStoredLocationsWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_removeLocationsPredating:(id)arg1 handler:(/*^block*/id)arg2 ;
-(RTTimer *)stopUpdatingLocationTimer;
-(void)shouldPersistLocations;
-(void)_unregisterForRegionEventsWithClientIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)monitoringLocations;
-(void)setLastLocation:(CLLocation *)arg1 ;
-(void)submitHarvestSample:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchCachedLocationWithHandler:(/*^block*/id)arg1 ;
-(BOOL)locationStoreAvailable;
-(BOOL)startMonitoringForRegion:(id)arg1 clientIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)setPersistingLocations:(BOOL)arg1 ;
-(void)shouldLeechLocations;
-(void)onAuthorizationNotification:(id)arg1 ;
-(void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2 ;
-(id)initWithAuthorizationManager:(id)arg1 defaultsManager:(id)arg2 locationStore:(id)arg3 platform:(id)arg4 routineLocationManager:(id)arg5 timerManager:(id)arg6 ;
-(id)_fullIdentifierForClientIdentifier:(id)arg1 regionIdentifier:(id)arg2 error:(id*)arg3 ;
@end

