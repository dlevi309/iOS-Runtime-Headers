/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <libobjc.A.dylib/MKLocationProviderDelegate.h>

@protocol MKLocationProvider, MNLocationRecorder;
@class NSHashTable, CLLocation, NSMutableArray, NSTimer, GEOLocationShifter, CLHeading, NSLock, geo_isolater, NSError, GEOLocation, NSBundle, NSString;

@interface MKLocationManager : NSObject <GEOResourceManifestTileGroupObserver, MKLocationProviderDelegate> {

	id<MKLocationProvider> _locationProvider;
	NSHashTable* _locationObservers;
	NSHashTable* _locationListeners;
	NSHashTable* _headingObservers;
	CLLocation* _lastLocation;
	CLLocation* _lastGoodLocation;
	double _lastLocationUpdateTime;
	BOOL _isLastLocationStale;
	BOOL _lastLocationPushed;
	BOOL _trackingLocation;
	BOOL _trackingHeading;
	id<MNLocationRecorder> _locationRecorder;
	double _applicationResumeTime;
	double _applicationSuspendTime;
	double _headingUpdateTime;
	double _locationAccuracyUpdateTime;
	double _locationUpdateStartTime;
	BOOL _isReceivingAccurateLocations;
	NSMutableArray* _waitForAccurateLocationsHandlers;
	NSTimer* _waitForAccurateLocationsTimer;
	double _lastLocationReportTime;
	GEOLocationShifter* _locationShifter;
	CLHeading* _throttledHeading;
	CLHeading* _heading;
	NSTimer* _headingThrottlingTimer;
	/*^block*/id _networkActivity;
	BOOL _enabled;
	BOOL _useCourseForHeading;
	double _lastVehicleHeading;
	double _lastVehicleSpeed;
	double _lastVehicleHeadingUpdateTime;
	double _lastVehicleSpeedUpdateTime;
	int _consecutiveOutOfCourseCount;
	double _navCourse;
	/*^block*/id _locationCorrector;
	double _minimumLocationUpdateInterval;
	BOOL _continuedAfterBecomingInactive;
	BOOL _suspended;
	NSMutableArray* _recentLocationUpdateIntervals;
	NSLock* _lastLocationLock;
	NSLock* _observersLock;
	int _preciseLocationAuthorizationState;
	BOOL _temporaryPreciseLocationAuthorizationPromptShown;
	geo_isolater* _authorizedForPreciseLocationIsolater;
	BOOL _hasCustomDesiredAccuracy;
	BOOL _continuesWhileInactive;
	BOOL _logStartStopLocationUpdates;
	NSError* _locationError;

}

