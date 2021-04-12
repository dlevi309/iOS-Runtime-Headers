/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <libobjc.A.dylib/MNLocationProviderDelegate.h>

@protocol MNLocationProvider, MNLocationRecorder;
@class NSBundle, NSString, NSHashTable, NSLock, MNLocation, GEOLocationShifter, CLInUseAssertion, CLHeading, NSDate, NSError;

@interface MNLocationManager : NSObject <GEOResourceManifestTileGroupObserver, MNLocationProviderDelegate> {

	unsigned long long _locationProviderType;
	id<MNLocationProvider> _locationProvider;
	id<MNLocationRecorder> _locationRecorder;
	NSBundle* _effectiveBundle;
	NSString* _effectiveBundleIdentifier;
	NSHashTable* _accessRequesters;
	NSHashTable* _locationObservers;
	NSHashTable* _locationListeners;
	NSHashTable* _headingObservers;
	NSLock* _observersLock;
	NSLock* _lastLocationLock;
	MNLocation* _lastLocation;
	GEOLocationShifter* _locationShifter;
	double _lastLocationUpdateTime;
	double _lastLocationReportTime;
	double _locationUpdateStartTime;
	double _expectedGpsUpdateInterval;
	CLInUseAssertion* _locationAssertion;
	CLHeading* _heading;
	NSDate* _lastUpdatedHeadingDate;
	BOOL _hasCustomDesiredAccuracy;
	BOOL _trackingLocation;
	BOOL _logStartStopLocationUpdates;
	BOOL _isLastLocationStale;
	BOOL _lastLocationPushed;
	BOOL _useCourseForHeading;
	BOOL _trackingHeading;
	/*^block*/id _locationCorrector;
	NSError* _locationError;

}

@property (nonatomic,copy) id locationCorrector;                                     //@synthesize locationCorrector=_locationCorrector - In the implementation block
@property (nonatomic,copy) NSString * effectiveBundleIdentifier; 
@property (nonatomic,retain) NSBundle * effectiveBundle; 
@property (nonatomic,readonly) BOOL isHeadingServicesAvailable; 
@property (nonatomic,readonly) CLHeading * heading;                                  //@synthesize heading=_heading - In the implementation block
@property (nonatomic,readonly) MNLocation * lastLocation; 
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,readonly) BOOL isLastLocationStale;                             //@synthesize isLastLocationStale=_isLastLocationStale - In the implementation block
@property (nonatomic,readonly) NSError * locationError;                              //@synthesize locationError=_locationError - In the implementation block
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (nonatomic,readonly) double timeScale; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) long long activityType; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,retain) id<MNLocationRecorder> locationRecorder;                //@synthesize locationRecorder=_locationRecorder - In the implementation block
@property (nonatomic,readonly) unsigned long long locationProviderType;              //@synthesize locationProviderType=_locationProviderType - In the implementation block
@property (nonatomic,retain) id<MNLocationProvider> locationProvider;                //@synthesize locationProvider=_locationProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedLocationManager;
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)_reset;
-(long long)activityType;
-(double)distanceFilter;
-(void)setDistanceFilter:(double)arg1 ;
-(double)desiredAccuracy;
-(void)setDesiredAccuracy:(double)arg1 ;
-(void)setActivityType:(long long)arg1 ;
-(double)expectedGpsUpdateInterval;
-(void)setHeadingOrientation:(int)arg1 ;
-(int)headingOrientation;
-(CLHeading *)heading;
-(NSBundle *)effectiveBundle;
-(BOOL)hasLocation;
-(void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3 ;
-(void)setLastLocation:(MNLocation *)arg1 ;
-(MNLocation *)lastLocation;
-(void)stopHeadingUpdateWithObserver:(id)arg1 ;
-(void)stopLocationUpdateWithObserver:(id)arg1 ;
-(BOOL)isHeadingServicesAvailable;
-(BOOL)isLocationServicesPossiblyAvailable:(id*)arg1 ;
-(void)startLocationUpdateWithObserver:(id)arg1 ;
-(void)startHeadingUpdateWithObserver:(id)arg1 ;
-(void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2 ;
-(void)locationProvider:(id)arg1 didUpdateHeading:(id)arg2 ;
-(void)locationProvider:(id)arg1 didReceiveError:(id)arg2 ;
-(void)locationProviderDidChangeAuthorizationStatus:(id)arg1 ;
-(BOOL)locationProviderShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationProviderDidPauseLocationUpdates:(id)arg1 ;
-(void)locationProviderDidResumeLocationUpdates:(id)arg1 ;
-(void)locationProvider:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationProvider:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(void)setEffectiveBundle:(NSBundle *)arg1 ;
-(NSString *)effectiveBundleIdentifier;
-(void)setEffectiveBundleIdentifier:(NSString *)arg1 ;
-(double)timeScale;
-(void)setLocationProvider:(id<MNLocationProvider>)arg1 ;
-(void)setLocationRecorder:(id<MNLocationRecorder>)arg1 ;
-(id<MNLocationProvider>)locationProvider;
-(BOOL)isLocationServicesApproved;
-(BOOL)isLocationServicesDenied;
-(BOOL)isLocationServicesRestricted;
-(BOOL)isLastLocationStale;
-(void)_setTrackingLocation:(BOOL)arg1 ;
-(void)_reportLocationStatus:(SEL)arg1 ;
-(void)_reportLocationReset;
-(BOOL)isLocationServicesPossiblyAvailable;
-(BOOL)isLocationServicesAvailable;
-(id<MNLocationRecorder>)locationRecorder;
-(void)_reportLocationSuccess;
-(void)_reportLocationFailureWithError:(id)arg1 ;
-(void)_startLocationUpdateWithObserver:(id)arg1 desiredAccuracy:(double)arg2 ;
-(void)_setTrackingHeading:(BOOL)arg1 ;
-(void)setLocationCorrector:(id)arg1 ;
-(BOOL)isLocationServicesAuthorizationNeeded;
-(void)pushLocation:(id)arg1 ;
-(NSError *)locationError;
-(id)locationCorrector;
-(void)addLocationListener:(id)arg1 ;
-(void)removeLocationListener:(id)arg1 ;
-(void)setLocationProviderType:(unsigned long long)arg1 ;
-(void)_createLocationAssertion;
-(void)_clearLocationAssertion;
-(void)_updateForNewLocation:(id)arg1 rawLocation:(id)arg2 ;
-(void)useGPSLocationProvider;
-(void)useLeechedLocationProvider;
-(void)useHybridLocationProvider;
-(void)useTraceLocationProvider:(id)arg1 ;
-(void)_setLastLocationReceivedFromMaps:(id)arg1 ;
-(BOOL)_hasLocationAssertion;
-(void)requestLocationAccessFor:(id)arg1 ;
-(void)removeLocationAccessFor:(id)arg1 ;
-(void)removeLocationAccessForAll;
-(unsigned long long)locationProviderType;
@end

