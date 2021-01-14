/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/CLLocationManagerVehicleDelegate.h>
#import <libobjc.A.dylib/MKLocationProvider.h>

@protocol MKLocationProviderDelegate, OS_dispatch_queue;
@class NSBundle, NSString, CLLocation, CLLocationManager, geo_isolater, NSObject;

@interface MKCoreLocationProvider : NSObject <CLLocationManagerVehicleDelegate, MKLocationProvider> {

	CLLocationManager* _clLocationManager;
	id<MKLocationProviderDelegate> _delegate;
	BOOL _locationServicesPreferencesDialogEnabled;
	int _authorizationStatus;
	BOOL _authorizedForPreciseLocation;
	NSBundle* _effectiveBundle;
	NSString* _effectiveBundleIdentifier;
	/*^block*/id _authorizationRequestBlock;
	BOOL _waitingForAuthorization;
	BOOL _hasQueriedAuthorization;
	double _expectedGpsUpdateInterval;
	geo_isolater* _isolation;
	NSObject*<OS_dispatch_queue> _coreLocationQueue;
	double _desiredAccuracy;
	long long _activityType;
	double _distanceFilter;
	BOOL _matchInfoEnabled;
	BOOL _fusionInfoEnabled;
	int _headingOrientation;
	BOOL _hasExternallyProvidedLocationManager;

}

@property (nonatomic,readonly) CLLocationManager * _clLocationManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MKLocationProviderDelegate> delegate;                                                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSBundle * effectiveBundle; 
@property (nonatomic,copy) NSString * effectiveBundleIdentifier; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) BOOL locationServicesPreferencesDialogEnabled; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) BOOL matchInfoEnabled; 
@property (assign,nonatomic) BOOL fusionInfoEnabled; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,copy) id authorizationRequestBlock; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval;                                                                           //@synthesize expectedGpsUpdateInterval=_expectedGpsUpdateInterval - In the implementation block
@property (nonatomic,readonly) int authorizationStatus; 
@property (nonatomic,readonly) BOOL isAuthorizedForPreciseLocation; 
@property (assign,nonatomic) long long activityType; 
@property (nonatomic,readonly) BOOL usesCLMapCorrection; 
@property (nonatomic,readonly) BOOL shouldShiftIfNecessary; 
@property (nonatomic,readonly) BOOL isTracePlayer; 
@property (nonatomic,readonly) double timeScale; 
@property (nonatomic,readonly) CLLocation * lastLocation; 
-(void)stopUpdatingLocation;
-(void)startUpdatingLocation;
-(CLLocation *)lastLocation;
-(void)dismissHeadingCalibrationDisplay;
-(BOOL)fusionInfoEnabled;
-(void)setDistanceFilter:(double)arg1 ;
-(void)startUpdatingHeading;
-(void)requestTemporaryPreciseLocationAuthorizationWithPurposeKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)setFusionInfoEnabled:(BOOL)arg1 ;
-(void)stopUpdatingVehicleSpeed;
-(void)_updateAuthorizedForPreciseLocationOnQueue:(id)arg1 ;
-(BOOL)isTracePlayer;
-(void)setActivityType:(long long)arg1 ;
-(void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(id)authorizationRequestBlock;
-(NSString *)effectiveBundleIdentifier;
-(void)_createCLLocationManager;
-(id)initWithCLLocationManager:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(long long)activityType;
-(int)headingOrientation;
-(id)init;
-(void)setDesiredAccuracy:(double)arg1 ;
-(BOOL)isAuthorizedForPreciseLocation;
-(BOOL)usesCLMapCorrection;
-(void)locationManager:(id)arg1 didUpdateHeading:(id)arg2 ;
-(void)stopUpdatingVehicleHeading;
-(id<MKLocationProviderDelegate>)delegate;
-(void)setEffectiveBundleIdentifier:(NSString *)arg1 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)startUpdatingVehicleSpeed;
-(BOOL)matchInfoEnabled;
-(double)desiredAccuracy;
-(void)startUpdatingVehicleHeading;
-(void)setEffectiveBundle:(NSBundle *)arg1 ;
-(BOOL)isLocationServicesPreferencesDialogEnabled;
-(BOOL)_isAuthorizedForPreciseLocationOnQueue;
-(void)setAuthorizationRequestBlock:(id)arg1 ;
-(void)stopUpdatingHeading;
-(void)requestWhenInUseAuthorization;
-(double)expectedGpsUpdateInterval;
-(double)distanceFilter;
-(int)authorizationStatus;
-(void)setHeadingOrientation:(int)arg1 ;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)setMatchInfoEnabled:(BOOL)arg1 ;
-(double)timeScale;
-(NSBundle *)effectiveBundle;
-(void)isAuthorizedForPreciseLocationOnQueue:(id)arg1 result:(/*^block*/id)arg2 ;
-(CLLocationManager *)_clLocationManager;
-(void)setDelegate:(id<MKLocationProviderDelegate>)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(id)arg2 ;
-(BOOL)shouldShiftIfNecessary;
-(void)authorizationStatusOnQueue:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)_resetForNewEffectiveBundle;
-(void)_updateAuthorizationStatus;
-(BOOL)locationManagerShouldDisplayHeadingCalibration:(id)arg1 ;
-(int)_authorizationStatusOnQueue;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(id)arg2 ;
-(void)dealloc;
@end

