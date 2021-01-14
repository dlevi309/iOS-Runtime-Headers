/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <libobjc.A.dylib/CLLocationManagerVehicleDelegate.h>
#import <libobjc.A.dylib/MNLocationProvider.h>

@protocol MNLocationProviderDelegate;
@class NSLock, CLLocationManager, MNLocationProviderCLParameters, NSBundle, NSString, NSRunLoop;

@interface MNCoreLocationProvider : NSObject <CLLocationManagerDelegate, CLLocationManagerVehicleDelegate, MNLocationProvider> {

	BOOL _waitingForAuthorization;
	BOOL _hasQueriedAuthorization;
	NSLock* _authorizationLock;
	BOOL _alternate;
	CLLocationManager* _clLocationManager;
	MNLocationProviderCLParameters* _clParameters;
	id<MNLocationProviderDelegate> _delegate;
	BOOL _locationServicesPreferencesDialogEnabled;
	int _authorizationStatus;
	BOOL _coarseModeEnabled;
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
@property (nonatomic,readonly) BOOL coarseModeEnabled;                                                                                     //@synthesize coarseModeEnabled=_coarseModeEnabled - In the implementation block
@property (nonatomic,readonly) BOOL usesCLMapCorrection; 
@property (nonatomic,readonly) BOOL isSimulation; 
@property (nonatomic,readonly) BOOL isTracePlayer; 
@property (nonatomic,readonly) unsigned long long traceVersion; 
@property (nonatomic,readonly) double timeScale; 
-(void)stopUpdatingLocation;
-(void)startUpdatingLocation;
-(void)setDistanceFilter:(double)arg1 ;
-(void)startUpdatingHeading;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(id)initWithEffectiveBundle:(id)arg1 ;
-(void)stopUpdatingVehicleSpeed;
-(BOOL)isTracePlayer;
-(void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(id)authorizationRequestBlock;
-(NSString *)effectiveBundleIdentifier;
-(void)requestLocation;
-(void)_createCLLocationManager;
-(void)_updateForCLParameters:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(int)headingOrientation;
-(id)init;
-(BOOL)isSimulation;
-(void)setDesiredAccuracy:(double)arg1 ;
-(BOOL)coarseModeEnabled;
-(BOOL)usesCLMapCorrection;
-(void)locationManager:(id)arg1 didUpdateHeading:(id)arg2 ;
-(void)stopUpdatingVehicleHeading;
-(id<MNLocationProviderDelegate>)delegate;
-(void)setEffectiveBundleIdentifier:(NSString *)arg1 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)startUpdatingVehicleSpeed;
-(BOOL)matchInfoEnabled;
-(double)desiredAccuracy;
-(void)startUpdatingVehicleHeading;
-(void)locationManagerDidChangeAuthorization:(id)arg1 ;
-(void)setEffectiveBundle:(NSBundle *)arg1 ;
-(BOOL)isLocationServicesPreferencesDialogEnabled;
-(void)setAuthorizationRequestBlock:(id)arg1 ;
-(void)stopUpdatingHeading;
-(void)requestWhenInUseAuthorization;
-(double)expectedGpsUpdateInterval;
-(id)initWithEffectiveBundleIdentifier:(id)arg1 ;
-(double)distanceFilter;
-(void)setUpdatingLocations:(BOOL)arg1 ;
-(int)authorizationStatus;
-(void)setHeadingOrientation:(int)arg1 ;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)setMatchInfoEnabled:(BOOL)arg1 ;
-(double)timeScale;
-(NSBundle *)effectiveBundle;
-(void)setCLParameters:(id)arg1 ;
-(CLLocationManager *)_clLocationManager;
-(void)setDelegate:(id<MNLocationProviderDelegate>)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(id)arg2 ;
-(void)_sharedInit;
-(void)resetForActiveTileGroupChanged;
-(void)_resetForNewEffectiveBundle;
-(void)_updateAuthorizationStatus;
-(BOOL)updatingLocations;
-(unsigned long long)traceVersion;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(id)arg2 ;
-(void)dealloc;
@end

