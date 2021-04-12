/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <libobjc.A.dylib/CLLocationManagerVehicleDelegate.h>
#import <libobjc.A.dylib/MKLocationProvider.h>

@protocol MKLocationProviderDelegate, OS_dispatch_queue;
@class NSBundle, NSString, CLLocation, CLLocationManager, geo_isolater, NSObject;

@interface MKCoreLocationProvider : NSObject <CLLocationManagerDelegate, CLLocationManagerVehicleDelegate, MKLocationProvider> {

	CLLocationManager* _clLocationManager;
	id<MKLocationProviderDelegate> _delegate;
	BOOL _locationServicesPreferencesDialogEnabled;
	int _authorizationStatus;
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
	int _headingOrientation;

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
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,copy) id authorizationRequestBlock; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval;                                                                           //@synthesize expectedGpsUpdateInterval=_expectedGpsUpdateInterval - In the implementation block
@property (nonatomic,readonly) int authorizationStatus; 
@property (assign,nonatomic) long long activityType; 
@property (nonatomic,readonly) BOOL usesCLMapCorrection; 
@property (nonatomic,readonly) BOOL shouldShiftIfNecessary; 
@property (nonatomic,readonly) BOOL isTracePlayer; 
@property (nonatomic,readonly) double timeScale; 
@property (nonatomic,readonly) CLLocation * lastLocation; 
-(id)init;
-(void)dealloc;
-(id<MKLocationProviderDelegate>)delegate;
-(void)setDelegate:(id<MKLocationProviderDelegate>)arg1 ;
-(long long)activityType;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(double)distanceFilter;
-(void)setDistanceFilter:(double)arg1 ;
-(double)desiredAccuracy;
-(void)setDesiredAccuracy:(double)arg1 ;
-(void)setActivityType:(long long)arg1 ;
-(BOOL)matchInfoEnabled;
-(void)setMatchInfoEnabled:(BOOL)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)startUpdatingHeading;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateHeading:(id)arg2 ;
-(BOOL)locationManagerShouldDisplayHeadingCalibration:(id)arg1 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(id)arg2 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(id)arg2 ;
-(void)requestWhenInUseAuthorization;
-(int)authorizationStatus;
-(double)expectedGpsUpdateInterval;
-(void)setHeadingOrientation:(int)arg1 ;
-(int)headingOrientation;
-(void)stopUpdatingHeading;
-(void)dismissHeadingCalibrationDisplay;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(BOOL)isLocationServicesPreferencesDialogEnabled;
-(void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1 ;
-(void)startUpdatingVehicleSpeed;
-(void)stopUpdatingVehicleSpeed;
-(void)startUpdatingVehicleHeading;
-(void)stopUpdatingVehicleHeading;
-(NSBundle *)effectiveBundle;
-(CLLocation *)lastLocation;
-(void)_createCLLocationManager;
-(int)_authorizationStatusOnQueue;
-(CLLocationManager *)_clLocationManager;
-(void)_updateAuthorizationStatus;
-(void)_resetForNewEffectiveBundle;
-(void)authorizationStatusOnQueue:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)setEffectiveBundle:(NSBundle *)arg1 ;
-(NSString *)effectiveBundleIdentifier;
-(void)setEffectiveBundleIdentifier:(NSString *)arg1 ;
-(id)authorizationRequestBlock;
-(void)setAuthorizationRequestBlock:(id)arg1 ;
-(BOOL)usesCLMapCorrection;
-(BOOL)shouldShiftIfNecessary;
-(BOOL)isTracePlayer;
-(double)timeScale;
@end

