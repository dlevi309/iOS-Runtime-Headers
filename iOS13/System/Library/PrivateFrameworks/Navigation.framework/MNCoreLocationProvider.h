/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <libobjc.A.dylib/CLLocationManagerVehicleDelegate.h>
#import <libobjc.A.dylib/MNLocationProvider.h>

@protocol MNLocationProviderDelegate;
@class NSLock, CLLocationManager, NSBundle, NSString, NSRunLoop;

@interface MNCoreLocationProvider : NSObject <CLLocationManagerDelegate, CLLocationManagerVehicleDelegate, MNLocationProvider> {

	BOOL _waitingForAuthorization;
	BOOL _hasQueriedAuthorization;
	NSLock* _authorizationLock;
	BOOL _alternate;
	CLLocationManager* _clLocationManager;
	id<MNLocationProviderDelegate> _delegate;
	BOOL _locationServicesPreferencesDialogEnabled;
	int _authorizationStatus;
	NSBundle* _effectiveBundle;
	NSString* _effectiveBundleIdentifier;
	/*^block*/id _authorizationRequestBlock;
	NSRunLoop* _debug_initRunLoop;
	NSRunLoop* _debug_deinitRunLoop;
	BOOL _updatingLocations;

}

@property (nonatomic,readonly) CLLocationManager * _clLocationManager; 
@property (assign,nonatomic) BOOL updatingLocations;                                                                                       //@synthesize updatingLocations=_updatingLocations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNLocationProviderDelegate> delegate;                                                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSBundle * effectiveBundle; 
@property (nonatomic,copy) NSString * effectiveBundleIdentifier; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) BOOL locationServicesPreferencesDialogEnabled; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) BOOL matchInfoEnabled; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,copy) id authorizationRequestBlock; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (nonatomic,readonly) int authorizationStatus; 
@property (assign,nonatomic) long long activityType; 
@property (nonatomic,readonly) BOOL usesCLMapCorrection; 
@property (nonatomic,readonly) BOOL isSimulation; 
@property (nonatomic,readonly) BOOL isTracePlayer; 
@property (nonatomic,readonly) unsigned long long traceVersion; 
@property (nonatomic,readonly) double timeScale; 
-(id)init;
-(void)dealloc;
-(id<MNLocationProviderDelegate>)delegate;
-(void)setDelegate:(id<MNLocationProviderDelegate>)arg1 ;
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
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(id)arg2 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(id)arg2 ;
-(void)requestWhenInUseAuthorization;
-(int)authorizationStatus;
-(id)initWithEffectiveBundleIdentifier:(id)arg1 ;
-(id)initWithEffectiveBundle:(id)arg1 ;
-(double)expectedGpsUpdateInterval;
-(void)requestLocation;
-(void)setHeadingOrientation:(int)arg1 ;
-(int)headingOrientation;
-(void)stopUpdatingHeading;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(BOOL)isLocationServicesPreferencesDialogEnabled;
-(void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1 ;
-(void)startUpdatingVehicleSpeed;
-(void)stopUpdatingVehicleSpeed;
-(void)startUpdatingVehicleHeading;
-(void)stopUpdatingVehicleHeading;
-(NSBundle *)effectiveBundle;
-(BOOL)isSimulation;
-(void)_sharedInit;
-(void)_createCLLocationManager;
-(CLLocationManager *)_clLocationManager;
-(void)_updateAuthorizationStatus;
-(void)_resetForNewEffectiveBundle;
-(void)setEffectiveBundle:(NSBundle *)arg1 ;
-(NSString *)effectiveBundleIdentifier;
-(void)setEffectiveBundleIdentifier:(NSString *)arg1 ;
-(id)authorizationRequestBlock;
-(void)setAuthorizationRequestBlock:(id)arg1 ;
-(BOOL)usesCLMapCorrection;
-(BOOL)isTracePlayer;
-(double)timeScale;
-(void)resetForActiveTileGroupChanged;
-(unsigned long long)traceVersion;
-(void)setUpdatingLocations:(BOOL)arg1 ;
-(BOOL)updatingLocations;
@end