@property (nonatomic,readonly) int lastLocationSource; 
@property (nonatomic,retain) id<MKLocationProvider> locationProvider; 
@property (nonatomic,copy) id locationCorrector;                                                                                           //@synthesize locationCorrector=_locationCorrector - In the implementation block
@property (assign,nonatomic) BOOL logStartStopLocationUpdates;                                                                             //@synthesize logStartStopLocationUpdates=_logStartStopLocationUpdates - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                                                //@synthesize enabled=_enabled - In the implementation block
@property (getter=isLocationServicesAuthorizationNeeded,nonatomic,readonly) BOOL locationServicesAuthorizationNeeded; 
@property (nonatomic,readonly) BOOL isLocationServicesAvailable; 
@property (nonatomic,readonly) BOOL isLocationServicesPossiblyAvailable; 
@property (nonatomic,readonly) BOOL isLocationServicesEnabled; 
@property (nonatomic,readonly) BOOL isLocationServicesApproved; 
@property (nonatomic,readonly) BOOL isLocationServicesDenied; 
@property (nonatomic,readonly) BOOL isLocationServicesRestricted; 
@property (nonatomic,readonly) BOOL isHeadingServicesAvailable; 
@property (nonatomic,readonly) BOOL isAuthorizedForPreciseLocation; 
@property (nonatomic,readonly) BOOL isTemporaryPreciseLocationAuthorizationPromptShown; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) BOOL locationServicesPreferencesDialogEnabled; 
@property (nonatomic,readonly) double headingUpdateTimeInterval; 
@property (nonatomic,readonly) GEOLocation * currentLocation; 
@property (nonatomic,readonly) GEOLocation * gridSnappedCurrentLocation; 
@property (nonatomic,readonly) GEOLocation * courseCorrectedLocation; 
@property (assign,nonatomic) long long headingOrientation; 
@property (nonatomic,copy) id authorizationRequestBlock; 
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,readonly) CLLocation * lastLocation; 
@property (nonatomic,readonly) CLLocation * lastGoodLocation;                                                                              //@synthesize lastGoodLocation=_lastGoodLocation - In the implementation block
@property (nonatomic,readonly) BOOL isLastLocationStale;                                                                                   //@synthesize isLastLocationStale=_isLastLocationStale - In the implementation block
@property (nonatomic,readonly) NSError * locationError;                                                                                    //@synthesize locationError=_locationError - In the implementation block
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) BOOL matchInfoEnabled; 
@property (assign,nonatomic) BOOL fusionInfoEnabled; 
@property (nonatomic,readonly) CLLocation * lastProviderLocation; 
@property (assign,nonatomic) long long activityType; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (nonatomic,readonly) double timeScale; 
@property (nonatomic,retain) NSBundle * effectiveBundle; 
@property (nonatomic,copy) NSString * effectiveBundleIdentifier; 
@property (assign,nonatomic) BOOL useCourseForHeading;                                                                                     //@synthesize useCourseForHeading=_useCourseForHeading - In the implementation block
@property (nonatomic,readonly) CLHeading * heading;                                                                                        //@synthesize heading=_heading - In the implementation block
@property (nonatomic,retain) CLHeading * throttledHeading;                                                                                 //@synthesize throttledHeading=_throttledHeading - In the implementation block
@property (nonatomic,readonly) double currentVehicleHeading; 
@property (nonatomic,readonly) double currentVehicleSpeed; 
@property (nonatomic,readonly) double vehicleHeadingOrCourse; 
@property (nonatomic,copy) id networkActivity;                                                                                             //@synthesize networkActivity=_networkActivity - In the implementation block
@property (nonatomic,retain) id<MNLocationRecorder> locationRecorder;                                                                      //@synthesize locationRecorder=_locationRecorder - In the implementation block
@property (nonatomic,readonly) double navigationCourse;                                                                                    //@synthesize navCourse=_navCourse - In the implementation block
@property (assign,nonatomic) double minimumLocationUpdateInterval;                                                                         //@synthesize minimumLocationUpdateInterval=_minimumLocationUpdateInterval - In the implementation block
@property (assign,nonatomic) BOOL continuesWhileInactive;                                                                                  //@synthesize continuesWhileInactive=_continuesWhileInactive - In the implementation block
@property (getter=wasLastLocationPushed,nonatomic,readonly) BOOL lastLocationPushed;                                                       //@synthesize lastLocationPushed=_lastLocationPushed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setCanMonitorWiFiStatus:(BOOL)arg1 ;
+(id)timeoutError;
+(id)sharedLocationManager;
-(void)pushLocation:(id)arg1 ;
-(BOOL)isLocationServicesPossiblyAvailable:(id*)arg1 ;
-(void)_reportLocationReset;
-(BOOL)isLastLocationStale;
-(GEOLocation *)currentLocation;
-(void)setLocationCorrector:(id)arg1 ;
-(void)_setTrackingLocation:(BOOL)arg1 ;
-(void)stopLocationUpdateWithObserver:(id)arg1 ;
-(BOOL)isLocationServicesRestricted;
-(void)startLocationUpdateWithObserver:(id)arg1 ;
-(void)_reportLocationFailureWithError:(id)arg1 ;
-(BOOL)isHeadingServicesAvailable;
-(id)locationCorrector;
-(id<MNLocationRecorder>)locationRecorder;
-(void)stopHeadingUpdateWithObserver:(id)arg1 ;
-(CLLocation *)lastLocation;
-(CLHeading *)heading;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)dismissHeadingCalibrationDisplay;
-(BOOL)fusionInfoEnabled;
-(void)setDistanceFilter:(double)arg1 ;
-(void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2 ;
-(void)_reportHeadingFailureWithError:(id)arg1 ;
-(void)requestTemporaryPreciseLocationAuthorizationWithPurposeKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setFusionInfoEnabled:(BOOL)arg1 ;
-(void)resetAfterResumeIfNecessary;
-(void)setActivityType:(long long)arg1 ;
-(void)locationProvider:(id)arg1 didReceiveError:(id)arg2 ;
-(void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1 ;
-(void)_setTrackingHeading:(BOOL)arg1 ;
-(id)authorizationRequestBlock;
-(NSString *)effectiveBundleIdentifier;
-(void)_locationProvider:(id)arg1 didUpdateLocation:(id)arg2 lastKnownNavCourse:(double)arg3 ;
-(void)startVehicleSpeedUpdate;
-(void)locationProviderDidResumeLocationUpdates:(id)arg1 ;
-(void)startHeadingUpdateWithObserver:(id)arg1 ;
-(void)setLogStartStopLocationUpdates:(BOOL)arg1 ;
-(BOOL)locationProviderShouldPauseLocationUpdates:(id)arg1 ;
-(id)initWithCLLocationManager:(id)arg1 ;
-(void)setMinimumLocationUpdateInterval:(double)arg1 ;
-(long long)activityType;
-(long long)headingOrientation;
-(id)init;
-(void)setDesiredAccuracy:(double)arg1 ;
-(BOOL)isAuthorizedForPreciseLocation;
-(void)setNetworkActivity:(id)arg1 ;
-(void)setEffectiveBundleIdentifier:(NSString *)arg1 ;
-(void)locationProviderDidChangeAuthorizationStatus:(id)arg1 ;
-(void)locationProvider:(id)arg1 didUpdateHeading:(id)arg2 ;
-(BOOL)matchInfoEnabled;
-(double)desiredAccuracy;
-(void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2 lastKnownNavCourse:(double)arg3 ;
-(void)setEffectiveBundle:(NSBundle *)arg1 ;
-(BOOL)isLocationServicesPreferencesDialogEnabled;
-(void)setAuthorizationRequestBlock:(id)arg1 ;
-(void)locationProvider:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)requestWhenInUseAuthorization;
-(double)expectedGpsUpdateInterval;
-(void)setEnabled:(BOOL)arg1 ;
-(void)locationProviderDidPauseLocationUpdates:(id)arg1 ;
-(void)locationProvider:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(BOOL)isLocationServicesDenied;
-(double)distanceFilter;
-(void)setHeadingOrientation:(long long)arg1 ;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(void)setMatchInfoEnabled:(BOOL)arg1 ;
-(double)timeScale;
-(void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3 ;
-(NSBundle *)effectiveBundle;
-(NSError *)locationError;
-(void)setContinuesWhileInactive:(BOOL)arg1 ;
-(BOOL)isLocationServicesAuthorizationNeeded;
-(void)setLocationRecorder:(id<MNLocationRecorder>)arg1 ;
-(CLHeading *)throttledHeading;
-(void)_suspend;
-(id)singleLocationUpdateWithDesiredAccuracy:(double)arg1 handler:(/*^block*/id)arg2 timeout:(double)arg3 maxLocationAge:(double)arg4 ;
-(BOOL)isLocationServicesApproved;
-(BOOL)_shouldAllowLocationUpdateInterval:(double)arg1 ;
-(void)_useDefaultCoreLocationProvider;
-(id)singleLocationUpdateWithDesiredAccuracy:(double)arg1 handler:(/*^block*/id)arg2 timeout:(double)arg3 ;
-(BOOL)_isTimeToResetOnResume;
-(BOOL)isLocationServicesPossiblyAvailable;
-(void)_syncLocationProviderWithTracking;
-(void)setLocationProvider:(id<MKLocationProvider>)arg1 ;
-(BOOL)hasLocation;
-(id)singleLocationUpdateWithDesiredAccuracy:(double)arg1 handler:(/*^block*/id)arg2 ;
-(void)startVehicleHeadingUpdate;
-(void)dampenGPSLocationAccuracy:(id*)arg1 oldLocationSource:(int)arg2 ;
-(void)stopVehicleHeadingUpdate;
-(CLLocation *)lastProviderLocation;
-(void)_startLocationUpdateWithObserver:(id)arg1 desiredAccuracy:(double)arg2 ;
-(double)headingUpdateTimeInterval;
-(void)setThrottledHeading:(CLHeading *)arg1 ;
-(GEOLocation *)gridSnappedCurrentLocation;
-(BOOL)wasLastLocationPushed;
-(BOOL)continuesWhileInactive;
-(void)_waitForAccurateLocationsTimerFired:(id)arg1 ;
-(id)networkActivity;
-(void)reset;
-(BOOL)useCourseForHeading;
-(double)currentVehicleSpeed;
-(double)minimumLocationUpdateInterval;
-(void)_setIsReceivingAccurateLocations:(BOOL)arg1 ;
-(void)waitForAccurateLocationWithTimeout:(double)arg1 handler:(/*^block*/id)arg2 ;
-(void)_reportHeadingSuccess;
-(GEOLocation *)courseCorrectedLocation;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(BOOL)isLocationServicesEnabled;
-(BOOL)isLocationServicesAvailable;
-(int)lastLocationSource;
-(BOOL)isEnabled;
-(void)_reportLocationStatus:(SEL)arg1 ;
-(id)singleLocationUpdateWithHandler:(/*^block*/id)arg1 ;
-(id<MKLocationProvider>)locationProvider;
-(void)listenForLocationUpdates:(id)arg1 ;
-(double)vehicleHeadingOrCourse;
-(BOOL)logStartStopLocationUpdates;
-(id)observersDescription;
-(CLLocation *)lastGoodLocation;
-(void)setLastLocation:(CLLocation *)arg1 ;
-(void)_reportLocationSuccess;
-(void)setHeading:(CLHeading *)arg1 ;
-(double)navigationCourse;
-(BOOL)isTemporaryPreciseLocationAuthorizationPromptShown;
-(void)stopVehicleSpeedUpdate;
-(void)stopListeningForLocationUpdates:(id)arg1 ;
-(double)currentVehicleHeading;
-(void)dealloc;
-(void)setUseCourseForHeading:(BOOL)arg1 ;
@end

