/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNLocationProviderDelegate.h>
#import <libobjc.A.dylib/MNLocationProvider.h>

@protocol MNLocationProviderDelegate;
@class MNCoreLocationProvider, NSString, NSBundle;

@interface MNHybridLocationProvider : NSObject <MNLocationProviderDelegate, MNLocationProvider> {

	unsigned long long _mode;
	double _desiredAccuracy;
	MNCoreLocationProvider* _coreLocationProvider;
	id<MNLocationProviderDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long mode; 
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
@property (nonatomic,readonly) BOOL coarseModeEnabled; 
@property (nonatomic,readonly) BOOL usesCLMapCorrection; 
@property (nonatomic,readonly) BOOL isSimulation; 
@property (nonatomic,readonly) BOOL isTracePlayer; 
@property (nonatomic,readonly) unsigned long long traceVersion; 
@property (nonatomic,readonly) double timeScale; 
-(void)stopUpdatingLocation;
-(void)startUpdatingLocation;
-(void)setDistanceFilter:(double)arg1 ;
-(void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2 ;
-(void)startUpdatingHeading;
-(id)initWithEffectiveBundle:(id)arg1 ;
-(void)stopUpdatingVehicleSpeed;
-(unsigned long long)mode;
-(BOOL)isTracePlayer;
-(void)locationProvider:(id)arg1 didReceiveError:(id)arg2 ;
-(void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1 ;
-(id)authorizationRequestBlock;
-(NSString *)effectiveBundleIdentifier;
-(void)locationProviderDidResumeLocationUpdates:(id)arg1 ;
-(BOOL)locationProviderShouldPauseLocationUpdates:(id)arg1 ;
-(void)_setEffectiveAccuracy:(double)arg1 ;
-(int)headingOrientation;
-(id)coreLocationProvider;
-(id)init;
-(BOOL)isSimulation;
-(void)setDesiredAccuracy:(double)arg1 ;
-(BOOL)coarseModeEnabled;
-(BOOL)usesCLMapCorrection;
-(void)stopUpdatingVehicleHeading;
-(id<MNLocationProviderDelegate>)delegate;
-(void)setEffectiveBundleIdentifier:(NSString *)arg1 ;
-(void)locationProviderDidChangeAuthorizationStatus:(id)arg1 ;
-(void)locationProvider:(id)arg1 didUpdateHeading:(id)arg2 ;
-(void)startUpdatingVehicleSpeed;
-(id)leechedLocationProvider;
-(BOOL)matchInfoEnabled;
-(double)desiredAccuracy;
-(void)startUpdatingVehicleHeading;
-(void)locationProvider:(id)arg1 didChangeCoarseMode:(BOOL)arg2 ;
-(void)setEffectiveBundle:(NSBundle *)arg1 ;
-(BOOL)isLocationServicesPreferencesDialogEnabled;
-(void)setAuthorizationRequestBlock:(id)arg1 ;
-(void)locationProvider:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)stopUpdatingHeading;
-(void)requestWhenInUseAuthorization;
-(double)expectedGpsUpdateInterval;
-(id)initWithEffectiveBundleIdentifier:(id)arg1 ;
-(void)locationProviderDidPauseLocationUpdates:(id)arg1 ;
-(void)locationProvider:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(double)distanceFilter;
-(int)authorizationStatus;
-(void)setHeadingOrientation:(int)arg1 ;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(void)setMatchInfoEnabled:(BOOL)arg1 ;
-(double)timeScale;
-(NSBundle *)effectiveBundle;
-(void)setMode:(unsigned long long)arg1 ;
-(void)setDelegate:(id<MNLocationProviderDelegate>)arg1 ;
-(void)_sharedInit;
-(void)resetForActiveTileGroupChanged;
-(unsigned long long)traceVersion;
@end

